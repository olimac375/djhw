
/* verilator lint_off UNUSEDSIGNAL */

module	DJ #(
    parameter   FFT_IWIDTH = 16,
    parameter   FFT_OWIDTH = 21,
    parameter   IFFT_IWIDTH = 21,
    parameter   IFFT_OWIDTH = 26,
    parameter    LGWIDTH = 9
)(
    input               clk,  //  Master Clock
    input               reset,
 
    input    [FFT_IWIDTH - 1: 0] writedata,
    input               write,
    input               read,

    input               stream_address,

    output   signed [FFT_IWIDTH - 1: 0] left_fifo_sink_stream, // from avalon bus
    output                      left_fifo_sink_valid,
    input                      left_fifo_sink_ready,
    input   signed [FFT_IWIDTH - 1: 0] left_fifo_source_stream, // to fft block
    input                       left_fifo_source_valid,
    output                      left_fifo_source_ready,
    input   left_fifo_almost_full,
    input   left_fifo_almost_empty,
    // output  [1: 0]      left_fifo_csr_address,
    // output      left_fifo_csr_read,
    // output      left_fifo_csr_write,
    // input  [31:0] left_fifo_csr_readdata,
    // output [31:0] left_fifo_csr_writedata,
    // output  left_fifo_interrupt,

    output   signed  [FFT_IWIDTH - 1: 0] right_fifo_sink_stream, // from avalon bus
    output                      right_fifo_sink_valid,
    input                      right_fifo_sink_ready,
    input   signed [FFT_IWIDTH - 1: 0] right_fifo_source_stream, // to fft block
    input                       right_fifo_source_valid,
    output                      right_fifo_source_ready,
    input   right_fifo_almost_full,
    input   right_fifo_almost_empty,
    // output  right_fifo_interrupt,

    output    signed [FFT_IWIDTH - 1: 0] codec_left_fifo_sink_stream, // from avalon bus
    output                      codec_left_fifo_sink_valid,
    input                      codec_left_fifo_sink_ready,
    input   signed [FFT_IWIDTH - 1: 0] codec_left_fifo_source_stream, // to fft block
    input                       codec_left_fifo_source_valid,
    output                      codec_left_fifo_source_ready,
    input   codec_left_fifo_almost_full,
    input   codec_left_fifo_almost_empty,
    // output  codec_left_fifo_interrupt,

    output    signed [FFT_IWIDTH - 1: 0] codec_right_fifo_sink_stream, // from avalon bus
    output                      codec_right_fifo_sink_valid,
    input                      codec_right_fifo_sink_ready,
    input   signed [FFT_IWIDTH - 1: 0] codec_right_fifo_source_stream, // to fft block
    input                       codec_right_fifo_source_valid,
    output                      codec_right_fifo_source_ready,
    input   codec_right_fifo_almost_full,
    input   codec_right_fifo_almost_empty,
    // output  [1: 0]      codec_left_fifo_csr_address,
    // output      codec_left_fifo_csr_read,
    // output      codec_left_fifo_csr_write,
    // input  [31:0] codec_left_fifo_csr_readdata,
    // output [31:0] codec_left_fifo_csr_writedata,
    // output  codec_right_fifo_interrupt,


    output  reg left_stream_interrupt_irq,
    output  reg right_stream_interrupt_irq,
    
    output   [FFT_IWIDTH - 1: 0] readdata,


    output  signed [IFFT_OWIDTH - 1: 0] mixed_sample

);


// COMMON LOGIC 

assign left_fifo_sink_valid = ~stream_address ? write : 1'b0; 
assign right_fifo_sink_valid = stream_address ? write : 1'b0;

assign mixed_sample = codec_left_fifo_source_stream + codec_right_fifo_source_stream;

/****************** 
        LEFT DECLARATIONS
********************/

// FFT Block 
wire                                left_fft_ce;
wire [(2 * FFT_OWIDTH - 1) : 0]     left_fft_o_result;
wire                                left_fft_o_sync;

// IFFT Block
wire                                left_ifft_i_ce;
wire [(2 * IFFT_IWIDTH - 1) : 0]    left_ifft_i_sample;
reg                                 left_ifft_i_reset;
wire   [2 * IFFT_OWIDTH - 1: 0]     left_ifft_o_result;
wire                                left_ifft_o_sync;

// LPF Block
reg [(LGWIDTH):0]                   left_lpf_cutoff;
wire                                left_lpf_o_ce, left_lpf_o_sync;
wire [(2 * IFFT_IWIDTH - 1) : 0]    left_lpf_o_sample;

/****************** 
        RIGHT DECLARATIONS
********************/

// FFT Block 
wire                                right_fft_ce;
wire [(2 * FFT_OWIDTH - 1) : 0]     right_fft_o_result;
wire                                right_fft_o_sync;

// IFFT Block
wire                                right_ifft_i_ce;
wire [(2 * IFFT_IWIDTH - 1) : 0]    right_ifft_i_sample;
reg                                 right_ifft_i_reset;
wire   [2 * IFFT_OWIDTH - 1: 0]     right_ifft_o_result;
wire                                right_ifft_o_sync;

// LPF Block
reg [(LGWIDTH):0]                   right_lpf_cutoff;
wire                                right_lpf_o_ce, right_lpf_o_sync;
wire [(2 * IFFT_IWIDTH - 1) : 0]    right_lpf_o_sample;





/****************** 
        LEFT LOGIC
********************/


// only allow pipeline to proceed if values are available at the input 
// AND the output buffer is not at risk of overflowing
assign left_fft_ce = left_fifo_source_valid && codec_left_fifo_sink_ready;
assign left_fifo_source_ready = left_fft_ce;
assign left_fifo_sink_stream = writedata;

assign codec_left_fifo_sink_valid = left_fifo_source_ready;
assign codec_left_fifo_sink_stream = left_ifft_o_result[FFT_IWIDTH  + IFFT_OWIDTH - 1: IFFT_OWIDTH];


// Latch interrupt until output buffer has emptied 
always @(posedge clk) begin

	if (codec_left_fifo_almost_empty)
		left_stream_interrupt_irq <= 1'b0;
	else if (codec_left_fifo_almost_full || left_fifo_almost_full)
        left_stream_interrupt_irq <= 1'b1;
	
end


wire	left_w_syncd;
reg	    left_r_syncd;

// Synchronize and latch FFT windows with IFFT
always @(posedge clk) begin

	if (reset)
		left_r_syncd <= 1'b0;
	else
		left_r_syncd <= left_r_syncd || left_fft_o_sync;
	
end

assign	left_w_syncd = left_r_syncd || left_fft_o_sync;
 

// Generate FFT Block
fftmain left_fft(
    .i_clk(clk),
    .i_reset(reset),
    .i_ce(left_fft_ce),
    .i_sample({left_fifo_source_stream, 16'b0}),
    .o_result(left_fft_o_result),
    .o_sync(left_fft_o_sync));



assign left_lpf_cutoff = 10'd10; 

// Generate LPF Block
LPF #(
    .LGWIDTH(LGWIDTH),
    .LGFILTWIDTH(5)
) left_lpf (   
    .i_cutoff(left_lpf_cutoff),
    .i_clk(clk),
    .i_reset(left_fft_o_sync), 
    .i_ce(((left_fft_ce)&&(left_w_syncd))),
    .i_sample(left_fft_o_result), 
    .i_sync(left_fft_o_sync),
    .o_ce(left_lpf_o_ce),
    .o_sample(left_lpf_o_sample), 
    .o_sync(left_lpf_o_sync));


assign left_ifft_i_ce =     left_lpf_o_ce;
assign left_ifft_i_sample = left_lpf_o_sample;


// Generate IFFT Block
ifftmain left_ifft(
    .i_clk(clk),
    .i_reset(reset),
    .i_ce(left_ifft_i_ce),
    .i_sample(left_ifft_i_sample),
    .o_result(left_ifft_o_result),
    .o_sync(left_ifft_o_sync));


/****************** 
        RIGHT LOGIC
********************/


// only allow pipeline to proceed if values are available at the input 
// AND the output buffer is not at risk of overflowing
assign right_fft_ce = right_fifo_source_valid && codec_right_fifo_sink_ready;
assign right_fifo_source_ready = right_fft_ce;
assign right_fifo_sink_stream = writedata;

assign codec_right_fifo_sink_valid = right_fifo_source_ready;
assign codec_right_fifo_sink_stream = right_ifft_o_result[FFT_IWIDTH  + IFFT_OWIDTH - 1: IFFT_OWIDTH];


// Latch interrupt until output buffer has emptied 
always @(posedge clk) begin

	if (codec_right_fifo_almost_empty)
		right_stream_interrupt_irq <= 1'b0;
	else if (codec_right_fifo_almost_full || right_fifo_almost_full)
        right_stream_interrupt_irq <= 1'b1;
	
end


wire	right_w_syncd;
reg	    right_r_syncd;

// Synchronize and latch FFT windows with IFFT
always @(posedge clk) begin

	if (reset)
		right_r_syncd <= 1'b0;
	else
		right_r_syncd <= right_r_syncd || right_fft_o_sync;
	
end

assign	right_w_syncd = right_r_syncd || right_fft_o_sync;
 

// // Generate FFT Block
// fftmain right_fft(
//     .i_clk(clk),
//     .i_reset(reset),
//     .i_ce(right_fft_ce),
//     .i_sample({right_fifo_source_stream, 16'b0}),
//     .o_result(right_fft_o_result),
//     .o_sync(right_fft_o_sync));



// assign right_lpf_cutoff = 10'd10; 

// // Generate LPF Block
// LPF #(
//     .LGWIDTH(LGWIDTH),
//     .LGFILTWIDTH(5)
// ) right_lpf (   
//     .i_cutoff(right_lpf_cutoff),
//     .i_clk(clk),
//     .i_reset(right_fft_o_sync), 
//     .i_ce(((right_fft_ce)&&(right_w_syncd))),
//     .i_sample(right_fft_o_result), 
//     .i_sync(right_fft_o_sync),
//     .o_ce(right_lpf_o_ce),
//     .o_sample(right_lpf_o_sample), 
//     .o_sync(right_lpf_o_sync));


// assign right_ifft_i_ce =     right_lpf_o_ce;
// assign right_ifft_i_sample = right_lpf_o_sample;


// // Generate IFFT Block
// ifftmain right_ifft(
//     .i_clk(clk),
//     .i_reset(reset),
//     .i_ce(right_ifft_i_ce),
//     .i_sample(right_ifft_i_sample),
//     .o_result(right_ifft_o_result),
//     .o_sync(right_ifft_o_sync));

assign right_ifft_o_result[FFT_IWIDTH + IFFT_OWIDTH - 1: IFFT_OWIDTH] = right_fifo_source_stream;






reg [2:0] ctr;

wire clk_div;
assign clk_div = ctr[2];

always @(posedge clk) ctr <= ctr + 1;


assign codec_left_fifo_source_ready = (ctr == 0) ? 1'b1 : 1'b0;

assign codec_right_fifo_source_ready = codec_left_fifo_source_ready;


	  
endmodule
 


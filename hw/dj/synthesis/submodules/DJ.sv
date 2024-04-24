
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

    output    [FFT_IWIDTH - 1: 0] left_fifo_sink_stream, // from avalon bus
    output                      left_fifo_sink_valid,
    input                      left_fifo_sink_ready,
    input   [FFT_IWIDTH - 1: 0] left_fifo_source_stream, // to fft block
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

    output    [FFT_IWIDTH - 1: 0] right_fifo_sink_stream, // from avalon bus
    output                      right_fifo_sink_valid,
    input                      right_fifo_sink_ready,
    input   [FFT_IWIDTH - 1: 0] right_fifo_source_stream, // to fft block
    input                       right_fifo_source_valid,
    output                      right_fifo_source_ready,
    input   right_fifo_almost_full,
    input   right_fifo_almost_empty,
    // output  right_fifo_interrupt,

    output    [FFT_IWIDTH - 1: 0] codec_left_fifo_sink_stream, // from avalon bus
    output                      codec_left_fifo_sink_valid,
    input                      codec_left_fifo_sink_ready,
    input   [FFT_IWIDTH - 1: 0] codec_left_fifo_source_stream, // to fft block
    input                       codec_left_fifo_source_valid,
    output                      codec_left_fifo_source_ready,
    input   codec_left_fifo_almost_full,
    input   codec_left_fifo_almost_empty,
    // output  codec_left_fifo_interrupt,

    output    [FFT_IWIDTH - 1: 0] codec_right_fifo_sink_stream, // from avalon bus
    output                      codec_right_fifo_sink_valid,
    input                      codec_right_fifo_sink_ready,
    input   [FFT_IWIDTH - 1: 0] codec_right_fifo_source_stream, // to fft block
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

    output  left_stream_interrupt_irq,
    output  right_stream_interrupt_irq,
    
    output   [FFT_IWIDTH - 1: 0] readdata




);


    wire   [2 * IFFT_OWIDTH - 1: 0] left_o_result;
    wire      left_o_sync;

wire left_fft_ce;

assign left_fft_ce = ~left_fifo_almost_empty;
assign left_fifo_source_ready = ~left_fifo_almost_empty;
assign left_fifo_sink_stream = writedata;
assign left_fifo_sink_valid = ~stream_address ? write : 1'b0; 


assign right_fifo_sink_valid = stream_address ? write : 1'b0;


assign codec_left_fifo_sink_valid = left_ifft_i_ce;
assign codec_left_fifo_sink_stream = left_o_result[FFT_IWIDTH  + IFFT_OWIDTH - 1: IFFT_OWIDTH];



// always @(posedge clk) begin
//     if (write) begin
//         if (stream_address) begin
//             left_fifo_sink_valid <= 1'b1;
//         end
//     end
//     else begin
//         left_fifo_sink_valid <= 1'b0;
//     end


// end
 


wire left_fft_o_sync;
reg left_ifft_i_reset;

wire [(2 * FFT_OWIDTH - 1) : 0] left_fft_o_result;
wire [(2 * IFFT_IWIDTH - 1) : 0] left_ifft_i_sample;

wire [IFFT_OWIDTH - 1: 0] out_re;
wire [IFFT_OWIDTH - 1: 0] out_im;

assign out_re = left_o_result[2 * IFFT_OWIDTH - 1: IFFT_OWIDTH];
assign out_im = left_o_result[IFFT_OWIDTH - 1: 0];


wire	left_w_syncd;
reg	    left_r_syncd;
// Latch CE after first FFT block done 
always @(posedge clk) begin

	if (reset)
		left_r_syncd <= 1'b0;
	else
		left_r_syncd <= left_r_syncd || left_fft_o_sync;

	// ifft_i_sample <= fft_o_result
	

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


reg [(LGWIDTH):0] left_lpf_cutoff;

assign left_lpf_cutoff = 10'd10; 

wire left_lpf_o_ce, left_lpf_o_sync;
wire [(2 * IFFT_IWIDTH - 1) : 0] left_lpf_o_sample;

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


wire left_ifft_i_ce;
assign left_ifft_i_ce = left_lpf_o_ce;

assign left_ifft_i_sample = left_lpf_o_sample;

// Generate IFFT Block
ifftmain left_ifft(
    .i_clk(clk),
    .i_reset(reset),
    .i_ce(left_ifft_i_ce),
    .i_sample(left_ifft_i_sample),
    .o_result(left_o_result),
    .o_sync(left_o_sync));



reg [2:0] ctr;

wire clk_div;
assign clk_div = ctr[2];

always @(posedge clk) ctr <= ctr + 1;


assign codec_left_fifo_source_ready = (ctr == 0) ? 1'b1 : 1'b0;




// assign readdata = o_result[FFT_IWIDTH  + IFFT_OWIDTH - 1: IFFT_OWIDTH];
	  
endmodule
 


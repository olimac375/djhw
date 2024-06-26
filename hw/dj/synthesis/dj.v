// dj.v

// Generated using ACDS version 23.1 991

`timescale 1 ps / 1 ps
module dj (
		input  wire        clk_clk,                         //                         clk.clk
		input  wire [15:0] dj_0_avalon_slave_0_writedata,   //         dj_0_avalon_slave_0.writedata
		input  wire        dj_0_avalon_slave_0_write,       //                            .write
		input  wire        dj_0_avalon_slave_0_read,        //                            .read
		output wire [15:0] dj_0_avalon_slave_0_readdata,    //                            .readdata
		input  wire        dj_0_avalon_slave_0_address,     //                            .address
		output wire        dj_0_left_stream_interrupt_irq,  //  dj_0_left_stream_interrupt.irq
		output wire        dj_0_right_stream_interrupt_irq, // dj_0_right_stream_interrupt.irq
		input  wire        reset_reset_n                    //                       reset.reset_n
	);

	wire         codec_left_fifo_almost_empty_data;  // codec_left_fifo:almost_empty_data -> DJ_0:codec_left_fifo_almost_empty
	wire         codec_right_fifo_almost_empty_data; // codec_right_fifo:almost_empty_data -> DJ_0:codec_right_fifo_almost_empty
	wire         left_sc_fifo_almost_empty_data;     // left_sc_fifo:almost_empty_data -> DJ_0:left_fifo_almost_empty
	wire         right_sc_fifo_almost_empty_data;    // right_sc_fifo:almost_empty_data -> DJ_0:right_fifo_almost_empty
	wire         codec_left_fifo_almost_full_data;   // codec_left_fifo:almost_full_data -> DJ_0:codec_left_fifo_almost_full
	wire         codec_right_fifo_almost_full_data;  // codec_right_fifo:almost_full_data -> DJ_0:codec_right_fifo_almost_full
	wire         left_sc_fifo_almost_full_data;      // left_sc_fifo:almost_full_data -> DJ_0:left_fifo_almost_full
	wire         right_sc_fifo_almost_full_data;     // right_sc_fifo:almost_full_data -> DJ_0:right_fifo_almost_full
	wire         dj_0_codec_left_fifo_sink_valid;    // DJ_0:codec_left_fifo_sink_valid -> codec_left_fifo:in_valid
	wire  [15:0] dj_0_codec_left_fifo_sink_data;     // DJ_0:codec_left_fifo_sink_stream -> codec_left_fifo:in_data
	wire         dj_0_codec_left_fifo_sink_ready;    // codec_left_fifo:in_ready -> DJ_0:codec_left_fifo_sink_ready
	wire         dj_0_codec_right_fifo_sink_valid;   // DJ_0:codec_right_fifo_sink_valid -> codec_right_fifo:in_valid
	wire  [15:0] dj_0_codec_right_fifo_sink_data;    // DJ_0:codec_right_fifo_sink_stream -> codec_right_fifo:in_data
	wire         dj_0_codec_right_fifo_sink_ready;   // codec_right_fifo:in_ready -> DJ_0:codec_right_fifo_sink_ready
	wire         dj_0_left_fifo_sink_valid;          // DJ_0:left_fifo_sink_valid -> left_sc_fifo:in_valid
	wire  [15:0] dj_0_left_fifo_sink_data;           // DJ_0:left_fifo_sink_stream -> left_sc_fifo:in_data
	wire         dj_0_left_fifo_sink_ready;          // left_sc_fifo:in_ready -> DJ_0:left_fifo_sink_ready
	wire         codec_left_fifo_out_valid;          // codec_left_fifo:out_valid -> DJ_0:codec_left_fifo_source_valid
	wire  [15:0] codec_left_fifo_out_data;           // codec_left_fifo:out_data -> DJ_0:codec_left_fifo_source_stream
	wire         codec_left_fifo_out_ready;          // DJ_0:codec_left_fifo_source_ready -> codec_left_fifo:out_ready
	wire         codec_right_fifo_out_valid;         // codec_right_fifo:out_valid -> DJ_0:codec_right_fifo_source_valid
	wire  [15:0] codec_right_fifo_out_data;          // codec_right_fifo:out_data -> DJ_0:codec_right_fifo_source_stream
	wire         codec_right_fifo_out_ready;         // DJ_0:codec_right_fifo_source_ready -> codec_right_fifo:out_ready
	wire         left_sc_fifo_out_valid;             // left_sc_fifo:out_valid -> DJ_0:left_fifo_source_valid
	wire  [15:0] left_sc_fifo_out_data;              // left_sc_fifo:out_data -> DJ_0:left_fifo_source_stream
	wire         left_sc_fifo_out_ready;             // DJ_0:left_fifo_source_ready -> left_sc_fifo:out_ready
	wire         right_sc_fifo_out_valid;            // right_sc_fifo:out_valid -> DJ_0:right_fifo_source_valid
	wire  [15:0] right_sc_fifo_out_data;             // right_sc_fifo:out_data -> DJ_0:right_fifo_source_stream
	wire         right_sc_fifo_out_ready;            // DJ_0:right_fifo_source_ready -> right_sc_fifo:out_ready
	wire         dj_0_right_fifo_sink_valid;         // DJ_0:right_fifo_sink_valid -> right_sc_fifo:in_valid
	wire  [15:0] dj_0_right_fifo_sink_data;          // DJ_0:right_fifo_sink_stream -> right_sc_fifo:in_data
	wire         dj_0_right_fifo_sink_ready;         // right_sc_fifo:in_ready -> DJ_0:right_fifo_sink_ready
	wire         rst_controller_reset_out_reset;     // rst_controller:reset_out -> [DJ_0:reset, codec_left_fifo:reset, codec_right_fifo:reset, left_sc_fifo:reset, right_sc_fifo:reset]

	DJ #(
		.FFT_IWIDTH  (16),
		.FFT_OWIDTH  (21),
		.IFFT_IWIDTH (21),
		.IFFT_OWIDTH (26),
		.LGWIDTH     (9)
	) dj_0 (
		.writedata                      (dj_0_avalon_slave_0_writedata),      //                avalon_slave_0.writedata
		.write                          (dj_0_avalon_slave_0_write),          //                              .write
		.read                           (dj_0_avalon_slave_0_read),           //                              .read
		.readdata                       (dj_0_avalon_slave_0_readdata),       //                              .readdata
		.stream_address                 (dj_0_avalon_slave_0_address),        //                              .address
		.left_fifo_almost_full          (left_sc_fifo_almost_full_data),      //         left_fifo_almost_full.data
		.left_fifo_almost_empty         (left_sc_fifo_almost_empty_data),     //        left_fifo_almost_empty.data
		.left_fifo_source_ready         (left_sc_fifo_out_ready),             //              left_fifo_source.ready
		.left_fifo_source_stream        (left_sc_fifo_out_data),              //                              .data
		.left_fifo_source_valid         (left_sc_fifo_out_valid),             //                              .valid
		.right_fifo_source_ready        (right_sc_fifo_out_ready),            //             right_fifo_source.ready
		.right_fifo_source_stream       (right_sc_fifo_out_data),             //                              .data
		.right_fifo_source_valid        (right_sc_fifo_out_valid),            //                              .valid
		.right_fifo_sink_ready          (dj_0_right_fifo_sink_ready),         //               right_fifo_sink.ready
		.right_fifo_sink_stream         (dj_0_right_fifo_sink_data),          //                              .data
		.right_fifo_sink_valid          (dj_0_right_fifo_sink_valid),         //                              .valid
		.left_fifo_sink_ready           (dj_0_left_fifo_sink_ready),          //                left_fifo_sink.ready
		.left_fifo_sink_stream          (dj_0_left_fifo_sink_data),           //                              .data
		.left_fifo_sink_valid           (dj_0_left_fifo_sink_valid),          //                              .valid
		.right_fifo_almost_empty        (right_sc_fifo_almost_empty_data),    //       right_fifo_almost_empty.data
		.right_fifo_almost_full         (right_sc_fifo_almost_full_data),     //        right_fifo_almost_full.data
		.reset                          (rst_controller_reset_out_reset),     //                         reset.reset
		.clk                            (clk_clk),                            //                           clk.clk
		.codec_left_fifo_source_ready   (codec_left_fifo_out_ready),          //        codec_left_fifo_source.ready
		.codec_left_fifo_source_stream  (codec_left_fifo_out_data),           //                              .data
		.codec_left_fifo_source_valid   (codec_left_fifo_out_valid),          //                              .valid
		.codec_right_fifo_source_ready  (codec_right_fifo_out_ready),         //       codec_right_fifo_source.ready
		.codec_right_fifo_source_stream (codec_right_fifo_out_data),          //                              .data
		.codec_right_fifo_source_valid  (codec_right_fifo_out_valid),         //                              .valid
		.codec_left_fifo_sink_ready     (dj_0_codec_left_fifo_sink_ready),    //          codec_left_fifo_sink.ready
		.codec_left_fifo_sink_stream    (dj_0_codec_left_fifo_sink_data),     //                              .data
		.codec_left_fifo_sink_valid     (dj_0_codec_left_fifo_sink_valid),    //                              .valid
		.codec_right_fifo_sink_ready    (dj_0_codec_right_fifo_sink_ready),   //         codec_right_fifo_sink.ready
		.codec_right_fifo_sink_stream   (dj_0_codec_right_fifo_sink_data),    //                              .data
		.codec_right_fifo_sink_valid    (dj_0_codec_right_fifo_sink_valid),   //                              .valid
		.codec_left_fifo_almost_full    (codec_left_fifo_almost_full_data),   //   codec_left_fifo_almost_full.data
		.codec_left_fifo_almost_empty   (codec_left_fifo_almost_empty_data),  //  codec_left_fifo_almost_empty.data
		.codec_right_fifo_almost_full   (codec_right_fifo_almost_full_data),  //  codec_right_fifo_almost_full.data
		.codec_right_fifo_almost_empty  (codec_right_fifo_almost_empty_data), // codec_right_fifo_almost_empty.data
		.left_stream_interrupt_irq      (dj_0_left_stream_interrupt_irq),     //         left_stream_interrupt.irq
		.right_stream_interrupt_irq     (dj_0_right_stream_interrupt_irq)     //        right_stream_interrupt.irq
	);

	altera_avalon_sc_fifo #(
		.SYMBOLS_PER_BEAT    (2),
		.BITS_PER_SYMBOL     (8),
		.FIFO_DEPTH          (1024),
		.CHANNEL_WIDTH       (0),
		.ERROR_WIDTH         (0),
		.USE_PACKETS         (0),
		.USE_FILL_LEVEL      (1),
		.EMPTY_LATENCY       (3),
		.USE_MEMORY_BLOCKS   (1),
		.USE_STORE_FORWARD   (0),
		.USE_ALMOST_FULL_IF  (1),
		.USE_ALMOST_EMPTY_IF (1)
	) codec_left_fifo (
		.clk               (clk_clk),                           //          clk.clk
		.reset             (rst_controller_reset_out_reset),    //    clk_reset.reset
		.csr_address       (),                                  //          csr.address
		.csr_read          (),                                  //             .read
		.csr_write         (),                                  //             .write
		.csr_readdata      (),                                  //             .readdata
		.csr_writedata     (),                                  //             .writedata
		.almost_full_data  (codec_left_fifo_almost_full_data),  //  almost_full.data
		.almost_empty_data (codec_left_fifo_almost_empty_data), // almost_empty.data
		.in_data           (dj_0_codec_left_fifo_sink_data),    //           in.data
		.in_valid          (dj_0_codec_left_fifo_sink_valid),   //             .valid
		.in_ready          (dj_0_codec_left_fifo_sink_ready),   //             .ready
		.out_data          (codec_left_fifo_out_data),          //          out.data
		.out_valid         (codec_left_fifo_out_valid),         //             .valid
		.out_ready         (codec_left_fifo_out_ready),         //             .ready
		.in_startofpacket  (1'b0),                              //  (terminated)
		.in_endofpacket    (1'b0),                              //  (terminated)
		.out_startofpacket (),                                  //  (terminated)
		.out_endofpacket   (),                                  //  (terminated)
		.in_empty          (1'b0),                              //  (terminated)
		.out_empty         (),                                  //  (terminated)
		.in_error          (1'b0),                              //  (terminated)
		.out_error         (),                                  //  (terminated)
		.in_channel        (1'b0),                              //  (terminated)
		.out_channel       ()                                   //  (terminated)
	);

	altera_avalon_sc_fifo #(
		.SYMBOLS_PER_BEAT    (2),
		.BITS_PER_SYMBOL     (8),
		.FIFO_DEPTH          (1024),
		.CHANNEL_WIDTH       (0),
		.ERROR_WIDTH         (0),
		.USE_PACKETS         (0),
		.USE_FILL_LEVEL      (1),
		.EMPTY_LATENCY       (3),
		.USE_MEMORY_BLOCKS   (1),
		.USE_STORE_FORWARD   (0),
		.USE_ALMOST_FULL_IF  (1),
		.USE_ALMOST_EMPTY_IF (1)
	) codec_right_fifo (
		.clk               (clk_clk),                            //          clk.clk
		.reset             (rst_controller_reset_out_reset),     //    clk_reset.reset
		.csr_address       (),                                   //          csr.address
		.csr_read          (),                                   //             .read
		.csr_write         (),                                   //             .write
		.csr_readdata      (),                                   //             .readdata
		.csr_writedata     (),                                   //             .writedata
		.almost_full_data  (codec_right_fifo_almost_full_data),  //  almost_full.data
		.almost_empty_data (codec_right_fifo_almost_empty_data), // almost_empty.data
		.in_data           (dj_0_codec_right_fifo_sink_data),    //           in.data
		.in_valid          (dj_0_codec_right_fifo_sink_valid),   //             .valid
		.in_ready          (dj_0_codec_right_fifo_sink_ready),   //             .ready
		.out_data          (codec_right_fifo_out_data),          //          out.data
		.out_valid         (codec_right_fifo_out_valid),         //             .valid
		.out_ready         (codec_right_fifo_out_ready),         //             .ready
		.in_startofpacket  (1'b0),                               //  (terminated)
		.in_endofpacket    (1'b0),                               //  (terminated)
		.out_startofpacket (),                                   //  (terminated)
		.out_endofpacket   (),                                   //  (terminated)
		.in_empty          (1'b0),                               //  (terminated)
		.out_empty         (),                                   //  (terminated)
		.in_error          (1'b0),                               //  (terminated)
		.out_error         (),                                   //  (terminated)
		.in_channel        (1'b0),                               //  (terminated)
		.out_channel       ()                                    //  (terminated)
	);

	altera_avalon_sc_fifo #(
		.SYMBOLS_PER_BEAT    (2),
		.BITS_PER_SYMBOL     (8),
		.FIFO_DEPTH          (1024),
		.CHANNEL_WIDTH       (0),
		.ERROR_WIDTH         (0),
		.USE_PACKETS         (0),
		.USE_FILL_LEVEL      (1),
		.EMPTY_LATENCY       (3),
		.USE_MEMORY_BLOCKS   (1),
		.USE_STORE_FORWARD   (0),
		.USE_ALMOST_FULL_IF  (1),
		.USE_ALMOST_EMPTY_IF (1)
	) left_sc_fifo (
		.clk               (clk_clk),                        //          clk.clk
		.reset             (rst_controller_reset_out_reset), //    clk_reset.reset
		.csr_address       (),                               //          csr.address
		.csr_read          (),                               //             .read
		.csr_write         (),                               //             .write
		.csr_readdata      (),                               //             .readdata
		.csr_writedata     (),                               //             .writedata
		.almost_full_data  (left_sc_fifo_almost_full_data),  //  almost_full.data
		.almost_empty_data (left_sc_fifo_almost_empty_data), // almost_empty.data
		.in_data           (dj_0_left_fifo_sink_data),       //           in.data
		.in_valid          (dj_0_left_fifo_sink_valid),      //             .valid
		.in_ready          (dj_0_left_fifo_sink_ready),      //             .ready
		.out_data          (left_sc_fifo_out_data),          //          out.data
		.out_valid         (left_sc_fifo_out_valid),         //             .valid
		.out_ready         (left_sc_fifo_out_ready),         //             .ready
		.in_startofpacket  (1'b0),                           //  (terminated)
		.in_endofpacket    (1'b0),                           //  (terminated)
		.out_startofpacket (),                               //  (terminated)
		.out_endofpacket   (),                               //  (terminated)
		.in_empty          (1'b0),                           //  (terminated)
		.out_empty         (),                               //  (terminated)
		.in_error          (1'b0),                           //  (terminated)
		.out_error         (),                               //  (terminated)
		.in_channel        (1'b0),                           //  (terminated)
		.out_channel       ()                                //  (terminated)
	);

	altera_avalon_sc_fifo #(
		.SYMBOLS_PER_BEAT    (2),
		.BITS_PER_SYMBOL     (8),
		.FIFO_DEPTH          (1024),
		.CHANNEL_WIDTH       (0),
		.ERROR_WIDTH         (0),
		.USE_PACKETS         (0),
		.USE_FILL_LEVEL      (1),
		.EMPTY_LATENCY       (3),
		.USE_MEMORY_BLOCKS   (1),
		.USE_STORE_FORWARD   (0),
		.USE_ALMOST_FULL_IF  (1),
		.USE_ALMOST_EMPTY_IF (1)
	) right_sc_fifo (
		.clk               (clk_clk),                         //          clk.clk
		.reset             (rst_controller_reset_out_reset),  //    clk_reset.reset
		.csr_address       (),                                //          csr.address
		.csr_read          (),                                //             .read
		.csr_write         (),                                //             .write
		.csr_readdata      (),                                //             .readdata
		.csr_writedata     (),                                //             .writedata
		.almost_full_data  (right_sc_fifo_almost_full_data),  //  almost_full.data
		.almost_empty_data (right_sc_fifo_almost_empty_data), // almost_empty.data
		.in_data           (dj_0_right_fifo_sink_data),       //           in.data
		.in_valid          (dj_0_right_fifo_sink_valid),      //             .valid
		.in_ready          (dj_0_right_fifo_sink_ready),      //             .ready
		.out_data          (right_sc_fifo_out_data),          //          out.data
		.out_valid         (right_sc_fifo_out_valid),         //             .valid
		.out_ready         (right_sc_fifo_out_ready),         //             .ready
		.in_startofpacket  (1'b0),                            //  (terminated)
		.in_endofpacket    (1'b0),                            //  (terminated)
		.out_startofpacket (),                                //  (terminated)
		.out_endofpacket   (),                                //  (terminated)
		.in_empty          (1'b0),                            //  (terminated)
		.out_empty         (),                                //  (terminated)
		.in_error          (1'b0),                            //  (terminated)
		.out_error         (),                                //  (terminated)
		.in_channel        (1'b0),                            //  (terminated)
		.out_channel       ()                                 //  (terminated)
	);

	altera_reset_controller #(
		.NUM_RESET_INPUTS          (1),
		.OUTPUT_RESET_SYNC_EDGES   ("deassert"),
		.SYNC_DEPTH                (2),
		.RESET_REQUEST_PRESENT     (0),
		.RESET_REQ_WAIT_TIME       (1),
		.MIN_RST_ASSERTION_TIME    (3),
		.RESET_REQ_EARLY_DSRT_TIME (1),
		.USE_RESET_REQUEST_IN0     (0),
		.USE_RESET_REQUEST_IN1     (0),
		.USE_RESET_REQUEST_IN2     (0),
		.USE_RESET_REQUEST_IN3     (0),
		.USE_RESET_REQUEST_IN4     (0),
		.USE_RESET_REQUEST_IN5     (0),
		.USE_RESET_REQUEST_IN6     (0),
		.USE_RESET_REQUEST_IN7     (0),
		.USE_RESET_REQUEST_IN8     (0),
		.USE_RESET_REQUEST_IN9     (0),
		.USE_RESET_REQUEST_IN10    (0),
		.USE_RESET_REQUEST_IN11    (0),
		.USE_RESET_REQUEST_IN12    (0),
		.USE_RESET_REQUEST_IN13    (0),
		.USE_RESET_REQUEST_IN14    (0),
		.USE_RESET_REQUEST_IN15    (0),
		.ADAPT_RESET_REQUEST       (0)
	) rst_controller (
		.reset_in0      (~reset_reset_n),                 // reset_in0.reset
		.clk            (clk_clk),                        //       clk.clk
		.reset_out      (rst_controller_reset_out_reset), // reset_out.reset
		.reset_req      (),                               // (terminated)
		.reset_req_in0  (1'b0),                           // (terminated)
		.reset_in1      (1'b0),                           // (terminated)
		.reset_req_in1  (1'b0),                           // (terminated)
		.reset_in2      (1'b0),                           // (terminated)
		.reset_req_in2  (1'b0),                           // (terminated)
		.reset_in3      (1'b0),                           // (terminated)
		.reset_req_in3  (1'b0),                           // (terminated)
		.reset_in4      (1'b0),                           // (terminated)
		.reset_req_in4  (1'b0),                           // (terminated)
		.reset_in5      (1'b0),                           // (terminated)
		.reset_req_in5  (1'b0),                           // (terminated)
		.reset_in6      (1'b0),                           // (terminated)
		.reset_req_in6  (1'b0),                           // (terminated)
		.reset_in7      (1'b0),                           // (terminated)
		.reset_req_in7  (1'b0),                           // (terminated)
		.reset_in8      (1'b0),                           // (terminated)
		.reset_req_in8  (1'b0),                           // (terminated)
		.reset_in9      (1'b0),                           // (terminated)
		.reset_req_in9  (1'b0),                           // (terminated)
		.reset_in10     (1'b0),                           // (terminated)
		.reset_req_in10 (1'b0),                           // (terminated)
		.reset_in11     (1'b0),                           // (terminated)
		.reset_req_in11 (1'b0),                           // (terminated)
		.reset_in12     (1'b0),                           // (terminated)
		.reset_req_in12 (1'b0),                           // (terminated)
		.reset_in13     (1'b0),                           // (terminated)
		.reset_req_in13 (1'b0),                           // (terminated)
		.reset_in14     (1'b0),                           // (terminated)
		.reset_req_in14 (1'b0),                           // (terminated)
		.reset_in15     (1'b0),                           // (terminated)
		.reset_req_in15 (1'b0)                            // (terminated)
	);

endmodule

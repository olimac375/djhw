
module dj (
	clk_clk,
	dj_0_avalon_slave_0_writedata,
	dj_0_avalon_slave_0_write,
	dj_0_avalon_slave_0_read,
	dj_0_avalon_slave_0_readdata,
	dj_0_avalon_slave_0_address,
	reset_reset_n,
	dj_0_left_stream_interrupt_irq,
	dj_0_right_stream_interrupt_irq);	

	input		clk_clk;
	input	[15:0]	dj_0_avalon_slave_0_writedata;
	input		dj_0_avalon_slave_0_write;
	input		dj_0_avalon_slave_0_read;
	output	[15:0]	dj_0_avalon_slave_0_readdata;
	input		dj_0_avalon_slave_0_address;
	input		reset_reset_n;
	output		dj_0_left_stream_interrupt_irq;
	output		dj_0_right_stream_interrupt_irq;
endmodule

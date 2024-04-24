	dj u0 (
		.clk_clk                         (<connected-to-clk_clk>),                         //                         clk.clk
		.dj_0_avalon_slave_0_writedata   (<connected-to-dj_0_avalon_slave_0_writedata>),   //         dj_0_avalon_slave_0.writedata
		.dj_0_avalon_slave_0_write       (<connected-to-dj_0_avalon_slave_0_write>),       //                            .write
		.dj_0_avalon_slave_0_read        (<connected-to-dj_0_avalon_slave_0_read>),        //                            .read
		.dj_0_avalon_slave_0_readdata    (<connected-to-dj_0_avalon_slave_0_readdata>),    //                            .readdata
		.dj_0_avalon_slave_0_address     (<connected-to-dj_0_avalon_slave_0_address>),     //                            .address
		.reset_reset_n                   (<connected-to-reset_reset_n>),                   //                       reset.reset_n
		.dj_0_left_stream_interrupt_irq  (<connected-to-dj_0_left_stream_interrupt_irq>),  //  dj_0_left_stream_interrupt.irq
		.dj_0_right_stream_interrupt_irq (<connected-to-dj_0_right_stream_interrupt_irq>)  // dj_0_right_stream_interrupt.irq
	);


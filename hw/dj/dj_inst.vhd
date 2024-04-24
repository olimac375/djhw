	component dj is
		port (
			clk_clk                         : in  std_logic                     := 'X';             -- clk
			dj_0_avalon_slave_0_writedata   : in  std_logic_vector(15 downto 0) := (others => 'X'); -- writedata
			dj_0_avalon_slave_0_write       : in  std_logic                     := 'X';             -- write
			dj_0_avalon_slave_0_read        : in  std_logic                     := 'X';             -- read
			dj_0_avalon_slave_0_readdata    : out std_logic_vector(15 downto 0);                    -- readdata
			dj_0_avalon_slave_0_address     : in  std_logic                     := 'X';             -- address
			reset_reset_n                   : in  std_logic                     := 'X';             -- reset_n
			dj_0_left_stream_interrupt_irq  : out std_logic;                                        -- irq
			dj_0_right_stream_interrupt_irq : out std_logic                                         -- irq
		);
	end component dj;

	u0 : component dj
		port map (
			clk_clk                         => CONNECTED_TO_clk_clk,                         --                         clk.clk
			dj_0_avalon_slave_0_writedata   => CONNECTED_TO_dj_0_avalon_slave_0_writedata,   --         dj_0_avalon_slave_0.writedata
			dj_0_avalon_slave_0_write       => CONNECTED_TO_dj_0_avalon_slave_0_write,       --                            .write
			dj_0_avalon_slave_0_read        => CONNECTED_TO_dj_0_avalon_slave_0_read,        --                            .read
			dj_0_avalon_slave_0_readdata    => CONNECTED_TO_dj_0_avalon_slave_0_readdata,    --                            .readdata
			dj_0_avalon_slave_0_address     => CONNECTED_TO_dj_0_avalon_slave_0_address,     --                            .address
			reset_reset_n                   => CONNECTED_TO_reset_reset_n,                   --                       reset.reset_n
			dj_0_left_stream_interrupt_irq  => CONNECTED_TO_dj_0_left_stream_interrupt_irq,  --  dj_0_left_stream_interrupt.irq
			dj_0_right_stream_interrupt_irq => CONNECTED_TO_dj_0_right_stream_interrupt_irq  -- dj_0_right_stream_interrupt.irq
		);


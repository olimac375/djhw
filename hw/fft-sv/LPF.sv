module	LPF #(
	
		parameter WIDTH=21,
		parameter LGWIDTH=9,
		parameter LGP1=LGWIDTH+1,
		parameter  LGFILTWIDTH=5
		
	) (
		// {{{
		
		input wire	[(LGWIDTH):0] i_cutoff,

		input	wire	i_clk, i_reset, i_ce,
        input	wire	[(2*WIDTH-1):0]	i_sample,
		input 	wire 	i_sync,

		output  reg 	o_ce,
		output	reg	    [(2*WIDTH-1):0]	o_sample,
	    output	reg				o_sync
		// }}}
	);
 
	reg [(LGWIDTH):0] bin_idx;

	wire [WIDTH - 1: 0] sample_re, sample_im;
	wire [WIDTH - 1: 0] out_re, out_im;

	assign sample_re = i_sample[2 * WIDTH - 1 : WIDTH];
	assign sample_im = i_sample[WIDTH - 1: 0];

	assign out_re = o_sample[2 * WIDTH - 1 : WIDTH];
	assign out_im = o_sample[WIDTH - 1: 0];


    // reg	[(2*CWIDTH-1):0]	cmem [0:((1<<LGSPAN)-1)];

	// initial	$readmemh(COEFFILE,cmem);  
	always @(posedge i_clk) begin  
  
		o_ce <= i_ce;
		o_sync <= i_sync;

		if (i_reset) begin 
			bin_idx <= 1;
			o_sample <= i_sample;
		end 

		else begin
			bin_idx <= bin_idx + 1; 
			if (bin_idx < i_cutoff || bin_idx > LGP1'(('b1 << LGWIDTH)) - i_cutoff) begin
				o_sample <= i_sample; 
			end

			// // can this be realized in one clock cycle?
			// else if (bin_idx < i_cutoff + (LGP1'('b1 << LGFILTWIDTH))) begin
			// 	o_sample[2*WIDTH - 1: WIDTH] <= signed'((LGP1'(('b1 << LGFILTWIDTH)) + LGP1'(i_cutoff - bin_idx)) * sample_re) >>> LGFILTWIDTH;
			// 	o_sample[WIDTH - 1: 0] <= signed'((LGP1'('b1 << LGFILTWIDTH) + LGP1'(i_cutoff - bin_idx)) * sample_im) >>> LGFILTWIDTH;
			// 	// o_sample <= i_sample * bin_idx;

			// end 

			// else if (bin_idx > LGP1'(('b1 << LGWIDTH)) - (i_cutoff + (LGP1'('b1 << LGFILTWIDTH)))) begin
			// 	o_sample[2*WIDTH - 1: WIDTH] <= signed'((LGP1'(('b1 << LGFILTWIDTH)) + LGP1'(('b1 << LGWIDTH) - i_cutoff - bin_idx)) * sample_re) >>> LGFILTWIDTH;
			// 	o_sample[WIDTH - 1: 0] <= signed'((LGP1'('b1 << LGFILTWIDTH) + LGP1'(i_cutoff - bin_idx)) * sample_im) >>> LGFILTWIDTH;
			// 	// o_sample <= i_sample * bin_idx;

			// end 
			else begin
				o_sample <= '0;
			end 
		end  

 
  
	end
  
 
  


endmodule

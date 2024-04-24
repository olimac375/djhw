
#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "verilated.h"
#include "Vdj.h"
#include "verilated_vcd_c.h"

#include "AudioFile.h"


class	TB {
public:
	Vdj	*m_tb;


	// double		*m_tb_buf;
	// int			m_ntest;
	bool		m_syncd;
	unsigned long	m_tickcount;
	VerilatedVcdC*	m_trace;

	AudioFile<int32_t> curr_wav;
	int wav_idx;
	int sample_idx;

	TB(void) {
		m_tb = new Vdj;
		Verilated::traceEverOn(true);

		curr_wav.setNumChannels(2);
		curr_wav.setAudioBufferSize(2, 2100);
		curr_wav.setSampleRate(44100);
		curr_wav.setBitDepth(32);

		curr_wav.samples[0].resize(3000);
		curr_wav.samples[1].resize(3000);

		wav_idx = 0;
		sample_idx = 0;
	}

	virtual void opentrace(const char *vcdname) {
		if (!m_trace) {
			m_trace = new VerilatedVcdC;
			m_tb->trace(m_trace, 99);
			m_trace->open(vcdname);
		}
	}

	// void	tick(void) {
	// 	m_tb->clk_clk = 0;
	// 	m_tb->eval();
	// 	m_tb->clk_clk = 1;
	// 	m_tb->eval();
	// }

	void	tick(void) {
		m_tickcount++;

		m_tb->clk_clk = 0;
		m_tb->eval();
		if (m_trace)
			m_trace->dump((vluint64_t)(10*m_tickcount-2));
		m_tb->clk_clk = 1;
		m_tb->eval();
		if (m_trace)
			m_trace->dump((vluint64_t)(10*m_tickcount));
		m_tb->clk_clk = 0;
		m_tb->eval();
		if (m_trace) {
			m_trace->dump((vluint64_t)(10*m_tickcount+5));
			m_trace->flush();
		}
	}

	void	reset(void) {

		m_tb->reset_reset_n = 0;
		tick();
		m_tb->reset_reset_n = 1;
		tick();

		
	}


	

	


	
};


int	main(int argc, char **argv, char **envp) {
	Verilated::commandArgs(argc, argv);
	TB *tb = new TB;
	FILE	*fpout;

	printf("IFFT TB\n");
	fpout = fopen("tb.dbl", "w");
	if (NULL == fpout) {
		fprintf(stderr, "Cannot write output file, fft_tb.dbl\n");
		exit(-1);
	}

	tb->opentrace("tb.vcd");

	tb->reset();

	Vdj * dj = tb->m_tb;

	
	int i;
	for(i = 0; i < 40000; i++) {
		double cl, cr, W;
		uint16_t val;
		int j;

		
		if ((uint16_t)dj->dj_0_left_stream_interrupt_irq == 0) {
			
        
			dj->dj_0_avalon_slave_0_address = 0;

			static int k = 0;
			dj->dj_0_avalon_slave_0_write = 1;
			
			W = 2.0 * M_PI / 512;
			cl = cos(W * (4 * k )) * 100.0;

			cr = cos(W * (8*k)) * 0.00;

			k++;

			val = cr + cl;

			dj->dj_0_avalon_slave_0_writedata = val;
			tb->tick();
			
			
			// for(j = 0; j < val % 4 + 1; j++) {dj->dj_0_avalon_slave_0_write = 0;tb->tick();}
			// dj->dj_0_avalon_slave_0_write = 1;

		} else {
			dj->dj_0_avalon_slave_0_write = 0;
		}

		dj->dj_0_avalon_slave_0_write = 0;
		tb->tick();

	
		if ((uint16_t)dj->dj_0_right_stream_interrupt_irq == 0) {
			
			dj->dj_0_avalon_slave_0_address = 1;
			static int k = 0;
			dj->dj_0_avalon_slave_0_write = 1;
		

			k++;
			
			val = (k % 64 - 31) * 5;

			dj->dj_0_avalon_slave_0_writedata = val;
			tb->tick();

			// int tmp = rand() % 4 + 1;
			// for(j = 0; j < tmp; j++) {dj->dj_0_avalon_slave_0_write = 0;tb->tick();}
			// dj->dj_0_avalon_slave_0_write = 1;
		} else {
			dj->dj_0_avalon_slave_0_write = 0;
		}

		dj->dj_0_avalon_slave_0_write = 0;
		tb->tick();

		


	}





	fclose(fpout);
}



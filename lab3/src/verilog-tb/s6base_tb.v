/*
    Spartan 6 board testbench for PSD2020/2021 lab3 project (V1.0 - Nov, 9 2020)
	
    jca@fe.up.pt

	This Verilog code is property of University of Porto
	Its utilization beyond the scope of the course Digital Systems Design
	(Projeto de Sistemas Digitais) of the Integrated Master in Electrical 
	and Computer Engineering requires explicit authorization from the author.
	
*/
`timescale 1ns/1ps

// Configure testbench: Uncomment the following 'define' to enable debugging:
`define DEBUG_PRINT         // Print NDATA_TO_PRINT correct or error results
`define NDATA_TO_PRINT 20   // Number of OK/NOK results to print

/* KEEP THIS HERE BUT DO NOT USE IN THIS TESTBENCH
// `define DEBUG_PROBES   5   // Print the first N results at each 192k and 48k clock cycles:
*/

// Number of input samples to simulate
// set this constant to a constant integer or to the variable 'no_input_samples' that
// will be loaded with the actual number of input samples read from the input audio files
`define NSAMPLES_SIM   no_input_samples

/*
	Additional changes made:
		
	Fix golden_right & golden_left to correspond to expect output 
	of the right & left side respectively
	Update N_SAMPLES_LATENCY to work properly with modules in use
	
	
	Note that: 
	Depending of with modules are in use, aka value of mux,
	may be necessary to adapt the value of N_SAMPLES_LATENCY
	
	by Diogo Silva(up201809213) & Joao Pereira(up20190954)

*/




module s6base_tb;

//--------------------------------------------------------------------
// primary inputs:								
// clocks:
reg				clk100M, reset_n;

// push buttons:
wire				btnu, btnr, btnd, btnl, btnc;
reg       [4:0]     btns;

// slide switches:
wire				sw7, sw6, sw5, sw4, sw3, sw2, sw1, sw0;
reg       [7:0]     sws;

// LEDs:
wire 			    ld0, ld1, ld2, ld3, ld4, ld5, ld6, ld7;
wire      [7:0]     leds;

// RS232:
wire			rx, tx;

// LM4450 audio CODEC:
// These signals are driven by the LM4550 verification IP
reg  XTAL_IN;
wire RESET_N, SYNC;
wire SDATA_OUT;
wire BIT_CLK, SDATA_IN;

// PMOD connector (to the DAC):
wire PMOD1, PMOD2, PMOD3, PMOD4, PMOD7, PMOD8, PMOD9, PMOD10;


// VHDC connector:
wire VHDC1P,  VHDC1N, VHDC2P, VHDC2N, VHDC3P, VHDC3N, VHDC4P, VHDC4N, 
     VHDC5P,  VHDC5N, VHDC6P, VHDC6N, VHDC7P, VHDC7N, VHDC8P, VHDC8N, 
     VHDC9P,  VHDC9N,  VHDC10P, VHDC10N, VHDC11P, VHDC11N, VHDC12P, VHDC12N,
     VHDC13P, VHDC13N, VHDC14P, VHDC14N, VHDC15P, VHDC15N, VHDC16P, VHDC16N,
     VHDC17P, VHDC17N, VHDC18P, VHDC18N, VHDC19P, VHDC19N, VHDC20P, VHDC20N;


	 
// -----------------------------------------------------------------
// Testbench configuration parameters:         
parameter           
        // audio input files created by the Matlab script 'gensimdata.m'
        LEFT_IN_FILENAME  = "../simdata/audioin_left.hex",
		  RIGHT_IN_FILENAME = "../simdata/audioin_right.hex",
		  
		  // The file generated by the same script with the golden results:
		  OUTPUT_LEFT_GOLDEN_FILENAME  = "../simdata/output_left_golden.hex",
		  OUTPUT_RIGHT_GOLDEN_FILENAME  = "../simdata/output_right_golden.hex",

        // The output files created by the simulation. 
		  AUDIO_OUT_FILENAME    = "../simdata/audioout.dat",
		  
		  MAX_ERRORS          = 20,             // Number of errors found that will stop the simulation
		  ENABLE_MAX_ERRORS   = 0,              // Set ot 1 to abort simulation when the errors exceed MAX_ERRORS
		  
		  // Set the maximum simulation time, as the number of input sampling periods
		  // or approximately number of input samples. 
		  // Simulation stops when this time is exhausted or when input samples end
		  MAX_SIMULATION_TIME = 48_000*1,       // Maximum simulation time is set to 1 second of real time	

//###########################################################################################################
// DO NOT TOUCH BELOW THIS LINE ** DO NOT TOUCH BELOW THIS LINE ** DO NOT TOUCH BELOW THIS LINE ** 		  
//###########################################################################################################
		  
		  CLOCKS_PER_SAMPLE  = 256,              // Number of clock cycles per input sampling period
		  MAX_INPUT_SIZE     = 48000 * 2,        // max number of samples of input audio files (2 == 2 seconds)
		  MAX_OUTPUT_SIZE    = 48000 * 2,        // max number of golden output samples (2 == 2 seconds)

          // Configure testbench clocks: The design is driven by BIT_CLK (12.288 MHz) generated by
		  // the audio codec. This signal is derived from a 24.576 MHz cristal oscillator (XTAL)
		  CLOCK_FREQUENCY    = 48000 * CLOCKS_PER_SAMPLE,     // Bit clock, Hertz (12.288 MHz)
		  CLOCK_PERIOD       = 1/CLOCK_FREQUENCY,             // seconds
		  CLOCK_PERIOD_NS    = 1000000000.0/CLOCK_FREQUENCY,  // clock period, in nanoseconds
		  
		  // The external oscillator:
		  XTAL_FREQUENCY     = 48000 * CLOCKS_PER_SAMPLE * 2, // 24.576 MHz
		  XTAL_PERIOD_NS     = 1000000000.0/XTAL_FREQUENCY,   //clock period in ns
		  
		  N_SAMPLES_LATENCY     = 9, // Latency of the audio CODEC simulation model (# of sampling periods)
		  
 		  N_CLOCKS_RESET  = 2;       // Number of clock cycles for applying reset


//----------------------------------------------------------------------------------------
// INstantiate the toplevel design under verification:
s6base_top s6base_top_1( 
				//------------------------------------------------------------------
                // external clock source:
               .clockext100MHz(clk100M),	// master clock input (external oscillator 100MHz)
               .reset_n(reset_n),           // external reset, active low
				//------------------------------------------------------------------
                // push buttons: button down = logic 1 (no debouncing hw)
				.btnu( btnu ),			// button up
				.btnr( btnr ),
				.btnd( btnd ),
				.btnl( btnl ),			// button left
				.btnc( btnc ),          // button center

				//------------------------------------------------------------------
                // Slide switches:
				.sw0( sw0 ),
				.sw1( sw1 ),
				.sw2( sw2 ),
				.sw3( sw3 ),
				.sw4( sw4 ),
				.sw5( sw5 ),
				.sw6( sw6 ),
				.sw7( sw7 ),

				//------------------------------------------------------------------
				// LEDs: logic 1 lights the LED
				.ld7( ld7 ),			// LED 7 (leftmost)
				.ld6( ld6 ),
				.ld5( ld5 ),
				.ld4( ld4 ),
				.ld3( ld3 ),
				.ld2( ld2 ),
				.ld1( ld1 ),
				.ld0( ld0 ),			// LED 0 (rightmost)


				//------------------------------------------------------------------
				// Serial interface (RS232 port)
               .tx( tx ),			// tx data (output from the user circuit)
               .rx( rx ),
				
				//------------------------------------------------------------------	 
				// Audio codec interface (AC97)
				.SDATA_IN(SDATA_IN),
				.SDATA_OUT(SDATA_OUT),
				.SYNC(SYNC),
				.BIT_CLK(BIT_CLK),
				.RESET_N(RESET_N),
				
			    //------------------------------------------------------------------
			    // PMOD connector
			   .PMOD1(  PMOD1 ),  
			   .PMOD2(  PMOD2 ),  
			   .PMOD3(  PMOD3 ),  
			   .PMOD4(  PMOD4 ),  
			   .PMOD7(  PMOD7 ),  
			   .PMOD8(  PMOD8 ),  
			   .PMOD9(  PMOD9 ),  
			   .PMOD10( PMOD10 ),
			   
			   // VHDC connector
			   .VHDC1P(  VHDC1P ),
			   .VHDC1N(  VHDC1N ),
			   .VHDC2P(  VHDC2P ),
			   .VHDC2N(  VHDC2N ),
			   .VHDC3P(  VHDC3P ),
			   .VHDC3N(  VHDC3N ),
			   .VHDC4P(  VHDC4P ),
			   .VHDC4N(  VHDC4N ),
			   .VHDC5P(  VHDC5P ),
			   .VHDC5N(  VHDC5N ),
			   .VHDC6P(  VHDC6P ),
			   .VHDC6N(  VHDC6N ),
			   .VHDC7P(  VHDC7P ),
			   .VHDC7N(  VHDC7N ),
			   .VHDC8P(  VHDC8P ),
			   .VHDC8N(  VHDC8N ),
			   .VHDC9P(  VHDC9P ),
			   .VHDC9N(  VHDC9N ),
			   .VHDC10P( VHDC10P ),
			   .VHDC10N( VHDC10N ),
			   .VHDC11P( VHDC11P ),
			   .VHDC11N( VHDC11N ),
			   .VHDC12P( VHDC12P ),
			   .VHDC12N( VHDC12N ),
			   .VHDC13P( VHDC13P ),
			   .VHDC13N( VHDC13N ),
			   .VHDC14P( VHDC14P ),
			   .VHDC14N( VHDC14N ),
			   .VHDC15P( VHDC15P ),
			   .VHDC15N( VHDC15N ),
			   .VHDC16P( VHDC16P ),
			   .VHDC16N( VHDC16N ),
			   .VHDC17P( VHDC17P ),
			   .VHDC17N( VHDC17N ),
			   .VHDC18P( VHDC18P ),
			   .VHDC18N( VHDC18N ),
			   .VHDC19P( VHDC19P ),
			   .VHDC19N( VHDC19N ),
			   .VHDC20P( VHDC20P ),
			   .VHDC20N( VHDC20N )         			 
);

// VHDC bus (for routing signals to primary outputs):
// assign unused outputs to zero.
wire [39:0] VHDC = 
   { VHDC1P,  VHDC1N, VHDC2P, VHDC2N, VHDC3P, VHDC3N, VHDC4P, VHDC4N, 
     VHDC5P,  VHDC5N, VHDC6P, VHDC6N, VHDC7P, VHDC7N, VHDC8P, VHDC8N, 
     VHDC9P,  VHDC9N,  VHDC10P, VHDC10N, VHDC11P, VHDC11N, VHDC12P, VHDC12N,
     VHDC13P, VHDC13N, VHDC14P, VHDC14N, VHDC15P, VHDC15N, VHDC16P, VHDC16N,
     VHDC17P, VHDC17N, VHDC18P, VHDC18N, VHDC19P, VHDC19N, VHDC20P, VHDC20N
   };
   

// Define bit vectors for the buttons, switches and leds:
assign {btnu, btnr, btnd, btnl, btnc} = btns;
assign { sw7, sw6, sw5, sw4, sw3, sw2, sw1, sw0} = sws;
assign leds = { ld7, ld6, ld5, ld4, ld3, ld2, ld1, ld0};

// Local signals for local UART connection:
reg             uart_txen;
wire            uart_rxready, uart_txready;
reg  [7:0]      uart_din;
wire [7:0]      uart_dout;

// Signals to connect to the virtual in/outs of the LM4550 verification IP:
reg  signed [17:0]     LEFT_IN, RIGHT_IN;
wire signed [17:0]     LEFT_OUT, RIGHT_OUT;


//----------------------------------------------------
// UART 921600 baud, 8 bit, 1 stop bit, no parity:
uart_sim   #(
                .INPUT_CLOCK_FREQUENCY( CLOCK_FREQUENCY ), 
                .TX_BAUD_RATE( 921_600 ),
		        .RX_BAUD_RATE( 921_600 )
		)
      uart_sim_1 
	           ( 
				  .clock( BIT_CLK ),	// use the same clock as the codec clock
                  .reset(reset),		// master reset, asynchronous, active high
                  .tx(rx),				// tx data, connected to rx input
                  .rx(tx),				// rx data, connected to tx output
                  .txen(uart_txen),			// load data into transmit buffer and initiate a transmission
                  .txready(uart_txready),	// ready to receive a new byte to tx
                  .rxready(uart_rxready),	// data is ready at dout port
                  .dout(uart_dout),			// data out (received data)
                  .din(uart_din)				// data in (data to transmit)
               );


//----------------------------------------------------
// Simulation model of the LM4550 digital interface:
LM4550_digital_sim  LM4550_digital_sim_1(
            .XTAL_IN( XTAL_IN ),
			.RESET_N( RESET_N ),
			.BIT_CLK( BIT_CLK ),
			.SYNC( SYNC ),
			.SDATA_IN( SDATA_IN ),
			.SDATA_OUT( SDATA_OUT ),
			
			.LEFT_IN( LEFT_IN ),   // inputs to receive the "analogue" audio sent to the ADC
			.RIGHT_IN( RIGHT_IN ), // and transmitted via the AC97 interface
			
			.LEFT_OUT( LEFT_OUT ), // outputs with the "analogue" audio samples from the DAC
			.RIGHT_OUT( RIGHT_OUT )
			);			 
				

//----------------------------------------------------
// Initialize inputs, disable the 100 MHz clock signal (not used in this design):
initial
begin
  // primary inputs:
  clk100M = 1'b0;       // NOT USED !
  btns = 5'b0000_0;     // Push buttons
  sws  = 8'b0000_0000;  // set switches to zero
  reset_n = 1'b1;       // Reset push button
  XTAL_IN = 1'b0;       // Clock to CODEC
  
  // to the simulation UART:
  uart_txen = 1'b0;
  uart_din = 8'd0;
end		


// Start the CODEC clock (24.576 MHz). 
initial
begin
  #2
  forever #( XTAL_PERIOD_NS / 2 ) XTAL_IN = ~XTAL_IN;
end


//------------------------------------------------------
// Generate the external reset signal (note this is active low)
// Activate reset_n for N clock cycles
// The main clock applied to the design is the input clock ( 12.288 MHz )
// multiplied by 8. 
// To avoid racing conditions, reset is delayed 2.6 periods of 98.3 MHz, from the 
// positive edge of XTAL_IN to align the transitions to the negative edge of
// the master internal clock. As we are using a synchronous reset, we must
// wait for the internal clock multiplier to stabilize, otherwise there will be
// no clock to trigger the reset.
//
//(12.288 MHz)        __    __    __    __    __    __    __    __    __    __
//  BIT_CLK _________|  |__|  |__|  |__|  |__|  |__|  |__|  |__|  |__|  |__|
//          ____________                   ___________________________________
// reset_n              |_________________|
initial
begin
  # 1
  @( negedge BIT_CLK );
  # 1
  reset_n = 1'b0;
  repeat ( N_CLOCKS_RESET )
    @( posedge BIT_CLK );
  # 1
  @( negedge BIT_CLK );
  # 1
  reset_n = 1'b1;
end	

// active high reset (used locally only)
assign reset = ~reset_n;


//------------------------------------------------------
// memories to load the input data:
reg signed [17:0]  left_in_mem[ 0: MAX_INPUT_SIZE-1 + 1 ];
reg signed [17:0] right_in_mem[ 0: MAX_INPUT_SIZE-1 + 1 ];
reg signed [17:0] golden_output_left[ 0: MAX_INPUT_SIZE-1 + 1 ];
reg signed [17:0] golden_output_right[ 0: MAX_INPUT_SIZE-1 + 1 ];


// Counts the number of input samples:
integer no_input_samples  = 0,
        no_output_samples = 0;

// Counts the number of errors
integer error_count = 0;	


// Trigger event to start collecting the output data:
event startgetouts;
		
		

//------------------------------------------------------
// Limit the simulation time (maximum number of input samples)
// Use the signal SYNC to count the number of input samples
// coming from the codec
integer clkcount = 0;
always @(posedge SYNC)
begin
  clkcount = clkcount+1;
  if ( clkcount == MAX_SIMULATION_TIME ) 
  begin
    $display("Maximum simulation time exhausted (%d sampling periods).", MAX_SIMULATION_TIME );
	finalize_simulation( );
  end
end


// Only for plotting in the waveform window:
reg [17:0] error_left=0, error_right=0;

// Set to 1 when the first set of correct samples is detected.
// Verification will only start from that point.
integer start_checking = 0;

// Pointers to vectors:
integer i = 0;

// Output file handler:
integer fpout;

//------------------------------------------------------
// Main simulation thread:
initial
begin

  // Load input data files:
  $display("Loading simulation input data from files %s, %s:", 
                                     LEFT_IN_FILENAME, RIGHT_IN_FILENAME );
  $readmemh(LEFT_IN_FILENAME,   left_in_mem );
  $readmemh(RIGHT_IN_FILENAME,  right_in_mem );
  
  // Determine the number of input samples read from the input data files
  no_input_samples = -1;
  for(i=0; i<MAX_INPUT_SIZE; i=i+1)
  begin
    `ifdef DEBUG_PRINT
       if ( i < `NDATA_TO_PRINT )
           $display("Datain(%5d) [ left, right] = [%8d  , %8d] (hex %05H  %05H)", 
		                                                     i, left_in_mem[i], right_in_mem[i],
                                                                left_in_mem[i], right_in_mem[i] );
    `endif
	if ( left_in_mem[i] === 18'dx )
	begin
	  no_input_samples = i;
	  i = MAX_INPUT_SIZE;
	end
  end
  // If read more than MAX_INPUT_SIZE samples...
  if ( no_input_samples == -1 )
    no_input_samples = MAX_INPUT_SIZE;
	
  $display("-----------------------------------------------");
  $display("Read %d samples from input files\n", no_input_samples );
  $display("-----------------------------------------------");


  
  $display("Loading the golden output data from files %s and %s:", 
                        OUTPUT_LEFT_GOLDEN_FILENAME, OUTPUT_RIGHT_GOLDEN_FILENAME );
  $readmemh( OUTPUT_LEFT_GOLDEN_FILENAME, golden_output_left );		
  $readmemh( OUTPUT_RIGHT_GOLDEN_FILENAME, golden_output_right );		
  
  for(i=0; i<MAX_OUTPUT_SIZE; i=i+1)
  begin
    `ifdef DEBUG_PRINT
       if ( i < `NDATA_TO_PRINT )
           $display("golden data out(%5d) = %8d (hex %05H )", 
		                                       i, golden_output_left[i], golden_output_left[i] );
    `endif
	if ( golden_output_left[i] === 18'dx )
	begin
	  no_output_samples = i;
	  i = MAX_OUTPUT_SIZE;
	end
  end
  // If read more than MAX_OUTPUT_SIZE samples...
  if ( no_output_samples == -1 )
    no_output_samples = MAX_OUTPUT_SIZE;


  $display("-----------------------------------------------");
  $display("Read %d samples from golden output file\n", no_output_samples );
  $display("-----------------------------------------------");
  
  
  // Open output file for writting:
  fpout = $fopen( AUDIO_OUT_FILENAME, "w+");

  // Initialize the "analog" inputs to the CODEC:
  LEFT_IN = 18'd0;
  RIGHT_IN = 18'd0;
    
  # 1
  // wait for the master reset cycle:
  @(posedge reset)
  #1
  @(negedge reset);
  #1 
  
  // Example of writting some data to the serial interface ports:
  $display("[time=%10.3f us] Reset released, programming parameters...", $time/1000.0 );
  WritePort( 32'd12, 8);  // 12 -> port 8
  WritePort( 32'd34, 9);  // 34 -> port 9
  WritePort( 32'd56, 10); // 56 -> port 10
  WritePort( 32'd78, 11); // 78 -> port 11
  WritePort( 32'd90, 12); // 90 -> port 12
 
  // Wait a few SYNC pulses (input sampling periods) before starting applying the input samples
  // we should receive zeros
  // NOTE: SYNC is generated in the CODEC controller module and is a glitch-free registered output.
  repeat (10)
  begin
	@(posedge SYNC);
	#1;
  end
  
  
  // Trigger the event 'startgetouts' to start the self-checking verification process:
  -> startgetouts;
  
  
  $display("[time=%10.3f us] Applying input samples...", $time/1000.0 );
  // Apply input samples to the codec "analog" inputs:
  for(i=0; i<no_input_samples; i=i+1 )
  begin
  
	// Apply inputs to the audio CODEC verification model:
    @(posedge SYNC)
	#1;
	LEFT_IN  = left_in_mem[i];
	RIGHT_IN = right_in_mem[i];
	#1;
	
	if ( (i % 100) == 0 )
	  $display("done %d samples.", i );
	
  end
  
  // to finish the simulation set digital inputs to zero:
  @(posedge SYNC)
  #1;  
  LEFT_IN  = 18'd0;
  RIGHT_IN = 18'd0; 

  repeat ( 19 )
    @(posedge SYNC)
    
  // Final housekeeping: close files, print final reports, etc...
  finalize_simulation( );

end




//------------------------------------------------------
// Self-check process: collect the output and compare to the golden data:
integer j = 0;

reg [17:0] golden_left, golden_right;

initial
begin

  // Wait for the event triggered by the input driver:
  @ startgetouts;  
  $display("Starting the verification process.vv..");
  
  // Wait for the CODEC latency:
  repeat ( N_SAMPLES_LATENCY )
    @(posedge SYNC);
  
  
  // Insert here the code for the automatic verification process
  // Output data are available @ the posedge of the SYNC signal
  while ( 1 )
  begin
    @(posedge SYNC); // FOI ALTERADO RIGHT<-> LEFT
	 golden_right = golden_output_right[j]; // for exporting to the waveform window
	 golden_left = golden_output_left[j]; // for exporting to the waveform window
	 
	 if ( !( RIGHT_OUT == golden_output_right[j] && LEFT_OUT == golden_output_left[j] ) )
	 begin
	   $display( "Error: expected LEFT: %d, read %d || RIGHT: %d, read %d.", 
	               golden_output_left[j], LEFT_OUT, golden_output_right[j], RIGHT_OUT );
		error_count = error_count + 1;
	 end
	 
	 $fwrite( fpout, "%8d, %8d\n", LEFT_OUT, RIGHT_OUT );
	 
	 j = j + 1;
	 
	 if ( ENABLE_MAX_ERRORS && error_count == MAX_ERRORS )
	 begin
	   repeat ( 19 )
        @(posedge SYNC);
		
		$display("Maximum number of errors exceeded. terminating.");
    
        // Final housekeeping: close files, print final reports, etc...
        finalize_simulation( );
	 end
  end
  

end


`include "../src/verilog-tb/verilog-tasks.v"

endmodule



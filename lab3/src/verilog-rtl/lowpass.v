/** Lowpass FIR filter
    The FIR (Finite Impulse Response) digital filter calculates the discrete convolution between
    the input signal x_k and the filter impulse response ℎ

                    yk = Sum(x_(k-1)-hi)

    FIR Filter algoritm

    Mcoef[0:M-1] is the coefficient memory holding the filter coefficients
    Mxin[0:M-1] is the memory holding the xk-i input samples
    Repeat forever:
        Wait for DIN_RDY == 1, this means a new sample xk has arrived
        Set Yk to 0
        Store xk to memory Mxin and delete the oldest input sample
        for i=0 to M-1
        Read hi from Mcoef memory and read xk-i from Mxin memory
        Calculate Yk + hi * xk-i and store the result to Yk
    endfor
**/
module lowpass(
    input clock, // Master clock
    input reset, // master reset, synchronous, active high
    input [17:0] datain, // input data
    input endata, // data clock enable
    output [17:0] dataout, // output data
    // Interface to the coefficient memory:
    output [ 6:0] coefaddress, // 7-bit address
    input [17:0] coefdata // 18-bit data
 );


always @(posedge clock)
    begin
    if ( DIN_RDY )
        dataout <= 0;
        
        // do whatever has to be done with the new audio sample
    
    end

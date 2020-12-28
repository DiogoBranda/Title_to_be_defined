/*
	Authors: Diogo Silva(up201809213) & Joao Pereira(up201909554)
	
	University: FEUP - MIEEC - PSDi 2020/21
	
	Brief Description: Lowpass FIR filter
    The FIR (Finite Impulse Response) digital filter calculates the discrete convolution between
    the input signal x_k and the filter impulse response ℎ

                    yk = Sum(x_(k-1)*hi)

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
    input wire clock, // Master clock
    input wire reset, // master reset, synchronous, active high
    input signed [17:0] datain, // input data
    input wire endata, // data clock enable
    output wire [17:0] dataout, // output data
    // Interface to the coefficient memory:
    output reg [ 6:0] coefaddress, // 7-bit address
    input signed [17:0] coefdata // 18-bit data
 );

reg signed [17:0] Mxin[0:63];//guardar samples
//reg [6:0] Mread; // Numero de samples guardados
reg [7:0] cont; // Numero de samples processados

//FSM

parameter SIZE = 2;
parameter Wait_DIN_RDY  = 2'b00 ,
          Read_Coef = 2'b01,
			 calculate_FIR = 2'b11 ;
reg   [SIZE-1:0] state;// Seq part of the FSM

// Para o for
integer i;
reg signed [42:0] acom;
reg signed [42:0] aux;
//Implementaçao
always @ (posedge clock)
begin : FSM
    if (reset == 1'b1) begin // Quando reset
        for (i=0;i<64;i=i+1) begin
                Mxin[i]<= 18'h0; //Faz shift nos samples guardados.( O ultimo é eliminado)
        end
        //Mread <=0;//  reset ao numero de samples guardados
        state <=  Wait_DIN_RDY; // Volta ao estado de espera
        aux<=0;    
    end 

    else

    case(state)
        
        Wait_DIN_RDY :  if (endata ==1) begin //Neste estado fica a espera do sinal para ir ler
            //$display("Wait_DIN_RDY %h",Mxin[3]);
            for (i=63;i>0;i=i-1) begin
                Mxin[i] <= Mxin[i-1]; //Faz shift nos samples guardados.( O ultimo é eliminado)
            end
            Mxin[0] <= datain;// insere o novo sample no inicio
            cont <= 0; //reset ao numero de samples processados
            acom<=0;
            state <=   Read_Coef;// avança para o proximo estado
				coefaddress <= 0;
        end
        
        Read_Coef : if (cont< 64) begin// se o numero de amostras processadas for menor que as existentes entao faz
            //$display("Read_Coef %h",acom);
            coefaddress <= cont+1;// da endereço do coeficiente que quer ler. Tem de esperar um clock
            state <=   calculate_FIR;
        end
        else begin// senao
            state <= Wait_DIN_RDY;// ja fez tudo e volta para o estado inicial
				aux<=acom;
            //$display("Read_Coef->Wait_DIN_RDY %h",acom);
        end
            
        calculate_FIR : if (cont< 64)begin
            //$display("calculate_FIR",acom);
            acom <= acom + coefdata * Mxin[cont];    
            cont <= cont+1;//processou mais um
            state <=   Read_Coef;
        end
        else begin
            state <=  Wait_DIN_RDY;
				aux<=acom;
        end

        default : state <=   Wait_DIN_RDY;
    endcase
end

assign dataout=aux[29:12];//acom[42-13:42-13-18];
endmodule

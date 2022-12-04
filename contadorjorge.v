module JK(output reg Q,output wire nQ,input wire J,input wire K, input wire C);
    not (nQ,Q);

    initial
    begin
        Q=0; // Inicializa el contador en 0
    end
    always @(negedge C)
        case({J,K})
            2'b10: Q=1; //J=1 K=0
            2'b01: Q=0; //J=0 K=1
            2'b11: Q=~Q; //J=1 K=1
        endcase
    endmodule


module contador(output wire[3:0]Q, input wire C);
    wire [3:0] nQ;  // Salida complementaria

    wire AQ2Q3, AQ0nQ3, AnQ1nQ3, AnQ0nQ1,AQ0nQ2; // Salidas intermedias AND
    wire OQ2Q3Q0nQ3,OQ2Q0,OnQ0nQ1Q0nQ2; // Salidas intermedias OR

    and A0 (AQ2Q3, Q[2], Q[3]);
    and A1 (AQ0nQ3, Q[0], nQ[3]);
    and A2 (AnQ1nQ3, nQ[1], nQ[3]);
    and A3 (AnQ0nQ1, nQ[0], nQ[1]);
    and A4 (AQ0nQ2, Q[0], nQ[2]);

    or O0 (OQ2Q3Q0nQ3, AQ2Q3, AQ0nQ3);
    or O1 (OQ2Q0, Q[2], Q[0]);
    or O2 (OnQ0nQ1Q0nQ2, AnQ0nQ1, AQ0nQ2);

    JK jk3 (Q[0], nQ[0],Q[1],nQ[1],C);
    JK jk2 (Q[1], nQ[1],OQ2Q3Q0nQ3,OQ2Q0,C);
    JK jk1 (Q[2], nQ[2],nQ[1],AnQ1nQ3, C);
    JK jk0 (Q[3], nQ[3],OnQ0nQ1Q0nQ2,OQ2Q0,C);

    



endmodule

module test;
    reg C; // Entrada de reloj
    wire[3:0] Q; // Salida del contador
    wire [3:0] I; // Entrada del contador
    contador Contador1(Q,C);

    always #2 C=~C; //Funcion reloj
    initial
    begin
        $dumpfile("test.dmp"); //Nombre del archivo de salida de cronograma
        $dumpvars; //Comando para que se muestren las variables en el cronograma

        C=0; // Inicializa el reloj en 0
        Contador1.jk3.Q='b1; // Inicializa el contador en 1
        Contador1.jk2.Q='b0; // Inicializa el contador en 0
        Contador1.jk1.Q='b1; // Inicializa el contador en 1         =10
        Contador1.jk0.Q='b0; // Inicializa el contador en 0

    $monitor($time,"Q=%b%b%b%b",Q[0],Q[1],Q[2],Q[3]); //Muestra en pantalla el valor de los registros
    #100 $finish;
    end

endmodule
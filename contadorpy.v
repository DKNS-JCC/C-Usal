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

    wire AnQ0Q3,AQ0Q1,AnQ0nQ2,AnQ2nQ3,nQ1Q3 ; // Salidas intermedias AND
    wire OnQ0Q3Q0Q1,OQ1Q3,=nQ2nQ3nQ1Q3; // Salidas intermedias OR

    and A0 (AnQ0Q3, nQ[0], Q[3]); // AND nQ0 y Q3
    and A1 (AQ0Q1, Q[0], Q[1]); // AND Q0 y Q1
    and A2 (AQ0Q2, Q[0], Q[2]); // AND Q0 y Q2
    and A3 (AnQ2nQ3, nQ[2], nQ[3]); // AND nQ2 y nQ3
    and A4 (nQ1Q3, nQ[1], Q[3]); // AND nQ1 y Q3

    or O0 (OnQ0Q3Q0Q1, AnQ0Q3, AQ0Q1); // OR nQ0Q3 y Q0Q1
    or O1 (OQ1Q3, Q[1], Q[3]); // OR Q1 y Q3
    or O2 (OnQ2nQ3nQ1Q3, AnQ2nQ3, nQ1Q3); // OR nQ2nQ3 y nQ1Q3

    JK jk3 (Q[3],nQ[3],Q[2],nQ[2],C); // JK3
    JK jk2 (Q[2],nQ[2],OnQ0Q3Q0Q1,OQ1Q3,C); // JK2
    JK jk1 (Q[1],nQ[1],Q[0],AnQ0nQ2,C); // JK1
    JK jk0 (Q[0],nQ[0],OnQ2nQ3nQ1Q3,OQ1Q3,C); // JK0

endmodule

module test;
    reg C; // Entrada de reloj
    wire[3:0] Q; // Salida del contador
    
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
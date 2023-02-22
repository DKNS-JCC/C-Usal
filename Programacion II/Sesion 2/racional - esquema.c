#include <stdio.h>
#include <math.h>
#include <ctype.h>

/* ---------------------------------------------------------- */
/* Definiciones globales                                      */
/* ---------------------------------------------------------- */
typedef struct {
   int num;   /* Numerador   */
   int denom; /* Denominador */
} Racional;

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void moduloPrincipal (void);
   void Presentacion (void);
   void leerRacional (Racional *);
   void mostrarRacional (Racional);
// -----------------------------------------------------------------------
   void sumaRacional (Racional, Racional, Racional *);
   void restaRacional (Racional, Racional, Racional *);
// Devuelve el resultado como valor de retorno
   Racional multiplicaRacional (Racional, Racional);
   Racional divideRacional (Racional, Racional);

   void simplificaRacional (Racional *);
   int mcd (int, int);
    
/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;
  
     Presentacion();
     do
       { printf("\n");
         moduloPrincipal();
	     printf("\n");
	     do
	       { printf("�Otra ejecuci�n (S/N)?: ");
	         fflush(stdin); /* Limpia el buffer de teclado */
	         respuesta = toupper(getchar());
	       }
	     while (respuesta != 'S' && respuesta != 'N');

       }
     while (respuesta != 'N');
     
     printf("\n");
     return 0;
     
} /* Fin del main */


/* ---------------------------------------------------------- */
   void moduloPrincipal (void) {
/* ---------------------------------------------------------- */   	
     Racional rac1, rac2, rsum, rres, rprod, rdiv;
  
     printf("Introduzca el primer n�mero racional:\n");
     leerRacional(&rac1);
     printf("Introduzca el segundo n�mero racional:\n");
     leerRacional(&rac2);
          
     printf("\n");
     sumaRacional (rac1, rac2, &rsum);
     printf("Suma.......: ");
     mostrarRacional(rsum);
     printf("\n");

     restaRacional (rac1, rac2, &rres);
     printf("Resta......: ");
     mostrarRacional(rres);
     printf("\n");
     
     rprod = multiplicaRacional (rac1, rac2);
     printf("Producto...: ");
     mostrarRacional(rprod);
     printf("\n");
     
     rdiv = divideRacional (rac1, rac2);
     printf("Divisi�n...: ");
     mostrarRacional(rdiv);
     printf("\n");
}

/* ---------------------------------------------------------- */
   void Presentacion (void) {
/* ---------------------------------------------------------- */
     puts("ARITMETICA BASICA CON NUMEROS RACIONALES");
     puts("========================================");
     puts("");
     puts("Realiza la suma, resta, producto y divisi�n de n�meros racionales");
     puts("Siempre presenta la expresi�n irreducible del n�mero racional");
     puts("");
}

/* ---------------------------------------------------------- */
   void leerRacional (Racional *r) {
/* ---------------------------------------------------------- */

      printf ("Numerador: ");
      scanf("%d", &r->num);
   do{
      printf ("Denominador: ");
      scanf ("%d", &r->denom);
   }while (r->denom!=0);
}


/* ---------------------------------------------------------- */
   void sumaRacional (Racional a, Racional b, Racional *r) {
/* ---------------------------------------------------------- */

       *** COMPLETAR ***

}


/* ---------------------------------------------------------- */
   void restaRacional (Racional a, Racional b, Racional *r) {
/* ---------------------------------------------------------- */

       *** COMPLETAR ***

}


/* ---------------------------------------------------------- */
   Racional multiplicaRacional (Racional a, Racional b) {
/* ---------------------------------------------------------- */

       *** COMPLETAR ***

}


/* ---------------------------------------------------------- */
   Racional divideRacional (Racional a, Racional b) {
/* ---------------------------------------------------------- */

       *** COMPLETAR ***

}


/* ---------------------------------------------------------- */
   void mostrarRacional (Racional r) {
/* ---------------------------------------------------------- */
     printf("%3d", r.num);
     if (r.denom != 1)
       printf(" /%3d", r.denom);
}


/* ---------------------------------------------------------- */
   void simplificaRacional (Racional *r) {
/* ---------------------------------------------------------- */
// Calcula el mcd del numerador y del denominador
// Divide numerador y denominador por su mcd
// Si la fraccion debe llevar signo negativo (num*dem <0)
//    entonces el signo se coloca al numerador 


       *** COMPLETAR ***

}



/* ---------------------------------------------------------- */
   int mcd (int a, int b) {
/* ---------------------------------------------------------- */
/* Calcula el m�ximo com�n dividor de a y b */
/* Precisa que b sea distinto de cero       */
/* Precisa que a > b                        */


       *** COMPLETAR ***

}

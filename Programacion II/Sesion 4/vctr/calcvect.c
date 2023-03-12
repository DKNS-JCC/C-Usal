#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define DIMMAX 25

/* Fuente: CVECTOR.C
   Programa: CALCULO VECTORIAL
   Descripci�n: Pide por pantalla dos vectores (dimensi�n m�xima DIMMAX)
   Posteriormente calcula su m�dulo, su suma y su producto escalar
*/

int main(void) {

/* Definiciones de variables y constantes
   ---------------------------------------
*/
  float vector1[DIMMAX], vector2[DIMMAX];       /* Vectores de entrada                */
  int diml;                                     /* Dimensi�n efectiva de los vectores */
  float modulov1, modulov2;                     /* M�dulo de los vectores             */
  float vsuma[DIMMAX];                          /* Vector suma                        */
  float prod_escalar;                           /* Producto escalar de los vectores   */

  int i;               /* Variable auxiliar para recorrer los vectores */
  char  terminar;      /* Para pedir al usuario terminar o no          */



  system ("cls");
  printf("C�lculo vectorial\n");
  printf("=================\n");
  printf("Se pedir�n por pantalla dos vectores y se presentar�:\n");
  printf("   - El m�dulo de cada uno de ellos.\n");
  printf("   - Su vector suma.\n");
  printf("   - Su producto escalar.\n");
  printf("El programa permite trabajar con vectores de dimensi�n "
         "m�xima %d.\n", DIMMAX);

  do 
  {

       do
       { printf("Dimensi�n de los vectores (entre 1 y %d)?: ", DIMMAX);
         scanf("%d", &diml);
       } while (diml <= 0 || diml > DIMMAX);

 
       puts("\nIntroduzca el primer vector:");
       for (i=0; i < diml; i++)
            { printf("v1[%d]?: ", i+1);
              scanf("%f", &vector1[i]);
            }

       puts("\nIntroduzca el segundo vector:");
       for (i=0; i < diml; i++)
            { printf("v2[%d]?: ", i+1);
              scanf("%f", &vector2[i]);
            }

        modulov1 = modulov2 = 0;
        for (i=0; i < diml; i++)
            { modulov1 += vector1[i] * vector1[i];
              modulov2 += vector2[i] * vector2[i];
            }

        modulov1 = sqrt (modulov1);
        modulov2 = sqrt (modulov2);


        for (i=0; i < diml; i++)
            vsuma[i] = vector1[i] + vector2[i];


        prod_escalar = 0;
        for (i=0; i < diml; i++)
            prod_escalar += vector1[i] * vector2[i];

 

       puts("\nVectores introducidos:");
       printf("V1 = (%g", vector1[0]);
       for (i=1; i < diml; i++)
           printf(", %g", vector1[i]);
       printf(")\n");

       printf("V2 = (%g", vector2[0]);
       for (i=1; i < diml; i++)
           printf(", %g", vector2[i]);
       printf(")\n");

       printf("\n");
       printf("M�dulo del primer  vector: %g\n", modulov1);
       printf("M�dulo del segundo vector: %g\n", modulov2);

       puts("\nVector suma:");
       printf("V1 + V2 = (%g", vsuma[0]);
       for (i=1; i < diml; i++)
           printf(", %g", vsuma[i]);
       printf(")\n");

       puts("\nProducto escalar:");
       printf("V1 x V2 = %g\n", prod_escalar);

       printf("\n\n");

       do
       {  printf("Salir del programa (S/N)?: "); 
          fflush(stdin);  
          scanf("%c", &terminar);
          terminar = toupper(terminar);
       } while (terminar != 'S' && terminar != 'N');
        
       system ("cls");  

  } while (terminar != 'S'); 

  return 0;
}
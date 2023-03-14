#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define DIMMAX 25
#include "iovector.h"
#include "vector.h"

void presentacion();

int main(void)
{

   /* Definiciones de variables y constantes
      ---------------------------------------
   */
   float vector1[DIMMAX], vector2[DIMMAX];
   int diml;
   char terminar;

   presentacion();

   do
   {

      diml = solicitar_vector(vector1, vector2, DIMMAX);
      printf("diml=%d", diml);
      presentar_vector(vector1, vector2, diml);
      modulo_vector(vector1, vector2, diml);
      suma_vector(vector1, vector2, diml);
      prod_vector(vector1, vector2, diml);

      do
      {
         printf("Salir del programa (S/N)?: ");
         fflush(stdin);
         scanf("%c", &terminar);
         terminar = toupper(terminar);
      } while (terminar != 'S' && terminar != 'N');

      system("cls");

   } while (terminar != 'S');

   return 0;
}

void presentacion()
{
   system("cls");
   printf("Calculo vectorial\n");
   printf("=================\n");
   printf("Se pediran por pantalla dos vectores y se presentara:\n");
   printf("   - El madulo de cada uno de ellos.\n");
   printf("   - Su vector suma.\n");
   printf("   - Su producto escalar.\n");
   printf("El programa permite trabajar con vectores de dimension maxima %d.\n", DIMMAX);
}
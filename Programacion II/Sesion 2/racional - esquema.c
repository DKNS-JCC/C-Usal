#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/* Definiciones globales                                      */

typedef struct
{
   int num;   /* Numerador   */
   int denom; /* Denominador */
} Racional;

/* Prototipos                                                 */

void moduloPrincipal(void);
void Presentacion(void);
void leerRacional(Racional *);
void mostrarRacional(Racional);
// -----------------------------------------------------------------------
void sumaRacional(Racional, Racional, Racional *);
void restaRacional(Racional, Racional, Racional *);
// Devuelve el resultado como valor de retorno
Racional multiplicaRacional(Racional, Racional);
Racional divideRacional(Racional, Racional);

void simplificaRacional(Racional *);
int mcd(int, int);

int main(void)
{
   setlocale(LC_ALL, "es_ES");
   char respuesta;

   Presentacion();
   do
   {
      printf("\n");
      moduloPrincipal();
      printf("\n");
      do
      {
         printf("Otra ejecucion (S/N)?: ");
         fflush(stdin);
         respuesta = toupper(getchar());
      } while (respuesta != 'S' && respuesta != 'N');

   } while (respuesta != 'N');

   printf("\n");
   return 0;

}

void moduloPrincipal(void)
{

   Racional rac1, rac2, rsum, rres, rprod, rdiv;

   printf("Introduzca el primer numero racional:\n");
   leerRacional(&rac1);
   printf("Introduzca el segundo numero racional:\n");
   leerRacional(&rac2);

   printf("\n");
   sumaRacional(rac1, rac2, &rsum);
   printf("Suma.......: ");
   mostrarRacional(rsum);
   printf("\n");

   restaRacional(rac1, rac2, &rres);
   printf("Resta......: ");
   mostrarRacional(rres);
   printf("\n");

   rprod = multiplicaRacional(rac1, rac2);
   printf("Producto...: ");
   mostrarRacional(rprod);
   printf("\n");

   rdiv = divideRacional(rac1, rac2);
   printf("Division...: ");
   mostrarRacional(rdiv);
   printf("\n");
}

void Presentacion(void)
{

   puts("ARITMETICA BASICA CON NUMEROS RACIONALES");
   puts("========================================");
   puts("");
   puts("Realiza la suma, resta, producto y division de numeros racionales");
   puts("Siempre presenta la expresion irreducible del numero racional");
   puts("");
}

void leerRacional(Racional *r)
{

   do
   {
      printf("Numerador: ");
      scanf("%d", &r->num);
   } while (r->num == 0);

   do
   {
      printf("Denominador: ");
      scanf("%d", &r->denom);
   } while (r->denom == 0);
}

void sumaRacional(Racional a, Racional b, Racional *r)
{
   r->denom = (a.denom * b.denom);
   a.num = a.num * (r->denom / a.denom);
   b.num = b.num * (r->denom / b.denom);
   r->num = a.num + b.num;
}
void restaRacional(Racional a, Racional b, Racional *r)
{

   r->denom = (a.denom * b.denom);
   a.num = a.num * (r->denom / a.denom);
   b.num = b.num * (r->denom / b.denom);
   r->num = a.num - b.num;
}
Racional multiplicaRacional(Racional a, Racional b)
{

   Racional resultado;
   resultado.denom = (a.denom * b.denom);
   resultado.num = (a.num * b.num);
   return resultado;
}

Racional divideRacional(Racional a, Racional b)
{

   Racional resultado;
   resultado.denom = (a.num * b.denom);
   resultado.num = (a.denom * b.num);
   return resultado;
}

void mostrarRacional(Racional r)
{
   if (r.denom != 1 && r.denom > 0)
   {
      printf("%d / %d", r.num, r.denom);
   }

   if (r.denom < 0)
   {
      r.denom = abs((r.denom));
      r.num = -(r.num);
      printf("%d / %d", r.num, r.denom);
   }

   if (r.denom == 1)
   {
      printf("%d", r.num);
   }
}

void simplificaRacional(Racional *r)
{
   r->denom/=
}

int mcd(int a, int b)
{
   while (b != 0)
   {
      int r;
      r = a % b;
      a = b;
      b = r;
   }
   return a;
}

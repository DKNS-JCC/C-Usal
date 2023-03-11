/*
   Programa USO DE LOS CAMPOS DE BITS
   Descripcion: Un programa recibe un long que describe un PixelFC. El byte mas significativo
       del entero es el canal Alfa; el siguiente es el color Rojo, el siguiente es el color Verde y el
       siguiente es el color Azul (el byte menos significativo).

     +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
     |       A L F A         |         R O J O       |      V E R D E        |      A Z U L          |
     +--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
     31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1  0

       Se pide construir un programa que haga lo siguiente:
        - Poner todos los canales del PixelFC a 0.
        - Poner a 1 el bit menos significativo del canal Alfa.
        - Poner a 1 todo el canal Azul.
        - Poner a 0 el bit mas significativo del canal Azul.
        - Determinar el valor del cuarto bit del canal Verde.
        - Determinar el valor del quinto bit del canal Azul.

*/
#include <stdio.h>
#include <stdlib.h>
#define BYTE 8

typedef struct TreintaydosBits
{
    unsigned bit0 : 1;
    unsigned bit1 : 1;
    unsigned bit2 : 1;
    unsigned bit3 : 1;
    unsigned bit4 : 1;
    unsigned bit5 : 1;
    unsigned bit6 : 1;
    unsigned bit7 : 1;
    unsigned bit8 : 1;
    unsigned bit9 : 1;
    unsigned bit10 : 1;
    unsigned bit11 : 1;
    unsigned bit12 : 1;
    unsigned bit13 : 1;
    unsigned bit14 : 1;
    unsigned bit15 : 1;
    unsigned bit16 : 1;
    unsigned bit17 : 1;
    unsigned bit18 : 1;
    unsigned bit19 : 1;
    unsigned bit20 : 1;
    unsigned bit21 : 1;
    unsigned bit22 : 1;
    unsigned bit23 : 1;
    unsigned bit24 : 1;
    unsigned bit25 : 1;
    unsigned bit26 : 1;
    unsigned bit27 : 1;
    unsigned bit28 : 1;
    unsigned bit29 : 1;
    unsigned bit30 : 1;
    unsigned bit31 : 1;
} TreintaydosBits;

typedef union CuatroBytes
{
    long n;
    TreintaydosBits b;
} CuatroBytes;

void ImprimeBitsdePixelfc(long); // Prototipo

int main(void)
{
    CuatroBytes pixelfc; // Declarar variable del tipo CuatroBytes

    pixelfc.n = 0; // Poner todo a 0
    printf("\nTodos los bits del pixelfc puestos a 0\n");
    ImprimeBitsdePixelfc(pixelfc.n);

    printf("\nPoner a 1 el bit menos significativo del canal Alfa (bit 24)\n");
    pixelfc.b.bit24 = 1;
    ImprimeBitsdePixelfc(pixelfc.n);

    printf("\nPoner todo el canal Azul a 1\n");
    //...
    ImprimeBitsdePixelfc(pixelfc.n);
    printf("\nPoner bit mas significativo canal Azul a 0 (bit 7)\n");
    pixelfc.b.bit7 = 0;
    ImprimeBitsdePixelfc(pixelfc.n);

    printf("\nValor bit4 canal Verde: %lu\n", pixelfc.n);
    //...
    printf("\nValor bit5 canal Azul: %lu\n", pixelfc.n);
    //...
    system("pause");
    return 0;
}

/* ---------------------------------------------------------- */
void ImprimeBitsdePixelfc(long nump)
{
    /* ---------------------------------------------------------- */
    int i, j; // Iteradores
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 8; i++)
        {
            printf("%lu ", nump);
        }
        printf("\t");
    }
    puts("");
}

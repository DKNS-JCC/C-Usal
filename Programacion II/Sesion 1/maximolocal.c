
#include <stdio.h>
#define FIL 50
#define COL 50


int primerMaximoLocal(int (*m)[COL], int fil, int col, int *maxfil, int *maxcol);
int main(void)
{
    int matrizA[FIL][COL];
    int filas, columnas;
    int filM, colM;
    int i, j;

    printf("Introduce el numero de filas: ");
    scanf("%d", &filas);
    printf("Introduce el numero de columnas: ");
    scanf("%d", &columnas);

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Introduce el valor de la posicion %d,%d: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("%d  ", matrizA[i][j]);
        }
        printf("\n");
    }
    if (primerMaximoLocal(matrizA, filas, columnas, &filM, &colM))
        printf("Maximo local en columna %d, fila %d",filM, colM);
    else
        printf("No es maximo local");
    return 0;
}
int primerMaximoLocal(int (*m)[COL], int fil, int col, int *maxfil, int *maxcol)
{
    int f, c, fe, ce, maximo;
    for (f = 1; f < fil - 1; f++)
    {
        for (c = 1; c < col - 1; c++)
        {
            maximo = 1;
            for (fe = f - 1; fe <= (f + 1) && maximo; fe++)
            {
                for (ce = c - 1; ce <= (c + 1) && maximo; ce++)
                {
                    if (m[f][c] <= m[fe][ce] && (fe != f || ce != c))
                        maximo = 0;
                }
            }
            if (!maximo)
            {
                *maxfil = f;
                *maxcol = c;
                return 1;
            }
        }
    }
    return 0;
}
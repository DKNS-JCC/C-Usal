#include <stdio.h>
#include <stdlib.h>
#define FIL 50
#define COL 50

int tieneMaximoLocal(int **, int, int, int, int);

int main()
{
    int matriz[FIL][COL];
    int i, j;
    int f, c;
    int maxf = 0, maxc = 0;

    printf("Introduce el numero de filas: ");
    scanf("%d", &f);
    printf("Introduce el numero de columnas: ");
    scanf("%d", &c);

    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Introduce el valor de la posicion %d,%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
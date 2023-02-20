#include <stdio.h>
#include <stdlib.h>

int leermatriz(int (*)[3]);
int escribirmatriz(int (*)[3]);
void matr(int (*)[3], int filas, int columnas);

int leermatriz(int tabla[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nIntroduzca el termino %d,%d: ", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }
}

int escribirmatriz(int tabla[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", tabla[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    leermatriz(mat);
    escribirmatriz(mat);
    matr(mat, 3,3);
    return 0;
}

void matr(int (*mat)[3], int filas, int columnas)
{

    printf ("   %d  ", mat[1][1]);      //test
}
#include <stdio.h>
#define FILAS       2
#define COLUMNAS    4

int main (){

    char mat[FILAS][COLUMNAS]; 
    char *pt; 
    char (*pt1)[COLUMNAS]; 
    char (**pt2)[COLUMNAS]; 
    char *(*pt3[FILAS]);    
    char *(*pt4)[FILAS];
    char *pt5[FILAS];

    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("mat[%d][%d] = ", i, j);
            scanf(" %c", &mat[i][j]);
        }
    }

    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("%c\t", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
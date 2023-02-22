#include <stdio.h>

#define FIL 50
#define COL 50

int primerMaximoLocal(int mat[][COL], int filas, int columnas, int* fila, int* columna);

int main(void) {
    int matriz[FIL][COL];
    int filas, columnas;
    int fila_maximo, columna_maximo;
    
    do {
        printf("Introduce el número de filas (máximo %d): ", FIL);
        scanf("%d", &filas);
    } while (filas < 1 || filas > FIL);

    do {
        printf("Introduce el número de columnas (máximo %d): ", COL);
        scanf("%d", &columnas);
    } while (columnas < 1 || columnas > COL);

    printf("Introduce los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Fila %d, Columna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontrar el primer máximo local de la matriz
    int encontrado = primerMaximoLocal(matriz, filas, columnas, &fila_maximo, &columna_maximo);

    if (encontrado) {
        printf("El primer máximo local se encuentra en la fila %d, columna %d.\n", fila_maximo + 1, columna_maximo + 1);
    } else {
        printf("La matriz no tiene máximos locales.\n");
    }

    return 0;
}

int primerMaximoLocal(int mat[][COL], int filas, int columnas, int* fila, int* columna) {
    for (int i = 1; i < filas - 1; i++) {
        for (int j = 1; j < columnas - 1; j++) {
            int valor_actual = mat[i][j];

            // Comprobar si es un máximo local
            int es_maximo_local = 1;
            for (int k = i-1; k <= i+1; k++) {
                for (int l = j-1; l <= j+1; l++) {
                    if (mat[k][l] >= valor_actual && (k != i || l != j)) {
                        es_maximo_local = 0;
                        break;
                    }
                }
                if (!es_maximo_local) break;
            }

            if (es_maximo_local) {
                *fila = i;
                *columna = j;
                return 1;
            }
        }
    }

    return 0;
}

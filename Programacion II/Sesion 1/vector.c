#include <stdio.h>
#define DIM 50

void interseccionVectores(int *v1, int dim1, int *v2, int dim2, int *vsalida, int *dimsalida);

int main()
{
    int v1[DIM];
    int v2[DIM];
    int dim1, dim2;

    int vsalida[5];
    int dimsalida;

    printf("Introduce la dimension del primer vector: ");
    scanf("%d", &dim1);

    for (int i = 0; i < dim1; i++)
    {
        printf("Introduce el valor de la posicion %d: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Introduce la dimension del segundo vector: ");
    scanf("%d", &dim2);

    for (int i = 0; i < dim2; i++)
    {
        printf("Introduce el valor de la posicion %d: ", i);
        scanf("%d", &v2[i]);
    }

    interseccionVectores(v1, dim1, v2, dim2, vsalida, &dimsalida);

    printf("El vector de salida es: ");
    for (int i = 0; i < dimsalida; i++)
    {
        printf("%d ", vsalida[i]);
    }
    printf("\nLa dimension del vector de salida es: %d\n", dimsalida);

    return 0;
}
void interseccionVectores(int *v1, int dim1, int *v2, int dim2, int *vsalida, int *dimsalida)
{
    int i, j, k;
    *dimsalida = 0;

    for (i = 0; i < dim1; i++)
    {

        for (j = 0; j < dim2; j++)
        {
            if (v1[i] == v2[j])
            {

                for (k = 0; k < *dimsalida; k++)
                {
                    if (v1[i] == vsalida[k])
                    {
                        break;
                    }
                }

                if (k == *dimsalida)
                {
                    vsalida[*dimsalida] = v1[i];
                    (*dimsalida)++;
                }
                break;
            }
        }
    }
}

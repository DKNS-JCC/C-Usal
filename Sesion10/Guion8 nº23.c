#include <stdio.h>
#include <stdlib.h>
#define DIM 12+

void nummaxmin(int *vector, int *, int *);

int main(void)
{
    int max=0, min=0;
    int vector[DIM] = {3, 2, 3, 4, 5, 6, 7, 8, 6, 11, 4, 3};
    nummaxmin(vector, &max, &min);
    printf("El numero maximo es %d y el minimo %d", max, min);
    return 0;
}

void nummaxmin(int *vector, int *max, int *min)
{
    int i;

    for (i = 0; i < DIM; i++)
    {
        if (vector[i] > *max)
            *max = vector[i];
    }


    *min = *max;
 

    for (i = 0; i < DIM; i++)
    {
        if (vector[i] < *min)
            *min = vector[i];
    }

}

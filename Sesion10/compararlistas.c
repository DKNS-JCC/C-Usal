#include <stdio.h>
#include <stdlib.h>

int compara_listas(double *v1, double *v2);

int main()
{
    double v1[10], v2[10];
    compara_listas(v1, v1);
    return 0;
}

int compara_listas(double *v1, double *v2)
{
    int i, j, cont = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Introduzca el valor %d: ", i);
        scanf("%lf", &v1[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Introduzca el valor %d: ", i);
        scanf("%lf", &v2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%.2lf    ", v1[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%.2lf    ", v2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (v1[i] == v2[i])
        {
            cont++;
        }
    }
    if (cont == 10)
    {
        printf("Los vectores son iguales");
    }
    else
    {
        printf("Los vectores son distintos");
    }
}
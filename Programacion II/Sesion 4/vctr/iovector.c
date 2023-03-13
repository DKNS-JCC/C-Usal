#include <stdio.h>
#include <math.h>
int solicitar_vector(float *vector1, float *vector2, int DIMMAX)
{
    int diml = 0, i = 0;
    do
    {
        printf("Dimensi�n de los vectores (entre 1 y %d)?: ", DIMMAX);
        scanf("%d", &diml);
    } while (diml <= 0 || diml > DIMMAX);

    puts("\nIntroduzca el primer vector:");
    for (i = 0; i < diml; i++)
    {
        printf("v1[%d]?: ", i + 1);
        scanf("%f", &vector1[i]);
    }

    puts("\nIntroduzca el segundo vector:");
    for (i = 0; i < diml; i++)
    {
        printf("v2[%d]?: ", i + 1);
        scanf("%f", &vector2[i]);
    }
    return diml;
}

void presentar_vector(float *vector1, float *vector2, int diml)
{
    int i;

    puts("\nVectores introducidos:");
    printf("V1 = (%g", vector1[0]);
    for (i = 1; i < diml; i++)
        printf(", %g", vector1[i]);
    printf(")\n");

    printf("V2 = (%g", vector2[0]);
    for (i = 1; i < diml; i++)
        printf(", %g", vector2[i]);
    printf(")\n");
}
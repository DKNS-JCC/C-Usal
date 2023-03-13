
void modulo_vector(float *vector1, float *vector2, int diml)
{
    float modulov1, modulov2;
    int i = 0;
    modulov1 = modulov2 = 0;
    for (i = 0; i < diml; i++)
    {
        modulov1 += vector1[i] * vector1[i];
        modulov2 += vector2[i] * vector2[i];
    }
    modulov1 = sqrt(modulov1);
    modulov2 = sqrt(modulov2);

    printf("\n");
    printf("M�dulo del primer  vector: %g\n", modulov1);
    printf("M�dulo del segundo vector: %g\n", modulov2);
}
void suma_vector(float *vector1, float *vector2, int diml)
{
    float vsuma[diml];
    int i = 0;

    for (i = 0; i < diml; i++)
        vsuma[i] = vector1[i] + vector2[i];
    puts("\nVector suma:");
    printf("V1 + V2 = (%g", vsuma[0]);
    for (i = 1; i < diml; i++)
        printf(", %g", vsuma[i]);
    printf(")\n");
}
void prod_vector(float *vector1, float *vector2, int diml)
{
    int i=0;
    float prod_escalar = 0;
    for (i = 0; i < diml; i++)
        prod_escalar += vector1[i] * vector2[i];

    puts("\nProducto escalar:");
    printf("V1 x V2 = %g\n", prod_escalar);
    printf("\n\n");
}
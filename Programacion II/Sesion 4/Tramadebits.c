#include <stdio.h>
#include <stdint.h>
#define TRUE 1

typedef struct OchoBits
{
    unsigned char 
        b0 : 1, 
        b1 : 1, 
        b2 : 1, 
        b3 : 1, 
        b4 : 1, 
        b5 : 1, 
        b6 : 1, 
        b7 : 1;
} OchoBits;

union
{
    int campoInt;
    float campoFloat;
    long long campoLongLong;
    double campoDouble;
    OchoBits byte[8];
} tramas;

int main()
{
    char opcion;
    while (TRUE)
    {
        printf("A) int      B) float        C) long long        D) double       Q) Salir\n");
        printf("Selecciona una opcion: ");
        scanf(" %c", &opcion);
        if (opcion == 'Q')
        {
            break;
        }
        switch (opcion)
        {
        case 'A':
        case 'a':
        {
            int valor;
            printf("Escriba un int: ");
            scanf("%d", &valor);
            tramas.campoInt = valor;
            printf("|");
            for (int i = 3; i >= 0; i--)
            {
                printf("%d%d%d%d%d%d%d%d", tramas.byte[i].b7, tramas.byte[i].b6, tramas.byte[i].b5, tramas.byte[i].b4, tramas.byte[i].b3, tramas.byte[i].b2, tramas.byte[i].b1, tramas.byte[i].b0);
            }
            printf("|\n");
            break;
        }
        case 'B':
        case 'b':
        {
            float valor;
            printf("Escriba un float: ");
            scanf("%f", &valor);
            tramas.campoFloat = valor;
            printf("|");
            for (int i = 3; i >= 0; i--)
            {
                printf("%d%d%d%d%d%d%d%d", tramas.byte[i].b7, tramas.byte[i].b6, tramas.byte[i].b5, tramas.byte[i].b4, tramas.byte[i].b3, tramas.byte[i].b2, tramas.byte[i].b1, tramas.byte[i].b0);
            }
            printf("|\n");
            break;
        }
        case 'C':
        case 'c':
        {
            long long valor;
            printf("Escriba un long long: ");
            scanf("%lld", &valor);
            tramas.campoLongLong = valor;
            printf("|");
            for (int i = 7; i >= 0; i--)
            {
                printf("%d%d%d%d%d%d%d%d", tramas.byte[i].b7, tramas.byte[i].b6, tramas.byte[i].b5, tramas.byte[i].b4, tramas.byte[i].b3, tramas.byte[i].b2, tramas.byte[i].b1, tramas.byte[i].b0);
            }
            printf("|\n");
            break;
        }
        case 'D':
        case 'd':
        {
            double valor;
            printf("Escriba un double: ");
            scanf("%lf", &valor);
            tramas.campoDouble = valor;
            printf("|");
            for (int i = 7; i >= 0; i--)
            {
                printf("%d%d%d%d%d%d%d%d", tramas.byte[i].b7, tramas.byte[i].b6, tramas.byte[i].b5, tramas.byte[i].b4, tramas.byte[i].b3, tramas.byte[i].b2, tramas.byte[i].b1, tramas.byte[i].b0);
            }
            printf("|\n");
            break;
        }
        default:
            printf("Opcion invalida\n");
        }
    }
    return 0;
}

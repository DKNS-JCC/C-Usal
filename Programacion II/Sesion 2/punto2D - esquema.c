#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

typedef struct
{
    float x;
    float y;
} Punto;

typedef enum
{
    CUADRADO,
    RECTANGULO,
    PUNTO,
    LINEA_VERTICAL,
    LINEA_HORIZONTAL
} Figura;

void ModuloPrincipal(void);
void Presentacion(void);
void LeerPunto(Punto *);
void EscribirPunto(Punto);
float DistanciaPuntos(Punto, Punto);
Punto PuntoMedio(Punto, Punto);
Figura FiguraDefinenPuntos(Punto, Punto);
float AreaFiguraPuntos(Punto, Punto);

int main(void)
{

    char respuesta;

    system("cls");
    Presentacion();
    do
    {
        printf("\n");
        ModuloPrincipal();
        printf("\n");
        do
        {
            printf("�Otra ejecuci�n (S/N)?: ");
            fflush(stdin); /* Limpia el buffer de teclado */
            respuesta = toupper(getchar());
        } while (respuesta != 'S' && respuesta != 'N');

    } while (respuesta != 'N');

    return 0;
}

void ModuloPrincipal(void)
{

    Punto p1, p2, ptot;
    float dist, area;
    Figura figu;

    puts("Introduzca el primer punto: ");
    LeerPunto(&p1);

    puts("\n\nIntroduzca el segundo punto: ");
    LeerPunto(&p2);

    printf("\nPunto1: (%.2f, %.2f)", p1.x, p1.y);
    printf("\nPunto2: (%.2f, %.2f)", p2.x, p2.y);

    dist = DistanciaPuntos(p1, p2);
    printf("\n La distancia entre los puntos es: %.2f unidades", dist);

    ptot = PuntoMedio(p1, p2);
    printf("\n El punto medio entre los puntos es: (%.2f, %.2f)", ptot.x, ptot.y);

    figu = FiguraDefinenPuntos(p1, p2);

    switch (figu)
    {
    case CUADRADO:
        printf("\n Los puntos definen un cuadrado");
        break;
    case RECTANGULO:
        printf("\n Los puntos definen un rect�ngulo");
        break;
    case PUNTO:
        printf("\n Los puntos definen un punto");
        break;
    case LINEA_VERTICAL:
        printf("\n Los puntos definen una l�nea vertical");
        break;
    case LINEA_HORIZONTAL:
        printf("\n Los puntos definen una l�nea horizontal");
        break;
    default:
        printf("\n Los puntos no definen una figura");
        break;
    }

    area = AreaFiguraPuntos(p1, p2);
    printf("\n El area de la figura que definen los puntos es: %f unidades cuadradas", area);
}

void LeerPunto(Punto *p)
{

    printf("Coordenada X? ");
    scanf("%f", &p->x);
    printf("Coordenada Y? ");
    scanf("%f", &p->y);
}

void EscribirPunto(Punto p)
{
    printf("(%4.2f, %4.2f)", p.x, p.y);
}

float DistanciaPuntos(Punto p1, Punto p2)
{

    float dist;
    dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return dist;
}

Punto PuntoMedio(Punto p1, Punto p2)
{

    Punto pm;
    pm.x = (p1.x + p2.x) / 2;
    pm.y = (p1.y + p2.y) / 2;
    return pm;
}

Figura FiguraDefinenPuntos(Punto p1, Punto p2)
{

    Figura forma;
    if (p1.x == p2.x && p1.y == p2.y)
        forma = PUNTO;
    else if (p1.x == p2.x)
        forma = LINEA_VERTICAL;
    else if (p1.y == p2.y)
        forma = LINEA_HORIZONTAL;
    else if (p1.x == p1.y && p2.x == p2.y)
        forma = CUADRADO;
    else
        forma = RECTANGULO;
    return forma;
}

float AreaFiguraPuntos(Punto p1, Punto p2)
{

    float area;
    area = fabs(p1.x - p2.x) * fabs(p1.y - p2.y);
    return area;
}

void Presentacion(void)
{

    puts("DISTANCIA ENTRE PUNTOS DEL PLANO");
    puts("================================");
    puts("Dados dos puntos del plano, calcula la distancia y el punto medio entre ellos.");
    puts("Adem�s indica si delimitan un rect�ngulo o un cuadrado y el area del mismo.");
    puts("");
}

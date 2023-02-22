#include <stdio.h>
#define MAXN 10

struct fecha
{
    int dia;
    int mes;
    int anio;
};
struct alumno
{
    char nombre[51];
    int curso;
    struct fecha fnac;
    char direccion[61];
    float notas[MAXN];
};
struct alumno alum;

struct alumno leerAlumno(){ //valor de retorno nombre de funcion ()
    struct alumno aa;    //declaracion de variable local
    int i;             //declaracion de contador

    printf("Introduce el nombre del alumno: "); //pide el nombre
    gets(aa.nombre);

    printf("Introduce el curso del alumno: ");
    scanf("%d", &aa.curso);

    printf("Introduce el dia de nacimiento del alumno: ");
    scanf("%d", &aa.fnac.dia);

    printf("Introduce el mes de nacimiento del alumno: ");
    scanf("%d", &aa.fnac.mes);

    printf("Introduce el anio de nacimiento del alumno: ");
    scanf("%d", &aa.fnac.anio);

    printf("Introduce la direccion del alumno: ");
    fflush (stdin);
    gets(aa.direccion);

    for (i = 0; i < MAXN; i++)
    {
        printf("Introduce la nota %d del alumno: ", i);
        scanf("%f", &aa.notas[i]);
    }

    return aa;
}

int main (){

    struct alumno alum;

    alum = leerAlumno();

    printf("Nombre: %s\n", alum.nombre);
    printf("Curso: %d\n", alum.curso);
    printf("Fecha de nacimiento: %d/%d/%d\n", alum.fnac.dia, alum.fnac.mes, alum.fnac.anio);
    printf("Direccion: %s\n", alum.direccion);
    printf("Notas: ");
    for (int i = 0; i < MAXN; i++)
    {
        printf("%f ", alum.notas[i]);
    }
}


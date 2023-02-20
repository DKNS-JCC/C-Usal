#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int suma (int); //Tipo de dato que devuelve, nombre de la funcion y parametros que recibe
int sumaexp (int, int);
int sumapar (int);


int main (){
    int n,e;
    printf("Introduzca un numero: ");
    scanf("%d", &n);
    printf("\nLa suma de los numeros hasta %d es %d", n, suma(n));

    printf("\nIntroduzca un numero: ");
    scanf("%d", &n);
    printf("\nLa suma de los numeros pares hasta %d es %d", n, sumapar(n));
    printf("\nIntroduzca un numero: ");
    scanf("%d", &n);
    printf("\nIntroduzca un exponente: ");
    scanf("%d", &e);
    printf("\nLa suma de los numeros: %d", sumaexp(n,e));

    return 0;
}

int suma (int n){
    int suma=0,i;
    for (i=0; i<=n; i++){
        suma+=i;
    }
    return suma;
}

int sumapar (int n){
    int sumapar=0,i;
    for (i=0; i<=n; i++){
        if (i%2==0){
            sumapar+=i;
        }
    }
    return sumapar;
}

int sumaexp (int n, int e){
    int sumaexp=0,i;
    for (i=0; i<e; i++){
        sumaexp+=pow(n,e);
    }
    return sumaexp;
}


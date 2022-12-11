#include <stdio.h>
#include <stdlib.h>

int suma (int); 

void main (){
    int n;
    printf("Introduzca un numero: ");
    scanf("%d", &n);
    printf("La suma de los numeros hasta %d es %d", n, suma(n));
}

int suma (int n){
    int suma=0,i;
    printf("%d",n);
    for (i=0; i<=n; i++){
        suma+=i;
    }
    return suma;
}


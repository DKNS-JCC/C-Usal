#include <stdio.h>
#include <stdlib.h>
int suma (int n){
    int suma,i;
    for (i=0; i<=n; i++){
        suma+=i;
    }
    return suma;
}
void main (){
    int n;
    printf("Introduzca un numero: ");
    scanf("%d", &n);
    n=suma;
    printf("%d", n);
}



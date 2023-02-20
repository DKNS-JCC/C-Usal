#include <stdio.h>
#include <stdlib.h>

float media_vector (int *, int dim); //prototipo

int main (void){
    int vector[100];
    int i,dim; 
    
    printf("Introduzca la dimension del vector: ");
    scanf("%d", &dim);

    for (i=0;i<dim;i++){
        printf("Introduzca el valor de la posicion %d: ", i);
        scanf("%d", &vector[i]); 
    }

    printf("La media del vector es: %f", media_vector(vector,dim)); //llamada
    return 0;
}

float media_vector (int *vector, int diam){ //definicion
    int i,dim;
    float media=0;
    for (i=0;i<dim;i++){
        media+=vector[i]; 
    }
    media/=dim;
    return media;
}
#include <stdio.h>
#include <string.h>

int main(){

char frase[100];
char caracter;
int i, contador=0;

printf("Introduzca una frase (Max. 100 caracteres) : ");
gets(frase);
printf("Introduzca un caracter: ");
scanf("%c", &caracter);

for(i=0; i<strlen(frase); i++){
    if(*(frase+i)==caracter){
        contador++;
    }
}

printf("El caracter %c aparece %d veces en la frase", caracter, contador);

return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

char frase[100];
char letra;
int i, contador=0;

printf("Introduzca una frase (Max. 100 letras) : ");
gets(frase);
printf("Introduzca una letra: ");
scanf("%c", &letra);

for(i=0; i<strlen(frase); i++){
    if(*(frase+i)==letra){
        contador++;
    }
}

printf("La letra %c aparece %d veces en la frase", letra, contador);

return 0;
}
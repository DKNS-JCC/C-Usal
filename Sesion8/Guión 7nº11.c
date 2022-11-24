#include <stdio.h>

int main(){
    char frase, letra;

    printf("Introduce una frase: ");
    scanf("%c", &frase);
    printf("Introduce una letra: ");
    scanf("%*c%c", &letra);

    return 0;
}
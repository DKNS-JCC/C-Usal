#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x = 0;
	int y = 0;
	int temp = 0; //variable temporal para intercambiar datos.
	
	printf("Introduzca un numero: ");
	scanf("%d", &x);
	printf("Introduzca un numero: ");
	scanf("%d", &y);
	
	printf ("El valor de X es: %d\n", x);
	printf ("El valor de Y es: %d\n\n", y);
	
	temp = x; //Utilizo la variable temp de intermedio para almacenar el valor de x
	x = y;
	y = temp;
	
	printf ("El valor de X es: %d\n", x);
	printf ("El valor de Y es: %d\n\n", y);
	
return 0;
}

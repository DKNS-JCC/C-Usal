#include <stdio.h>

int main (){
	int num=0, cont=0, suma=0, ant=1, temp=0;
	
	puts("SUCESION DE FIBONACI");
	puts("=================================");
	
	printf("Introduzca el numero (entre 1 y 50): ");
	scanf ("%d", &num);
	
	if(num < 1 || num >50 )
		printf("El numero debe estar entre 1 y 50");
	else
	{

	for (cont=1;cont <= num; cont++){
		
		suma=ant+temp;
		
		temp=ant;
		
		ant=suma;
		
		printf("%d\t",suma);
	}
	}
}

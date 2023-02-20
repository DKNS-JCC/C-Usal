#include <stdio.h>
#include <stdlib.h>

int main (){
	
	//-----------------------------------EJERCICIO 1-------------------------------------
	int num=0;	
	
	puts("Valores menores o iguales a 20");
	for (num=0;num<20;num++)
	{
		printf ("%d\t", num);
	}
	
	//-----------------------------------EJERCICIO 2-------------------------------------
	int suma =0;
	num =0;
	
	puts("\nValores cuya suma es 20");
	for(suma=0;suma<=20;suma=suma+num++)
	{
		printf ("%d",num);
	}
	
	//-----------------------------------EJERCICIO 3--------------------------------------
	puts("\nIntroduce un numero positivo: ");
	do
	{
		scanf("%d", &num);
		printf("%d\n", num);
	}
	while (num >0);
	
	//-----------------------------------EJERCICIO 4--------------------------------------
	num=0;
	int menor=0;
	puts("Introduce valores mayores al anterior:");
	scanf("%d", &num);
	do
	{
		menor=num;
		scanf("%d",&num);		
	}
	while (menor<num);
	
	return 0;
}

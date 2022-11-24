#include <stdio.h>
#include <stdlib.h>
#define PI  3.14159 //constante del valor de PI
	
int main(){
	
	int grados = 0;
	float res = 0; //resultado decimal final
		
	printf("Intrduce el valor en grados: ");
	scanf("%d", &grados);
	
	res= (PI/180)*grados;	
	printf("El resultado es: %f radianes\n ",res);
	
system("pause");
return 0;
	
}

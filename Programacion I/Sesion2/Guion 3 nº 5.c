#include <stdio.h>
#include <math.h>

int main (){
	
	double num=0, res=0;
	
	puts("Introduce un valor real positivo:");
	scanf("%lf",&num);
	
	printf("Numero introducido:.....%lf\n", num);
	
	res=pow(num,2);
	printf("El cuadrado es:.........%lf\n", res);
	
	res=pow(num,3);
	printf("El cubo es:.............%lf\n", res);
	
	res=log(num);
	printf("El ln es:...............%lf\n",res);
	
	res=log10(num);
	printf ("El log10 es:............%lf\n",res);
	
	res=sqrt(num);
	printf("La raIz cuadrada es:....%lf",res);

return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (){
	int num, i;
	int x [100];
do{

	printf("Seleccione el numero de entradas maximo:");
	scanf ("%d",&num);
}
while(num<1||num>100);

for (i=0;i<num;i++){
	printf("Elemento %d ", i+1);
	scanf ("%d", &x[i]);
	if (i>0 && x[i-1]>=x[i])
	{
		puts("Valor incorrecto");
		i--;
	}
}
	for (i=0;i<num;i++){
		printf ("%d ", x[i]);
	}
	
int maxDif;
maxDif=x[1]-x[0];
if (num>1){
for (i=2;i<num;i++){

	x[i]-x[i-1];
		if(x[i]-x[i-1] > maxDif)
			maxDif=x[i]-x[i-1];
}
printf("\nMaxDif = %d", maxDif);
}
else 
	puts("No tiene sentido sacar la maxima diferencia de un solo numero");
return 0;
}

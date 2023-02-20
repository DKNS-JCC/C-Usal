#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int h=0,m=0,s=0,h1=0,m1=0,s1=0,tot1=0,tot2=0,res=0;
	
	//--------------------------1CORREDOR----------------------------------
	puts("Horas1:");
	scanf("%d",&h);
	puts("Min1:");
	scanf("%d",&m);
	puts("Seg1:");
	scanf("%d",&s);
	//--------------------------2CORREDOR----------------------------------
	puts("Horas2:");
	scanf("%d",&h1);
	puts("Min2:");
	scanf("%d",&m1);
	puts("Seg2:");
	scanf("%d",&s1);
	system("cls");
	//--------------------------CALCULOS-----------------------------------
	tot1=h*3600+m*60+s;
	tot2=h1*3600+m1*60+s1;
	res=tot1-tot2;
	
	if(res<1){
		res=res*(-1);	//Invertir el valor para que la diferencia siempre sea positiva.
	}
	
	h=res/3600;
	res=res-h*3600;
	m=res/60;
	res=res-m*60;
	s=res;
	//--------------------------RESULTADO----------------------------------
	puts("===================================================================================");
	printf("La diferencia entre ambos corredores es de %d horas, %d minutos y %d segundos.\n",h,m,s);
	puts("===================================================================================");	
	
return 0;
}

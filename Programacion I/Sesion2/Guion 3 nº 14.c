#include <stdio.h>

int main(){
	
	long int fecha=0;
	int res=0,anio=0,dia=0,mes=0,temp=0;
	
	//-------------------------------DATOS------------------------------------
	
	puts("Introduzca su fecha de nacimiento en formato AAAAMMDD: ");
	scanf("%ld", &fecha);
	
	//------------------------------CALCULOS----------------------------------
	
	anio=fecha/10000;
	temp=anio*10000;
	mes=fecha-temp;
	dia=mes%100;
	mes=mes/100;
	res=dia+mes+anio;
	
	//Reutilizo las variables para ahorrar memoria.
	
	dia=res%10;
	res=res/10;
	mes=res%10;
	res=res/10;
	anio=res%10;
	res=res/10;
	temp=res%10;
	res=dia+mes+anio+temp;
	
	//Compruebo si el valor es superior a 10 para obtener un numero siempre inferior a él. 
	
	if(res>10){
		dia=res%10;
		res=res/10;
		mes=res%10;	
		res=dia+mes;
	}
	
	printf("Tu numero del Tarot es: %d\n",res);
	
	
	return 0;
}

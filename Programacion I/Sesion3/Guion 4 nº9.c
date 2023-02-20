#include <stdio.h>

int main (){
	
	int num1,num2,num3,res=0;
	
	puts("Intrduzca el numero 1: ");
	scanf("%d",&num1);
	puts("Intrduzca el numero 2: ");
	scanf("%d",&num2);
	puts("Intrduzca el numero 3: ");
	scanf("%d",&num3);
	
	if(num1!=num2 && num1!=num3 && num2!=num3){
		if(num1<num2 && num1<num3){
			printf ("El menor valor es %d", num1);
		}
		
		if(num2<num1 && num2<num3){
			printf ("El menor valor es %d", num2);
		}
		
		if(num3<num2 && num3<num1){
			printf ("El menor valor es %d", num3);
		}
		
	}
	else{
		puts("Datos incorrectos");
		return -1;
		
	}
}

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

int main (){
	char s [MAXSIZE];
	int i,n=0;
	char temp;
	
	printf("Introduzca cadena de caracteres: ");
	
	scanf ("%[^\n]", s);
	
	while (s[i]!='\0')
		i++;				//LONGITUD CADENA
		n=i;
		
	for(i=0; i<n/2;i++){
		
		temp=s[i];
		s[i]=s[n-i-1];			//INVERSION
		s[n-i-1]=temp;
		
	}
	
	printf ("\nCadena original => %s", s);
	printf ("\nCadena invertida => %s", s);
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (void){

long mat [25][25];
int filas,col,k,l,suma;
	
	puts("Introduzca n filas matriz: ");
	scanf("%d", &filas);

	if (filas>25 || filas<3)
	{
		puts("Numero supera el limite");
	}
	
	else
	{
		puts("Introduzca n columnas matriz: ");
		scanf("%d", &col);
	}

	if (col>25 || col<3)
	{
		puts("Numero supera el limite");
	}
	else{
		
		for(k=0; k<filas; k++){
			for(l=0; l<col; l++){
			
				printf("\nValor posicion [%d, %d]: ", k+1,l+1);
				scanf ("%d", &mat[k][l]);
			}
		}
		
		printf("\nMatriz:\n");
		
  		for (k = 0; k < filas; k++)
		{
	    	for (l = 0; l < col; l++)
			printf("%ld	", mat[k][l]);
	    	printf("\n");
		}

		puts("Matriz descendente por filas y ascendente por columnas:"); 
		
		for(k=filas; k>=0; k--){
			for(l=0; l<col; l++) 
				printf("%ld\t", mat[k][l]);
				printf("\n"); 
		}
		puts("La matriz presentada descendente por filas, descendente por columnas:");
			for(k=filas; k>0; k--){ 
				for(l=col; l<col; l--) 
					printf("%ld\t", mat[k][l]);
					printf("\n");
			}
		puts("Matriz ascendente por filas y ascendente por columnas:");
		for(k=0; k<=filas; k++){
			for(l=0; l<=col; l++){
				printf("%ld\t", mat[k][l]);} 
				printf("\n"); }
	}
return 0;
}

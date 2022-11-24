#include <stdio.h>

int main(){
	int i, n, j=0;
	
	puts("Selecciona la altura: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		
		for(j=0;j<=n-i;j++){
			printf(" ");
		}		
		
		for (j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for (i=0;i<n+1;i++){
		
		for(j=0;j<=i;j++){
			printf(" ");
		}		
		
		for (j=0;j<=n-i;j++){
			printf("*");
		}
		
		printf("\n");
	}
return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, j=0;
	char mat, mat2;
	
	puts("Selecciona la altura: ");
	scanf("%d",&n);
	puts("Selecciona material rombo: ");
	scanf("%*c%c",&mat);
	puts("Selecciona material borde: ");
	scanf("%*c%c",&mat2);
	
//ROMBO
	
	for (i=0;i<n;i++){
		
		for(j=0;j<=n-i;j++){
			printf(" ");
		}		
		
		for (j=0;j<=i;j++){
			printf("%c", mat);
		}
	
		
		for (j=0;j<=i;j++){
			printf("%c", mat);
		}
	
		
		for(j=0;j<=n-i;j++){
			printf(" ");
		}	
	printf("\n");	
	}
	for (i=0;i<n+1;i++){
		
		for(j=0;j<=i;j++){
			printf(" ");
		}		
		
		for (j=0;j<=n-i;j++){
			printf("%c", mat);
		}
		
		for (j=0;j<=n-i;j++){
			printf("%c", mat);
		}
		
		for(j=0;j<=i;j++){
			printf(" ");
		}
		
		printf("\n");
	}
	
	system("PAUSE");
	puts("\n");
	
//BORDE
	
		for (i=0;i<n;i++){
		
			for(j=0;j<=n-i;j++){
			printf("%c", mat2);
			}		
		
			for (j=0;j<=i;j++){
			printf(" ");
			}
	
		
			for (j=0;j<=i;j++){
			printf(" ");
			}
	
		
			for(j=0;j<=n-i;j++){
			printf("%c", mat2);
			}	
			
	printf("\n");
		
	}
		for (i=0;i<n+1;i++){
		
			for(j=0;j<=i;j++){
			printf("%c", mat2);
			}		
		
			for (j=0;j<=n-i;j++){
			printf(" ");
			}
		
			for (j=0;j<=n-i;j++){
			printf(" ");
			}
		
			for(j=0;j<=i;j++){
			printf("%c", mat2);
			}
		
		printf("\n");
	}

system("PAUSE");
puts("\n");
	
//AMBOS
	
	for (i=0;i<n;i++){
		
		for(j=0;j<=n-i;j++){
			printf("%c", mat2);
		}		
		
		for (j=0;j<=i;j++){
			printf("%c", mat);
		}
	
		
		for (j=0;j<=i;j++){
			printf("%c", mat);
		}
	
		
		for(j=0;j<=n-i;j++){
			printf("%c", mat2);
		}	
	printf("\n");	
	}
	for (i=0;i<n+1;i++){
		
		for(j=0;j<=i;j++){
			printf("%c", mat2);
		}		
		
		for (j=0;j<=n-i;j++){
			printf("%c", mat);
		}
		
		for (j=0;j<=n-i;j++){
			printf("%c", mat);
		}
		
		for(j=0;j<=i;j++){
			printf("%c", mat2);
		}
		
		printf("\n");
	}
	
return 0;
}

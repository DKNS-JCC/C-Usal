#include <stdio.h>
#include <stdio.h>

int main (){
	int num,i;
	double res, res2;

//Bucle For

	puts("Introduce el numero:");
	scanf("%d", &num);
	
	for (num;num>1;num--){
		res*=num;
	}
	printf("%d\n", res);
	system ("pause");
	
return 0;
}

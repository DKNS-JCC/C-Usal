#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num=0, rest=0, ud=0, de=0, cen=0, mill=0, inv=0;
	
	puts("Introduzca un numero entero de 4 cifras:");
	scanf ("%d",&num);
	system("cls");
	
	ud=num%10;
	rest=num/10;
	printf("Unidades:................%d\n", ud);
	
	de=rest%10;
	rest=rest/10;
	printf("Decenas:.................%d\n", de);
	
	cen=rest%10;
	rest=rest/10;
	printf("Centenas:................%d\n", cen);
	
	mill=rest%10;
	rest=rest/10;
	printf("Unidades de millar:......%d\n", mill);
	
	inv=ud*1000+de*100+cen*10+mill;
	printf("Inverso:.................%d\n",inv);
	rest=inv+num;
	printf("Inverso+NUmero:..........%d\n", rest);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (){
	int nota = 0, cont = 0, sobre = 0, notab = 0, ap = 0, sus = 0, muysus = 0, total = 0, sobre_1 = 0;
	float psobre = 0, pnotab = 0, pap = 0, psus = 0, pmuysus=0;
	
	while(nota>=0){
	cont++;
	printf ("Nota alumno %d: ", cont);
	scanf("%d", &nota);
	fflush(stdin);
		switch(nota)
		{
			case 9:
			case 10:
				sobre++;
				break;
			case 8:
			case 7:
				notab++;
				break;
			case 6:
			case 5:
				ap++;
				break;
			case 4:
			case 3:
			case 2:
				sus++;
				break;
			case 1:
			case 0:
				muysus++;
				break;
		}
	}	
	
	cont--;

	psobre=(sobre/cont)*100;
	pnotab=(notab/cont)*100;
	pap=(ap/cont)*100;
	psus=(sus/cont)*100;
	pmuysus=(muysus/cont)*100;
	
	printf ("Numero de sobresalientes: %d (%.2f %%)\n",sobre,psobre);
	printf ("Numero de notables: %d (%.2f %%)\n",notab,pnotab);
	printf ("Numero de aprobados: %d (%.2f %%)\n",ap,pap);
	printf ("Numero de suspensos: %d (%.2f %%)\n",sus,psus);
	printf ("Numero de muy deficientes: %d (%.2f %%)\n",muysus,pmuysus);
	
	
	
	
	
return 0;
}

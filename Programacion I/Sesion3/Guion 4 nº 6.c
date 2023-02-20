#include <stdio.h>

int main(){
	
	int precio,ud,dec,cent,mill,rest=0; //Variables para almacenar los componentes del numero introducido
	char udl,decl,centl,milll; //Variables de tipo caracter para sustituir por la letra al codificar
	
	//INTRODUCCION DE DATOS
	
	puts("Introduzca el valor: ");
	scanf("%d",&precio);
	
	//CONDICION DE VALORES
	
	if (precio<=0 || precio>9999){
	
		puts("El valor introducido es incorrecto.");
		return -1;
	}
	else{
		
		//CALCULOS Y DESCOMPOSICION DEL NUMERO
		
		mill=precio/1000;  
		rest=precio%1000;
		cent=rest/100;
		rest=rest%100;
    	dec= rest/10;           
    	ud=rest%10;
	}
	
	//CODIFICACIÓN
	
	switch(mill) {	
	case 0:milll='O'; break;
	case 1:milll='G'; break; 
	case 2:milll='A'; break;
	case 3:milll='L'; break;
	case 4:milll='E'; break;		//Cambio de valor de la variable char segun el valor de la variable numerica millar.
	case 5:milll='I'; break;
	case 6:milll='C'; break;
	case 7:milll='R'; break;
	case 8:milll='U'; break;
	case 9:milll='M'; break;
}
	switch(cent) {	
	case 0:centl='O'; break;
	case 1:centl='G'; break; 
	case 2:centl='A'; break;
	case 3:centl='L'; break;
	case 4:centl='E'; break;		//Cambio de valor de la variable char segun el valor de la variable numerica centenas.
	case 5:centl='I'; break;
	case 6:centl='C'; break;
	case 7:centl='R'; break;
	case 8:centl='U'; break;
	case 9:centl='M'; break;
}
	switch(dec) {	
	case 0:decl='O'; break;
	case 1:decl='G'; break; 
	case 2:decl='A'; break;
	case 3:decl='L'; break;
	case 4:decl='E'; break;			//Cambio de valor de la variable char segun el valor de la variable numerica decenas.
	case 5:decl='I'; break;
	case 6:decl='C'; break;
	case 7:decl='R'; break;
	case 8:decl='U'; break;
	case 9:decl='M'; break;
}
	switch(ud) {	
	case 0:udl='O'; break;
	case 1:udl='G'; break; 
	case 2:udl='A'; break;
	case 3:udl='L'; break;
	case 4:udl='E'; break;			//Cambio de valor de la variable char segun el valor de la variable numerica unidades
	case 5:udl='I'; break;
	case 6:udl='C'; break;
	case 7:udl='R'; break;
	case 8:udl='U'; break;
	case 9:udl='M'; break;
}


	printf("El numero codificado es: %c %c %c %c", milll,centl,decl,udl); // Mostrar el resultado en pantalla en formato char.
	return 0;
}

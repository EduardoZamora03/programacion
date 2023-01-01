/*Arreglo de apuntadores
Elaborar un programa en c que dado el numero de mes nos devuelva 
el mes en letra utilizando una funcion con retorno apuntador*/

#include <stdio.h>			

char *textomeses(int m);

int main(){
	int mes;
	char *p;
	printf("Ingresa el numero de mes deseado \n");
	scanf("%d",&mes);
	p=textomeses(mes);
	printf("Mes= %s",p);
	
	return 0;
}

char *textomeses(int m){
	static char *meses[]={"Fuera de rango","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre",
					"Octubre","Noviembre","Diciembre"};
	return ((m>=1 && m<=12) ? meses[m] : meses[0]);	//Es un if,(if) ?= si es verdad, :=(else)si no(si es falso)
}

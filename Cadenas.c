/*Hacer cadena copiar cadena indicar usuario que indicara cuantos caracteres copiar*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char texto[50],texto2[50];
	int i,n;
	
	printf("Ingrese una palabra \n");
	scanf("%s",texto);
	printf("Ingrese una segunda palabra\n");
	scanf("%s",texto2);
	
	strcad(texto,texto2);
	
	
	return 0;
}

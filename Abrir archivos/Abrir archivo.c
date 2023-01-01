//Pedir al usuario nombre del archivo, pedir datos,guaradar nombre,matricula,carrera guardado en el archivo.

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nombre[20];
	char matricula;
	char carrera;
}datos;
	
int main(){
	char nombre_archivo;
	FILE *p;
	datos archivo;
	
	printf("Ingrese el nombre del archivo \n");
	scanf("%s",nombre_archivo);
	fflush(stdin);
	
	p=fopen(nombre_archivo,"w+");
	
	printf("Ingrese su nombre \n");
	scanf("%s",archivo.nombre);
	
	printf("Ingrese su matricula \n");
	scanf("%s",archivo.matricula);
	//fprintf(p.)
	printf("Imgrese su carrera \n");
	scanf("%s",archivo.carrera);
	
}

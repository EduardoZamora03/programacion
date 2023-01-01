/*
abrir un archivo:
*FILE fopen(char *nombre_archivo, char *modo);
Cerrar un archivo:
fclose(FILE *apuntador_archivo);

Modos:

r Abre un archivo de tecto solo lectura
w crea un archivo de texto para escritura
a Abre un archivo de texto para agregar texto
r+ Abre un archivo de texto para lectura/escritura
w+ Crea un archivo de texto para lectura/escritura
a+ Añade o crea un archivo de texto para lectura/escritura
*/

#include <stdio.h>

int main(){
	FILE *pf;
	char texto[100];
	pf=fopen("documento.txt","r");
	if(pf!=NULL){
		printf("Lectura del archivo correctamente \n");
		printf("Mostrando su contenido \n");
		while(feof(pf)==0){
			fgets(texto,100,pf);
			printf("%s",texto);
		}
		//fputs("Texto extra \n",pf);
		fclose(pf);
	}
	else
		printf("Error al abrir el archivo \n");
		
	
	return 0;
}

//estructuras,funciones paso por valor y por referencia

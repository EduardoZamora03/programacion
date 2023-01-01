#include <stdio.h>
#include <stdlib.h>

#define T 5

int menu();
void ingresar();
void mostrar();
void archivo();


typedef struct{
	char nombre[50];
	int matricula;
	char carrera[50];
}datosp;

datosp datos;

int main(){
	int opc; 
	do{
		system("cls");
		opc=menu();
		switch(opc){
			case 1:
				ingresar();
				break;
			case 2:
				mostrar();
				break;
			case 3:
				archivo();
				break;
				
		}
	}while(opc);
	
	
	
	return 0;
}

int menu(){
	int op;
	printf("[1]Ingresar los datos del archivo \n");
	printf("[2]Mostrar los datos ingresados \n");
	printf("[3]Hacer archivo \n");
	printf("[4]");
	printf("Opcion: ");
	scanf("%d",&op);
	return op;
}
void ingresar(){
	int i;
	for(i=0;i<T;i++){
	printf("Ingrese su nombre \n");
	scanf("%s",datos.nombre);
	printf("Ingrese su matricula \n");
	scanf("%d",datos.matricula);
	printf("Ingrese su carrera \n");
	scanf("%s",datos.carrera);
	}
}
void mostrar(){
	printf("Nombre: %s \n",datos.nombre);
	printf("Matricula: %d \n",datos.matricula);
	printf("Carrera: %s \n",datos.carrera);
}
void archivo(){
	FILE *pf;
	char nom_arch[50];
	
	printf("Ingrese el nombre del archivo \n");
	scanf("%s",&nom_arch);
	strcat(nom_arch,".txt");
	
	pf=fopen(nom_arch,"w+");
	if(pf==NULL){
		fprintf(pf,"Nombre: %s\n",datos.nombre);
		fprintf(pf,"Matricula: %d\n",datos.matricula);
		fprintf(pf,"Carrera: %s\n",datos.carrera);
		fclose(pf);
		printf("Archivo creado \n");
	}else{
		printf("El archivo ya fue creado \n");
	}
	
	
}



#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char matricula[11];
	char nombre[30];
	char apellidop[20];
	int edad;
}datos;
void registrar(datos *p,int n);
void mostrar(datos *p, int n);

int main(){
	datos *alumnos;
	int num;
	puts("Ingresa el numero de alumnos");
	scanf("%d",&num);
	alumnos=(datos*)malloc(num*sizeof(datos));	//se usa para cualquier tipo de dato
	//*alumnos=(datos*)calloc(num,sizeof(datos)); se usa para arreglos
	registrar(alumnos,num);
	mostrar(alumnos,num);
	free(alumnos);
	return 0;
}
void registrar(datos *p,int n){
	int i;
	for(i=0;i<n;i++){
		printf("Alumno %d \n",i+1);
		printf("Matricula: \n");
		scanf("%s",(p+i)->matricula);
		puts("Nombre: \n");
		scanf("%s",(p+i)->nombre);
		puts("Apellido Paterno: \n");
		scanf("%s",(p+i)->apellidop);
		puts("Edad: \n");
		scanf("%d",&(p+i)->edad);
		
		printf("Registro guardado... \n");
		system("PAUSE");
	}
}	
void mostrar(datos *p,int n){
	int i;
	for(i=0;i<n;i++){
	printf("Alumnos %d \n",i);
	printf("Matricula: %s \n",(p+i)->matricula);
	printf("Nombre: %s \n",(p+i)->nombre);
	printf("Apellido: %s \n",(p+i)->apellidop);
	printf("Edad: %d \n",(p+i)->edad);
	}

}


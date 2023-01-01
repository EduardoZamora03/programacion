#include <stdio.h>		//Estructuras					FICHVERCCI15-32/ALUMNO
#define T 5
struct datos{
	char nombre [40];
	char apellidop [20];						//Se define variables a trabajar
	char apellidom [20];
	int edad;
	char telefono[11];
	char direccion [100];
	int cp;
	char ciudad [50];
	char estado [30];
}personas[5];			//Tambien esta es opcion: personas[5];		//Los datos se miden en forma de vector

int main(){
	struct datos personas [T];						//Opcion en caso de no usar el de arriba: struct datos personas [5];
	int i;
	for(i=0;i<T;i++){
		
		printf("________Datos de persona %d__________\n",i+1);
		
		printf("Ingresa nombre \n");
		gets(personas[i].nombre);
		
		printf("Ingresa apellido paterno \n");
		fflush(stdin);	
		scanf("%s",&personas[i].apellidop);
		
		printf("Ingresa apellido materno \n");
		scanf("%s",&personas[i].apellidom);
		
		printf("Ingresa edad \n");
		scanf("%d",&personas[i].edad);
		
		printf("Ingresa telefono de 10 digitos \n");
		scanf("%d",&personas[i].telefono);
		
		printf("Ingrese direccion \n");	
		fflush(stdin);								//Se encarga de limpiar el buffer el fflush
		gets(personas[i].direccion);					
		
		printf("Ingrese codigo postal \n");
		scanf("%d",&personas[i].cp);
		
		printf("Ingrese ciudad \n");
		fflush(stdin);		
		gets(personas[i].ciudad);
		
		printf("Ingrese estado \n");
		fflush(stdin);		
		gets(personas[i].estado);
	}
	for(i=0;i<T;i++){		//Terminar para que imprima los datos puestos arriba
		
		printf("________Datos de persona %d__________\n",i+1);
		
		printf("Nombre: %s \n",personas[i].nombre);
	
		
		printf("Apellido paterno: %s \n",personas[i].apellidop);
	
		
		printf("Apellido materno: %s \n",personas[i].apellidom);
	
		
		printf("Edad: %d \n",personas[i].edad);
	
		
		printf("Telefono de 10 digitos: %d \n",personas[i].telefono);
	
		printf("Direccion: %s \n",personas[i].direccion);
		
		
		printf("Codigo postal %s \n",personas[i].cp);
	
		
		printf("Ciudad %s \n",personas[i].ciudad);
		
		
		printf("Estado %s \n",personas[i].estado);
	
	}
	
	
	
	
	return 0;
}

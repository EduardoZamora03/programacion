#include <stdio.h>
#include <stdlib.h>

void mostrar(int *p, int n);
void llenar_recursivo(int *p, int n);
int menu();

int main(){
	int num,*vector,i,op;
	
	do{
	system("cls");
	op=menu();
	switch(op){
		case 1: 
			printf("Ingrese el tamanio del vector \n");
			scanf("%d",&num);
			vector=(int *)malloc(num*sizeof(int));
			break;
		case 2:
			printf("Ingrese valores del vector \n");
			llenar_recursivo(vector,num);
			break;
		case 3:
			printf("Mostrando contenido del vector \n");
			mostrar(vector,num);
			break;
		case 4: 
			printf("Ingrese nuevo tamanio del vector \n");
			scanf("%d",&num);
			vector=(int *)realloc(vector,num*sizeof(int));
			printf("Ingrese nuevos valores del vector \n");
			llenar_recursivo(vector,num);
			break;
		case 5: 
			printf("Saliendo.... \n");
			break;
			
		default: printf("Opcion no encontrada \n");
	}
	system("PAUSE");
	}while(op!=5);
	
	return 0;
}

void llenar_recursivo(int *p,int n){
	if(n){
		scanf("%d",p);
		llenar_recursivo(++p,--n);
	}
}
void mostrar(int *p,int n){
	if(n){
	 	printf("%d \t",*p);
		mostrar(++p,--n);
	}
}
int menu(){
	int op;
	printf("------Menu------\n");
	printf("[1] Crear vector \n");
	printf("[2] Insertar datos del vector \n");
	printf("[3] Mostrar vector \n");
	printf("[4] Redimensionar vector \n");
	printf("[5] Salir \n");
	printf("Opcion: ");
	scanf("%d",&op);

	return op;
}
	


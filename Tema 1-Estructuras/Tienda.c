/* Estructura con nombre, precio, cantidad de 10 elementos*/
#include <stdio.h>
#define T 10

void insertar(tienda *p, int n);
void mostrar(tienda *p, int n1);
int precio_mayor();	//Recursivo
void cantidad_total();	//Recursivo

int menu();

typedef	struct{
	char nombre[20];
	float precio;
	int cantidad;
}tienda;

int main(){
	tienda *datos[T];
	int op, num;
	
	do{
		system("cls");
		op=menu();
		switch(op){
			case 1:
			//datos=(tienda*)malloc(num*sizeof(tienda));
			insertar(datos[T],num);

			case 2:
			mostrar(datos[T],num);

			default: printf("Opcion no valida \n");
		}
	}while(op);
	
	
	return 0;
}

int menu(){
	int op;
	printf("------Menu----- \n");
	printf("[1] Ingresar productos \n");
	printf("[2] Mostrar todos los productos \n");
	printf("[3] Mostrar precio mas alto \n");
	printf("[4] Mostrar los productos guardados \n");
	printf("Opcion: \n");
	scanf("%d",&op);
	return op;
}
//insertar,mostrar,

void insertar(tienda *p, int n){
	int i;
	for(i=0;i<n;i++){
		printf("----Producto %d-----",i+1);
		printf("Ingrese el nombre del producto \n");
		scanf("%s",(p+i)->nombre);
		printf("Ingrese el precio del producto \n");
		scanf("%f",(p+i)->precio);
		printf("Ingrese la cantidad del producto \n");
		scanf("%d",&(p+i)->cantidad);

		printf("Registro guardado \n");
		system("PAUSE");
	}
}

void mostrar(tienda *p, int n){
	int i;
	for(i=0;i<n;i++){
		printf("Producto %d",i+1);
		printf("%s \n",(p+i)->nombre);
		printf("%f \n",(p+i)->precio);
		printf("%d \n",(p+i)->cantidad);
	}
}

/*int precio_mayor(tienda *p,int n){
	if(n){

	}
}*/



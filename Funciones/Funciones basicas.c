//Retorno de valores y cursores de referencia
#include <stdio.h>
#include <stdlib.h>
int menu();
int suma(int a,int b);				
int resta(int a,int b);
int multiplicacion(int a, int b);
float divi(float a,float b);
void insertar_datos(void);
int potencia(int n1,int po);
long long int factorial(int n1);
int x,y;

int main(){
	int op;
	
	do{
		system("cls");
		op=menu();
		switch(op){
		
			case 1: 
			insertar_datos();
			printf("%d + %d= %d\n",x,y,suma(x,y));
					
				break;
			case 2:
				insertar_datos();
			printf("%d - %d= %d\n",x,y,resta(x,y));
				break;
			case 3:
				insertar_datos();
			printf("%d * %d= %d\n",x,y,multiplicacion(x,y));
				break;
			case 4:
				insertar_datos();
			printf("%d / %d= %.2f\n",x,y,divi(x,y));
				break;
			case 5:
				insertar_datos();
			printf("%d ^ %d= %d \n",x,y,potencia(x,y));
				break;
			case 6:
				printf("Ingresa el numero para calcular factorial \n");
				scanf("%d",&x);
			printf("!%d  = %d \n",x,factorial(x));
				break;
			case 0:printf("Saliendo....\n");
				break;
			default: printf("Opcion no valida \n");
	}
	system("PAUSE");
	}while(op);

	return 0;
}
int menu(){
	int opr;
		printf("-------Operaciones matematicas------- \n");
		printf("[1] Suma \n");
		printf("[2] Resta \n");
		printf("[3] Multiplicacion \n");
		printf("[4] Division \n");
		printf("[5] Potencia \n");
		printf("[6] Factorial \n");
		printf("[0] Salir \n");
		printf("Opcion: ");
		scanf("%d",&opr);
		
	return opr;
}

void insertar_datos(void){
	printf("Ingresa dos numeros\n");
	scanf("%d %d",&x, &y);
}


int suma(int a,int b){
	//int re;
	//re=a+b;
	return a+b;
}
int resta(int a,int b){
	
	return a-b;
}
int multiplicacion(int a, int b){
	
	return a*b;
}
float divi(float a,float b){
	
	return a/b;
}
int potencia(int n1,int po){
/*	int i,r=1;			//i es controlador y r es una base que guardara los datos que se den
	for(i=1;i<=po;i++){
		r=r*n1;		
	}
	return r;*/
	
	//2^5=n1*n1*n1*n1*n1=32
	
	if(po==0){
		return 1;
	}
	else
	return n1 * potencia(n1,--po);			//aqui se hace que se este repitiendo el ciclp una y otra vez hasta que "po" llegue al valor de "i" que es 1
	//2^5= n1=2 * n1=2 * n1=3 * n1=4 * n1=5 = 32 po llega a 0 y retorn un 1 para mantener el valor
}
long long int factorial(int n1){
	//!5=5x4x3x2x1;
/*	int i,r=1;
	for(i=n1;i>1;i--)
		r=r*i;
	return r;*/
	
	//printf("%d \t",n1);
	if(n1==0)
		return 1;
	else{
		return n1 * factorial(--n1);
	}
}



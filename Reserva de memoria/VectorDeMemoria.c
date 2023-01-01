//Realizar un vector de memoria a traves de la reserva de memoria
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *vector,num,i; //No se define el vector si no que el usuario introduce el tamaño que va a tener el vector
	
	printf("Ingresa el tamaño del vector \n"); 
	scanf("%d",&num);
	vector=(int *)malloc(num*sizeof(int));
	printf("Ingresa los valores al vector \n");
	for(i=0;i<num;i++)
		scanf("%d",&*(vector+1));
	printf("Mostrando contenido del vector \n");
	for(i=0;i<num;i++)
		printf("%d \n",*(vector+1));
	
	
		
	
	return 0;
}

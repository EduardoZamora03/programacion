//Apuntadores 1

#include <stdio.h>

int main(){
	int x,*p;	//*p significa que p es un apuntador *=apuntador 
	
	printf("Ingresa un valor \n");
	scanf("%d",&x);
	p=&x;	
		//Manipular el apuntador altera al elemento que apunta	
	printf("El valor de x es %d \n",x);
	printf("La direccion de x es %d \n",&x);	//formato decimal
	printf("La direccion de x es %X \n",&x);	//%x muestra formato hexagecimal de x
	*p=100;	
	printf("El contenido del apuntador es %d \n",*p);
	printf("El valor de x es %d \n",x);
		
	return 0;
}

#include <stdio.h>
int contar(int x);		//Como sumar los digitos que entran?

int sumar_digitos(int x);


int main(){
	int n;
	
	printf("Ingresa un numero \n");
	scanf("%d",&n);
	printf("La suma de los digitos de %d es %d \n",n,sumar_digitos(n));

	
	return 0;
}

/*int contar(int x){
	/*int c;	
	while(x>0){
		x=x/10;
		c++;
	}
	return c;
	
	if(x==0)
		return 0; 
	else
		return 1 + contar (x/10);
}*/

/*int sumar_digitos(int x){
	int s=0;
	while(x>0){
		s=s+(x % 10);				
		x=x/10;
	}
	return s;
}*/

int sumar_digitos(int x){			//Esto es una funcion recursiva que sustituye un while
	if(x==0)
		return 0;
	else
		return x%10+sumar_digitos(x/10);
}

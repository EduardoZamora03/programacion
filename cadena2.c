#include <stdio.h>
#include <stdlib.h>

#define T 100

int main(){
	char texto[T],texto2[T];
	int i,n;
	
	printf("Ingrese una palabra \n");
	scanf("%s",texto);
	
	printf("Ingrese la cantidad de caracteres a imprimir \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		if(texto[n-1]<100){
			printf("Error \n");
		}
		
		texto2[i]=texto[i];
	
	}
	printf("La cadena ahora es: %s\n",texto2);
	
	
	return 0;
}

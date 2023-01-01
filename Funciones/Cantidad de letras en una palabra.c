#include <stdio.h>
#define T 100

int contarcad(char cad[],int in);

int main(){
	char palabra[T];
	
	printf("Ingrese la palabra a contar \n");
	scanf("%s",palabra);
	printf("La palabra %s tiene %d caracteres",palabra,contarcad(palabra,0));
	
	return 0;
}

int contarcad(char cad[],int in){
	if(cad[in]==0)
		return 0;
	else
		return 1+contarcad(cad,++in);
}

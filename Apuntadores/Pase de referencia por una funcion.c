//Pase de referencia por una funcion
#include <stdio.h>
#define T 100
int contarcad(char *q);
int sumarascii(char *q);
void mayuscula(char *q);
//char *minuscula(char *q);
void minuscula(char *q);
int main(){
	char palabra[T],*p=NULL;
	
	printf("Ingresa una palabra \n");
	scanf("%s",&palabra);
	printf("El numero de caracteres es %d\n",contarcad(palabra));
	printf("La suma de ascii de la palabra es %d\n",sumarascii(palabra));
	mayuscula(palabra);
	printf("\nLa palabra en mayuscula es: %s \n",palabra);
	minuscula(palabra);
	printf("\nLa palabra en minuscula es: %s \n",palabra);
	return 0;
}

int contarcad(char *q){
	if(*q=='\0')	//'\0' Significa impresion de una cadena de caracteres o marca el fin de caracter donde no hay nada
		return 0;
	else
		return 1+contarcad(++q);	//Esto es paso por referencia
}
int sumarascii(char *q){
	if(*q=='\0')
		return 0;
	else
		return *q+sumarascii(++q);
}
void mayuscula(char *q){
	while(*q!='\0'){
		*q-=32;
		q++;
	}
}
void minuscula(char *q){
	while(*q!='\0'){
		*q+=32;
		q++;
	}
}

	


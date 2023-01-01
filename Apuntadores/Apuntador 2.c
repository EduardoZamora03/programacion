#include <stdio.h>
#define T 5

int main(){
	int vector[T],*p,i;
	p=vector;
	
	printf("Llenado de datos del vector \n");
	
	for(i=0;i<T;i++)
		scanf("%d",p++);
	printf("Mostrando datos...\n");
	
	for(i=0;i<T;i++)
		printf("%d \t",*(vector+i));
	printf("\np=%d\n",*p);
	
	
	return 0;
}


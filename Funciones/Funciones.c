//Funciones por parametro con valor
#include<stdio.h>
#define T 5

int sumavector(int v[],int in);

int main(){
	
	int i,vector[T];
	
	printf("LLenado de vector \n");
	for(i=0;i<T;i++)
		scanf("%d",&vector[i]);
	printf("La suma de sus elementos es: %d",sumavector(vector,0));
	
	return 0;
}

int sumavector(int v[],int in){
/*	int a,suma=0;
	for(a=0;a<T;a++){
		suma+=v[a];
	}
	return suma;*/
	
	if(in>=T)
		return 0;
	else
		return v[in]+sumavector(v,++in);
}

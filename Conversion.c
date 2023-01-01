/*Conversion de decimal a binario*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i,n,x=0;
	
	printf("Ingrese un numero \n");
	scanf("%d",&n);
	
	for(i=0;n>0;i++){
		if(n%2==1){
			x=x+1*pow(10,i);
		}
		n=n/2;
	}
	
	printf("Numero binario: %d \n",x);
	
	
}

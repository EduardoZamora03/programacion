#include <stdio.h>

int main(){
	int n,i, nb=sizeof(char)*6;
	
	printf("Ingresa un numero \n");
	scanf("%d",&n);
	
	for(i=nb-1;i>=0;i--){
		printf("%d",n>>i&1); // >> significa hacer un desplazamiento de bits
	}
	
	return 0;
}

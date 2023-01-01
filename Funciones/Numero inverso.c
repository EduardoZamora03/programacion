#include <stdio.h>

int inverso(int n);


int main(){
	int num;
	
	printf("Ingresa un numero \n");
	scanf("%d",&num);
	printf("El numero invertido es %d",inverso(num));
	
	
	
	
	return 0;
}
int inverso(int n){
/*	int m,d=0;
	while(n>0){
		m=n%10;
		n=n/10;
		d=d*10+m;	
		
	}
	return d;*/
	static int d;
	if(n==0)
		return d;
	else{
		d=d*10+(n%10);
		return inverso(n/10);
	}
}

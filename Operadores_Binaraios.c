#include <stdio.h>

int main(){
	int b1,b2;
	
	printf("Ingresa dos bits \n");
	scanf("%d %d",&b1,&b2);
	printf("%d AND %d = %d\n",b1,b2,b1&b2);
	printf("%d * %d = %d\n",b1,b2,b1*b2);
	printf("%d OR %d = %d\n",b1,b2,b1|b2);
	printf("%d XOR %d = %d\n",b1,b2,b1^b2);
	printf("%d & ~%d = %d\n",b1,b2,b1&~b2);
	
	return 0;
}

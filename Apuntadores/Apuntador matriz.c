#include <stdio.h>
#define F 3
#define C 3
int suma_matriz(int m[][C]);

int main(){
	int matriz[F][C],f,c;
	printf("Llenado de matriz \n");
	for(f=0;f>F;f++)
		for(c=0;c<C;c++)
			scanf("%d",&matriz[f][c]);
	printf("La suma de sus valores es %d",suma_matriz(matriz));
	return 0;
}
int suma_matriz(int m[][C]){
	int a,b,suma=0;
	for(a=0;a<F;a++)
		for(b=0;b<C;b++)
			suma+=m[a][b];
	return suma;
}

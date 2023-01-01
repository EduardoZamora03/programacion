#include <stdio.h>

#define F 3
#define C 3


int main(){
	int m[F][C],f,c,buscar,bandera=0,suma=0,sumafilas=0,fila;
	printf("LLenado de la matriz \n");
	
	for(f=0;f<F;f++)
		for(c=0;c<C;c++){
			printf("m[%d][%d]: ",f,c);
			scanf("%d",&m[f][c]);
			suma+=m[f][c];					//
		}
	
	printf("Ingresa el numero a buscar \n");
	scanf("%d",&buscar);
	printf("Ingresa la fila a suma \n");
	scanf("%d",&fila);
	putchar('\n');
	for(f=0;f<F;f++)
		for(c=0;c<C;c++)
		if(buscar==m[f][c]){
			printf("Posicion F=%d C=%d \n",f,c);
			//break;
			f=F;
			c=C;
			bandera=1;
		}
	for(c=0;c<C;c++)
		sumafilas+=m[fila][c];
	if(!bandera)									//!=Si no es bandera o si el numero es distinto a bandera
		printf("Numero no encontrado \n");
		printf("La suma de la matriz es %d \n",suma);	
		printf("La suma de la fila es %d \n",fila,sumafilas);	
	
	

	return 0;
}

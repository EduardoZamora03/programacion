#include <stdio.h>
#define T 20

int main(){
	int i=0, vocales=0;
	char n1[T];
	
	printf("Ingresa un nombre \n");
	scanf("%s",&n1);
	
	putchar('\n');		//Salto de linea
	
	printf("Salida utilizando printf %s \n",n1);
	printf("Imprimiendo caracter a caracter...\n");
	
	//while(n1[i]){
	for(i=0;n1[i];i++){		//En for se usa 3 condicionales
		
		putchar(n1[i]);
	//	if(n1[i]=='A'||n1[i]=='E'||n1[i]=='I'||n1[i]=='O'||n1[i]=='U'||n1[i]=='a'||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u');	Es una opcion
		switch(n1[i]){
			case 'A':
			case 'E':
			case 'I':
			case 'O':									
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': vocales++;
											
		}
			
		//i++;
	}

	putchar('\n');					//Salto de linea 

	printf("La cantidad de caracteres es %i \n",i);
	printf("La cantidad de vocales es %i \n",vocales);
		
	
	
	
	
	
	return 0;
}

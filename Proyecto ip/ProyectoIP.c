/* pedir direccion ip y mascara de red, esta se cambia a binario y regresar una direccion6*/

#include <stdio.h>      //Queda unir los numeros de la ip ingresados e imprimirlos en binarios, si sale esta ya sale lo de la mask que es lo mismo xd;
#include <stdlib.h>
#include <string.h>

void direccion_ip();
//void direccion_mask();

typedef struct{
    int i1;
    int i2;
    int i3;
    int i4;
}Datos_ip;

typedef struct{
    int m1;
    int m2;
    int m3;
    int m4;
}datos_mask;

    Datos_ip ip;
    datos_mask mask; 

int main(){
    int p;
    
    printf("Ingrese direccion ip \n");
    direccion_ip();
    

    /*printf("Ingrese mascara de red \n");
    direccion_mask();*/

    
    
    
    



    return 0;
}

void direccion_ip(){
    int i, x=0;
    printf("Ingrese ip 1: ");
    scanf("%d",&ip.i1);
    printf("Ingrese ip 2: ");
    scanf("%d",&ip.i2);
    printf("Ingrese ip 3: ");
    scanf("%d",&ip.i3);
    printf("Ingrese ip 4: ");
    scanf("%d",&ip.i4);

    /*printf("La direccion ip introducida es: ");
    strncat(ip.i1,".",ip.i2);
    printf("%d",ip.i1);*/

    printf("La direccion ip en binario es: \n");
    for(i=0;ip.i1>0;i++){
		if(ip.i1%2==1){
			x=x+1*pow(10,i);
		}
		ip.i1=ip.i1/2;
	}
    printf("%d\t",x);
    
    for(i=0;ip.i2>0;i++){
		if(ip.i2%2==1){
			x=x+1*pow(10,i);
		}
		ip.i2=ip.i2/2;
	}
    printf("%d\t",x);


}

/*void direccion_mask(){
    printf("Ingrese mask 1: ");
    scanf("%d",&mask.m1);
    printf("Ingrese mask 2: ");
    scanf("%d",&mask.m2);
    printf("Ingrese mask 3: ");
    scanf("%d",&mask.m3);
    printf("Ingrese mask 4: ");
    scanf("%d",&mask.m4);

  
}*/

/*Estas funciones las deveriamos ocupar en el proyecto de conversion ip a binario*/
#include <stdio.h>

int main(){
    int b1,b2;

    printf("Ingresa dos numeros binarios \n");
    scanf("%d %d",&b1,&b2);
    printf("AND binario %d \n",b1&b2);  
    printf("OR binario %d\n",b1|b2);    
    printf("OXR binario %d\n",b1^b2);

    return 0;
}
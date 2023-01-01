/*Suponer la siguiente declaracion int a=1  b=2, *p*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1,b=2, *ap;

    ap=&a;
    printf("Valor apuntado: %d \n",*ap);

    ap=&b;
    printf("Se actualiza el valor de b: %d \n",*ap);

    a=b;
    printf("Nuevo valor del apuntador es: %d \n",a);

}
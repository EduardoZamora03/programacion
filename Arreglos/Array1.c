/*Ejercicio 7 "aprendiendo c en 21 dias", pagina 187*/
#include <stdio.h>

int main(){
    int array[5][3];
    int a, b;

    for(a=0;a<=5;a++){
        for(b=0;b<=3;b++){
            printf("Impresion de valores: [%d][%d]\n",a,b);
        } 
    }
    return 0;
}
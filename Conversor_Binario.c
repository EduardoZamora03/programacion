#include <stdio.h>
#include <math.h>

int main(){
    int exp, dig,binario,decimal,digito;

    printf("Introduce un numero \n");
    scanf("%d",&binario);
    exp=0;
    decimal=0;

    while(binario/10!=0){
        digito=binario %10;
        decimal=decimal+digito*pow(2,exp);
        exp++;
        binario=binario/10;
    }
    decimal=decimal+binario*pow(2,exp);
    printf("%d",decimal);
}
//Impresion de codigo ascii
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *ap, c='x';
    ap=&c;

    printf("Codigo ASCII: %d \n",*ap);
    
    return 0;
}
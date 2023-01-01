    /*Apuntador con vectores*/
    #include <stdio.h>

    int main(){
        int a[10];
        int *ap;
        int i;
        
        ap=&a;

        for(i=0;i<10;i++){
            printf("%d \t",*(ap+1));
        }

        return 0;
    }
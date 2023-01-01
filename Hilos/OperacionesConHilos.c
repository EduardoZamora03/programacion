#include <stdio.h>
#include <pthread.h> //Libreria para el uso de los hilos
#include <math.h>
#define T 2

void *potencia(int *argv);
void *division(int *argv);

int main(){
    int i,v[T];
    pthread_t th1, th2;
    printf("Ingresa dos valores \n");
    scanf("%d %d",&v[0],&v[1]);
    pthread_create(&th1,NULL,potencia,&v);
    pthread_create(&th2,NULL,division,&v);
    pthread_join(th1,NULL);
    pthread_join(th2,NULL);

    return 0;
}

void *potencia(int *argv){
    int p;

    printf("Thread #%x\n",pthread_self());
    p=pow(argv[0],argv[1]);
    printf("Potencia: %d \n",p);
    pthread_exit(NULL);
}

void *division(int *argv){
    float d;
    printf("Thread #%x\n",pthread_self());
    if(argv[1]==0){
        printf("Division por cerro error\n");
    }else{
        d=(float)argv[0]/(float)argv[1];
        printf("Division: %.2f\n",d);
    }
    pthread_exit(NULL);
}
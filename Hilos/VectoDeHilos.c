#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define NT 5

void *saludo(void *threadid);

int  main(){
    pthread_t threads[NT];
    int rc;
    int t;

    for(t=0;t<NT;t++){
        printf("Creando Hilo %ld \n",t);
        pthread_create(&threads[t],NULL,saludo,(void *)t);
        sleep(1);
    }
    pthread_join(threads[t],NULL); 
    pthread_exit(NULL);
}

void *saludo(void *threadid){
    long tid;
    tid=(int)threadid;
    printf("Se esta ejecutando el hilo %d \n",tid);
    pthread_exit(NULL);
}
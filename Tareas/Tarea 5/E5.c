#include <stdio.h>
#include <stdlib.h>

void insertar();
void mostrar();
int menu();
void archivo();

typedef struct{
    char nombre[50];
    int edad;
    float estatura;
    float peso;
}datosP;

datosP datos;

int main(){
    
    int opc;
    
    do{
        system("cls");
        opc=menu();
        switch(opc){ 
            case 1:
                  insertar();
                 break;
            case 2:
                archivo();
                break;
            case 3:
                mostrar();
                break;

            case 0:
                printf("Saliendo...\n");
                break;
            default: printf("Opcion no valida \n");
        }
        system("PAUSE");
    }while(opc);
    return 0;
}

int menu(){
    int op;
    printf("[1] Insertar datos de la estructura \n");
    printf("[2] Crear archivo con nombre o agrega datos \n");
    printf("[3] Mostrar datos del archivo \n");
    printf("[0] Salir \n");
    printf("Opcion: ");
    scanf("%d",&op);
    return op;
}

void insertar(){
   
    printf("Ingrese su nombre \n");
    scanf("%s",&datos.nombre);
    printf("Ingrese su edad \n");
    scanf("%d",&datos.edad);
    printf("Ingrese su estatura \n" );
    scanf("%f",&datos.estatura);
    printf("Ingrese su peso \n");
    scanf("%f",&datos.peso);
}

void mostrar(){
    
    printf("Nombre: %s\n",datos.nombre);
    printf("Edad: %d\n",datos.edad);
    printf("Estatura: %.2f\n",datos.estatura);
    printf("Peso: %.1f\n",datos.peso);
}
void archivo(){
    FILE *arch;
    char nom[50];

    printf("Ingrese nombre del archivo \n");
    scanf("%s",&nom);
    strcat(nom,".txt");     //Esta funcion permite añadir un bloque de memoria a otro (juntarlos).
    arch=fopen(nom,"w+");
    if (arch==NULL)
        exit(1);
    fprintf(arch,"Nombre: %s\n",datos.nombre);
    fprintf(arch,"Edad: %d\n",datos.edad);
    fprintf(arch,"Estatura: %.2f\n",datos.estatura);
    fprintf(arch,"Peso: %.1f \n",datos.peso);
    fclose(arch);
    printf("ARCHIVO CREADO \n");

}


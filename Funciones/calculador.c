/*Ingresar dos números enteros y luego presentar el siguiente menú de opciones: suma,resta,multiplicacion,division*/
#include <stdio.h>
#include <stdlib.h>

void menu();
int suma(int s1, int s2);
int resta(int r1, int r2);
int multi(int m1, int m2);
float divi(int d1, int d2);


int main(){
    int n1,n2;
    int op;
    printf("Ingrese dos numeros \n");
    scanf("%d %d",&n1,&n2);

    menu();
    switch(op){
        case 1: printf("La sema de los numeros es: %d\n",suma(n1,n2));
        break;
        case 2: printf("La resta de los numeros es %d\n",resta(n1,n2));
        break;
        case 3: printf("La mulriplicacion de los numeros es: %d",multi(n1,n2));
        break;
        case 4: printf("La division de los numeros es: %.2f",divi(n1,n2));
        break;
        case 0: printf("Saliendo...");
        break;
        default: printf("Opcion no valida \n");
    }
    system("cls");
       
}
void menu(){
    printf("[1] Suma \n");
    printf("[2] Resta \n" );
    printf("[3] Multiplicacion \n");
    printf("[4] Division \n");
    printf("[0] salir \n");
    printf("Opcion: ");
}
int suma(int s1, int s2){
    int suma;
    suma=s1+s2;
    return suma;
}
int resta(int r1, int r2){
    int resta;
    resta=r1-r2;
    return resta;
}
int multi(int m1, int m2){
    int multi;
    multi=m1*m2;
    return multi;
}
float divi(int d1, int d2){
    float divi;
    divi=d1/d2;
    return divi;
}
/* 1) Declare una estructura para almacenar datos de estudiantes (nombre y dos notas correspondientes a los dos cuatrimestres del a?o).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus ex?menes. */

#include <stdio.h>


typedef struct{
    char nombre[30];
    int calificacion1;
    int calificacion2;
}datos;

int main(){
    datos alumno[5];
    int i,n=2;
    float promedio;

    for(i=0;i<n;i++){
    printf("Ingrese su nombre alumno %d\n",i+1);
    scanf("%s",alumno[i].nombre);
    printf("Ingrese primera calificacion \n");
    scanf("%d",&alumno[i].calificacion1);
    printf("Ingrese segunda calificacion \n");
    scanf("%d",&alumno[i].calificacion2);

    promedio=(alumno[i].calificacion1+alumno[i].calificacion2)/2;
    }
    for(i=0;i<n;i++){
    printf("Nombre: %s\n",alumno[i].nombre);
    printf("Calificaciones: %d-%d\n",alumno->calificacion1,alumno[i].calificacion2);
    printf("Promedio de calificaciones: %.2f\n",promedio);
    }

    return 0;
}
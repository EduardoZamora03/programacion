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
    datos alumno;
    int i;
    float promedio;

    
    
   
    printf("Ingrese su nombre alumno %d\n",i+1);
    scanf("%s",alumno.nombre);
    printf("Ingrese primera calificacion \n");
    scanf("%d",&alumno.calificacion1);
    printf("Ingrese segunda calificacion \n");
    scanf("%d",&alumno.calificacion2);

    promedio=(alumno.calificacion1+alumno.calificacion2)/2;
    
    printf("Nombre: %s",alumno.nombre);
    printf("Promedio: %.2f",promedio);



    return 0;
}

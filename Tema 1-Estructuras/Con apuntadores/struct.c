//Estructura que traiga matricula, nombre,apellido paterno,edad. practica examen
#include <stdio.h>

typedef struct{
    char matricula[11];
    char nombre[30];
    char apellidop[20];
    int edad;
}datos;

int main(){
    datos alumno[5],*palumnos;

    palumnos=&alumno;

    printf("Ingrese su matricula \n");
    scanf("%s",palumnos->matricula);
    printf("Ingrese su nombre \n");
    scanf("%s",palumnos->nombre);
    
    printf("Apellido paterno \n");
    scanf("%s",palumnos->apellidop);
    printf("Ingrese su edad \n");
    scanf("%d",&palumnos->edad);

    printf("Mostrando datos captados... \n");

    printf("Matricula: %s\n",alumno->matricula);
    printf("Nombre: %s\n",alumno->nombre);
    printf("Apellido paterno: %s\n",alumno->apellidop);
    printf("Edad: %d\n",alumno->edad);
    
    return 0;
    
}

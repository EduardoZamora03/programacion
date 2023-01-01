#include<stdio.h>		
#define T 2
void menu();					//Quiere decir que no va a ver ningun tipo de dato	se define la funcion prootipo
int menu2();
void insertar(int ii); 	
void busca(int b2, int i2);	
void modificar(int b3, int i3);			//Es argumento de funcion donde se requiere que se ponga algo
void mostrar(int i4);

typedef struct{
int dia,mes,anio;
}nacimiento;						//typedef sirve como para declarar varias variables en una misma o como para reservar el nombre para unas variables

typedef struct{
	char nombre[40];
	char apellidop[20];
	char apellidom[20];
	nacimiento fnacimiento;			// ahora "nacimiento" es una variable donde se declara el dia,mes,anio que se anoto arriba, ya no se usa el tipo de variable en este caso que era char
	int edad;
	char telefono[11];
	char direccion[100];
	int cp;
	char ciudad[50];
	char estado[30];
}datos;	

	datos personas[T];							//Se reserva el nombre de datos para definir las variables
	
int main(){
	
	int i=0,op,b,buscar;
	do{
		system("cls");
		//menu();
		op=menu2();		
		fflush(stdin);
		switch(op){
			case 1: if(i<T){
						insertar(i);			
						i++;
						printf("\n Resgistro guardado \n");
			}
			else
				printf("\n Vector de estructura lleno \n");
			system("PAUSE");
				break;
			case 2: printf("Ingresa el ID a buscar \n");
					scanf("%d",&b);
					fflush(stdin);
					busca(b,i);
					break;
			case 3: printf("Ingresa el ID a modificar \n");
					scanf("%d",&b);
					fflush(stdin);
					modificar(b,i);	
			break;
				
			case 4:
					mostrar(i);
					system("PAUSE");	
			break;
			
			case 0: printf("\n Saliendo.....\n");
			system("PAUSE");
			break;
			
			default: printf("Opcion no valida \n");
			system("PAUSE");
		}
	
		
	}while(op!=0);


	return 0;	
}

void menu(){			//Se va a definir lo que va hacer la funcion aqui no se usa ; se usa los {} 
		printf("-----------------Opciones del menu-----------------\n");
		printf("[1] Insertar datos de la estructura \n");
		printf("[2] Buscar elemento en la estructura \n");					
		printf("[3] Modificar datos de la estructura \n");
		printf("[4] Mostrar todos los elementos de la estructura \n");
		printf("[0] Salir \n");
}
int menu2(){			//Se va a definir lo que va hacer la funcion aqui no se usa ; se usa los {} 
		int op2;		//Se declara op aca ya que esta declarado en la funcion main y aqui se esta trabajando fuera de del main y le cambiamos nombre para no confundirse
		printf("-----------------Opciones del menu-----------------\n");
		printf("[1] Insertar datos de la estructura \n");
		printf("[2] Buscar elemento en la estructura \n");					
		printf("[3] Modificar datos de la estructura \n");
		printf("[4] Mostrar todos los elementos de la estructura \n");
		printf("[0] Salir \n");
		printf("Opcion: ");
		scanf("%d",&op2);
		return op2;
}
void insertar(int ii){
	printf("------------------Datos de persona %d---------------------------\n");
	printf("Ingresa nombre\n");
	gets(personas[ii].nombre);
	printf("Ingresa apellido paterno\n");
	fflush(stdin);
	scanf("%s",&personas[ii].apellidop);
	printf("Ingresa apellido materno\n");
	scanf("%s",&personas[ii].apellidom);
	printf("Fecha de nacimiento (dia/mes/anio) en formato numerico \n");
	scanf("%d%*c%d%*c%d%*c",&personas[ii].fnacimiento.dia,&personas[ii].fnacimiento.mes,&personas[ii].fnacimiento.anio);
	printf("Ingresa edad\n");
	scanf("%d",&personas[ii].edad);
	printf("Ingresa telefono a 10 digitos\n");
	scanf("%s",&personas[ii].telefono);
	printf("Ingresa direccion\n");
	fflush(stdin);
	gets(personas[ii].direccion);
	printf("Ingresa Codigo Postal\n");
	scanf("%d",&personas[ii].cp);
	printf("Ingresa ciudad\n");
	fflush(stdin);
	scanf("%s",&personas[ii].ciudad);
	printf("Ingresa estado\n");
	fflush(stdin);
	scanf("%s",&personas[ii].estado);
	fflush(stdin);	
	
}
void busca(int b2,int i2){
			if(b2<i2){
				printf("Nombre: %s\n",personas[b2].nombre);
				printf("Apellido paterno: %s\n",personas[b2].apellidop);
				printf("Apellido materno: %s\n",personas[b2].apellidom);
				printf("Fecha de nacimiento %d/%d/%d \n",personas[b2].fnacimiento.dia,personas[b2].fnacimiento.mes,personas[b2].fnacimiento.anio);
				printf("Edad: %i\n",personas[b2].edad);
				printf("Telefono: %s\n",personas[b2].telefono);
				printf("Direccion: %s\n",personas[b2].direccion);
				printf("Codigo Postal: %i\n",personas[b2].cp);
				printf("Ciudad: %s\n",personas[b2].ciudad);
				printf("Estado: %s\n",personas[b2].estado);
								
							}
						
						else
							printf("ID no existe \n");
							system("PAUSE");
}
void modificar(int b3, int i3){
		if(b3<i3){
								printf("Ingresa nombre: %s\n",personas[b3].nombre);
								gets(personas[b3].nombre);
								printf("Ingresa apellido paterno: %s\n",personas[b3].apellidop);
								fflush(stdin);
								scanf("%s",&personas[b3].apellidop);
								printf("Ingresa apellido materno: %s\n",personas[b3].apellidom);
								scanf("%s",&personas[b3].apellidom);
								printf("Fecha de nacimiento (%d/%d/%d) en formato numerico",personas[b3].fnacimiento.dia,personas[b3].fnacimiento.mes,personas[b3].fnacimiento.anio);
								scanf("%d%*c%d%*c%d%*c",&personas[b3].fnacimiento.dia,&personas[b3].fnacimiento.mes,&personas[b3].fnacimiento.anio);
								printf("Ingresa edad: &d\n",personas[b3].edad);
								scanf("%d",&personas[b3].edad);
								printf("Ingresa telefono a 10 digitos: %d\n",personas[b3].edad);
								scanf("%s",&personas[b3].telefono);
								printf("Ingresa direccion: %s\n",personas[b3].direccion);
								fflush(stdin);
								gets(personas[b3].direccion);
								printf("Ingresa Codigo Postal: %d\n",personas[b3].cp);
								scanf("%d",&personas[b3].cp);
								fflush(stdin);
								printf("Ingresa ciudad: %s\n",personas[b3].ciudad);
								fflush(stdin);
								scanf("%s",&personas[b3].ciudad);
								printf("Ingresa estado: %s\n",personas[b3].estado);
								fflush(stdin);
								scanf("%s",&personas[b3].estado);
								fflush(stdin);	
							}
						
						else
							printf("ID no existe \n");
							system("PAUSE");
					 
}
void mostrar(int i4){
	int b;
	for (b=0;b<i4;b++){
			printf("------------------Mostrando datos: persona %d---------------------------\n",i4);
			printf("Nombre: %s\n",personas[b].nombre);
			printf("Apellido paterno: %s\n",personas[b].apellidop);
			printf("Apellido materno: %s\n",personas[b].apellidom);
			printf("Fecha de nacimiento: %d/%d/%d \n",personas[b].fnacimiento.dia,personas[b].fnacimiento.mes,personas[b].fnacimiento.anio);
			printf("Edad: %i\n",personas[b].edad);
			printf("Telefono: %s\n",personas[b].telefono);
			printf("Direccion: %s\n",personas[b].direccion);
			printf("Codigo Postal: %i\n",personas[b].cp);
			printf("Ciudad: %s\n",personas[b].ciudad);
			printf("Estado: %s\n",personas[b].estado);
				}
}

 

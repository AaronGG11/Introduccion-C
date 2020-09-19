// MI PRIMERA ESTRUCTURA

#include<stdio.h>

struct persona{
	char nombre[20];
	char apellido[20];
	int edad;
	char sexo[12];
};

int main(){
	struct persona persona1, persona2;

	printf("Teclea el nombre de la persona 1: ");
	persona1.nombre=getchar();

	printf("%s\n",persona1.nombre);



	return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){
	
	int edad;
	char nombre[20], sexo[12];

	printf("¿Como te llamas?: ");
	scanf("%s",nombre); 
	fflush(stdin);
	printf("¿Eres un hombre o una mujer?: ");
	scanf("%s",sexo);   
	fflush(stdin);
	printf("¿Que edad tienes?: ");
	scanf("%i",&edad); 
	fflush(stdin);
	system("clear");

	if((strcmp(sexo,"hombre")==0) && (edad>=18)){
		printf("Tu nombre es: %s\n",nombre);
	}
	else{
		printf("No cumples con los requisitos\n");
	}
	return 0;
}
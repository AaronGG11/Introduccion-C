// PROGRAMA QUE: HACER DOS ARRAYS DE CADENAS DE CARACTERES, PEDIR DOS NOMBRES Y ALMACENARLOS 
//  EN CADA UNO RESPECTIVAMENTE Y LUEGO INTERCAMBIAR EL CONTENIDO DE LOS ARRAYS

#include<stdio.h>
#include<string.h>
	
#define TAM 20

int main(){
		char arreglo1[TAM], arreglo2[TAM],arreglo3[TAM];
		printf("Teclea tu nombre: ");	gets(arreglo1);
		printf("Teclea tu apellido: "); gets(arreglo2);
		strcpy(arreglo3,arreglo1);
		strcpy(arreglo1,arreglo2);
		strcpy(arreglo2,arreglo3);

		printf("Tu nombres es: %s %s\n",arreglo1, arreglo2);

	return 0;
}





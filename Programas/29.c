// PROGRAMA QUE: HACER DOS ARRAYS DE CADENAS DE CARACTERES, PEDIR EL NOMBRE AL USUARIO Y GUARDARLO EN UN ARRAY Y LUEGO 
//  COPIAR EL CONTENIDO DE ESE ARRAY EN EL OTRO

#include<stdio.h>
#include<string.h>
	
#define TAM 20

int main(){
		char arreglo1[TAM], arreglo2[TAM];
		printf("Teclea tu nombre: ");	gets(arreglo1);
		strcpy(arreglo2,arreglo1);
		printf("%s\n",arreglo2);

	return 0;
}















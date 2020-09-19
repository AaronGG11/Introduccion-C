//REALIZAR UN PROGRAMA CON EL BUCLE DO WHILE PARA IMPRIMIR LAS LETRAS MINUSCULAS Y MAYUSCULAS DEL ALFABETO

#include<stdio.h>



int main(){
	char letra='a';   //UN TIPO DE VALOR CHAR ALMACENA SU VALOR EN CARACTER ASCII, ES EQUIVALENTE A 61 EXADECIMAL
	char cd='A';
	do{
		printf("\n%c %c",letra,cd);
		letra++;
		cd++;
	}while(letra<='z' && cd<='Z');
	printf("\n");

	return 0;
}
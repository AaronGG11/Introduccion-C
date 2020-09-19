#include<stdio.h>


int main(){
	int numero;
	printf("Teclea un numero: ");   scanf("%i",&numero);

	(numero%2==0)? printf("El numero %d es par\n",numero) : printf("El numero %d es impar\n",numero); 


	return 0;
}
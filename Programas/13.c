#include<stdio.h>

//MOSTRAR LOS NUMEROS CONSECUTIVOS HASTA N NUMERO ASCENDENTE

int main(){

		int numero,numeroa;

		printf("Teclea un numero: ");  scanf("%i",&numero);
		numeroa=numero;

		for(int contador=1;contador<=numero;contador++){
			printf("%i\n",contador);
		}

	return 0;
}
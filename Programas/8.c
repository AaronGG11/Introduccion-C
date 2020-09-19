// IMPRIMIR NUMEROS HASTA EL NUMERO DESEADO 

#include<stdio.h>



int main(){

	int numero,contador=1;
	printf("Teclea un numero: ");    scanf("%i",&numero);

	//FORMA ASCENDNENTE
	while(contador<=numero){
		printf("%d ",contador);
		contador++;
	}
	/*
	while(contador<=numero){
		printf("%d ",numero);
		numero--;
	}
	*/
	printf("\n");

	return 0;
}

//PROGRAMA QUE REALICE LA SUCESION DE FIBONACCI

#include<stdio.h>

int fibonacci(int);

int main(){
	int numero;

	printf("Teclea un numero: ");   scanf("%d",&numero);

	printf("El fibonacci de %d es %d\n",numero,fibonacci(numero));

	return 0;
}

int fibonacci(int numero){
	if(numero==0){
		return 0;
	}
	else if(numero==1){
		return 1;
	}
	else{
		return fibonacci(numero-1)+fibonacci(numero-2);
	}
}
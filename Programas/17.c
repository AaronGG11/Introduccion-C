//FACTORIAL DE UN NUMERO; la primera es recursiva y la segunda que esta como comentario solo se pone dentro del main 

#include<stdio.h>

long double factorial(int);

int main(){
	int numero;

	printf("Teclea un numero: ");   scanf("%d",&numero);

	printf("El factorial del numero %d es %.Lf\n",numero,factorial(numero));

	return 0;
}

long double factorial(numero){
	if(numero<=1){
		return 1;
	}
	else
		return (numero*factorial(numero-1));
}



/*
int numero,factorial=1;

	printf("Teclea un numero: ");   scanf("%d",&numero);

	for(int i=1;i<=numero;i++){
		factorial*=i;
	}
	printf("El factorial del numero %d es %d\n",numero,factorial);
	*/
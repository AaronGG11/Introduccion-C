// NUMEROS ALEATORIOS, NECESITA DE LA LIBRERIA DE STDLIB.H

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void funcion_aleatoria();

int main(){
	
	funcion_aleatoria();

	return 0;
}

void funcion_aleatoria(){
	int numero,contador,total,inicio,fin;

	printf("Teclea cuantos numeros quieres visualizar: "); scanf("%d",&total);
	printf("Teclea el limete inferior y superior: ");      scanf("%d %d",&inicio,&fin);

	srand(time(NULL));

	for(contador=1;contador<=total;contador++){
		numero= inicio + rand()%((fin+1)-inicio);
		printf("[%d]. %d\n",contador,numero);
	}
}
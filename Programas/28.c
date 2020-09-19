// PROGRAMA QUE TENGA UN ARREGLO DE 100 NUMEROS ALETAORIOS ENTRE 1 Y 1000, YA CREADO LO ANTERIOR, 
//  ORGANIZARLO DE TAL MANERA QUE ALMACENE LOS NUMEROS PARES EN UN ARRAY Y LOS IMPARES EN OTRO ARRAY.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void llena_arreglo_aleatorio(int original[]);
void par(int n[],int m[]);
void imp(int n[], int k[]);

int main(){
	int original[100],pares[100],impares[100];
	llena_arreglo_aleatorio(original);
	par(original,pares);
	imp(original,impares);

	return 0;
}




void llena_arreglo_aleatorio(int n[]){

	int i;
	printf("Generando numeros aletarios del arreglo...........\n");

	srand(time(NULL));
	for(i=0;i<100;i++){
		n[i] = 1 +rand()%((1000 + 1)-1);
		printf("[%d] - %d\n",i,n[i]);
	}
}

void par(int n[],int m[]){
	int i;
	printf("\tNumeros pares del arreglo aleatorio:\n");

	for(i=0;i<100;i++){
		if(n[i]%2==0){
			m[i] = n[i];
			printf("[%d] - %d\n",i,m[i]);
		}
	}
}

void imp(int n[], int k[]){
	int i;

	printf("\n");
	printf("\tNumeros impares del arreglo aleatorio:\n");
	
	for(i=0;i<100;i++){
		if(n[i]%2!=0){
			k[i] = n[i];
			printf("[%d] - %d\n",i,k[i]);
		}
	}
}

// INTENTO DE ORDENAMIENTO POR INSERCION

#include<stdio.h>



int main(){
	int x;
	printf("Teclea el tamaño del arreglo: ");	scanf("%d",&x);

	int arreglo[x];
	for(int k=0; k<x; k++){
		printf("Teclea el elemento %d del arreglo: ",k+1);
		scanf("%d",&arreglo[k]);
	}

	printf("\n\t Ordenando el arreglo ..........\n\n");

	int i, poscion, auxiliar;

	for(i=0; i<x; i++){
		poscion = i;
		auxiliar = arreglo[i];

		while((poscion>0)&&(auxiliar<arreglo[poscion-1])){
			arreglo[poscion] = arreglo[poscion-1];
			poscion--;
		}
		arreglo[poscion] = auxiliar;
	}

	for(int k=0; k<x; k++){
		printf("%d\n",arreglo[k]);
	}

	return 0;
}
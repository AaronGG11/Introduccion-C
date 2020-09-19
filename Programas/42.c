// INTNETO DE ORDENA BURBUJA E INSERCION POR FUNCIONES

#include<stdio.h>



int main(){
	int x;
	printf("Teclea el tamaño del arreglo: ");	scanf("%d",&x);

	int arreglo[x];

	for(int k=0; k<x; k++){
		printf("Teclea el elemento %d del arreglo: ",k+1);		scanf("%d",&arreglo[k]);
	}

	int i, auxiliar, posicion;

	for(int i=0; i<x; i++){
		posicion = i;
		auxiliar = arreglo[i];

		while((posicion>0)&&(auxiliar<arreglo[posicion-1])){
			arreglo[posicion] = arreglo[posicion-1];
			posicion--;
		}
		arreglo[posicion] = auxiliar;
	}


	printf("\n\nARREGLO ORDENADO: \n");

	for(i=0; i<x; i++){
		printf("%d\n",arreglo[i]);
	}


	return 0;
}

void ordenamiento_burbuja(int x, int a[]){
	int auxiliar;

		for(i=0; i<x; i++){
		for(j=0; j<x; j++){
			if(arreglo[j]>arreglo[j+1]){
				auxiliar = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = auxiliar; 
			}
		}
	}
}

void ordenamiento_insercion(){
		for(int i=0; i<x; i++){
		posicion = i;
		auxiliar = arreglo[i];

		while((posicion>0)&&(auxiliar<arreglo[posicion-1])){
			arreglo[posicion] = arreglo[posicion-1];
			posicion--;
		}
		arreglo[posicion] = auxiliar;
	}
}
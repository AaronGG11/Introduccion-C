// ORDENAMIENTO POR INSERCION

#include<stdio.h>



int main(){
	int x;
	printf("Teclea el tamaño del arreglo: ");	scanf("%d",&x);

	int arreglo[x];

	for(int k=0; k<x; k++){
		printf("Teclea el elemento %d del arreglo: ",k+1);
		scanf("%d",&arreglo[k]);
	}	

	int i, posicion, auxiliar;

	for(int i=0; i<x; i++){
		posicion = i;
		auxiliar = arreglo[i];

		while((posicion>0)&&(auxiliar<arreglo[posicion-1])){
			arreglo[posicion] = arreglo[posicion-1];
			posicion--;
		}
		arreglo[posicion] = auxiliar;
	}

	printf("ASCENDENTE\n");

	for(i=0; i<x; i++){
		printf("%d\n",arreglo[i]);
	}

	printf("\n\nDESCENDENTE\n");

	for(i=(x-1); i>=0; i--){
		printf("%d\n",arreglo[i]);
	}

	return 0;
}
// PROGRAMA QUE ORDENE POR SELECCION

#include<stdio.h>



int main(){
	int x;
	printf("Teclea el tamaño del arreglo: ");	scanf("%d",&x);

	int arreglo[x];
	for(int k=0; k<x; k++){
		printf("Teclea el elemento %d del arreglo: ",k);	scanf("%d",arreglo[k]);
	}

	int i,j,auxiliar,minimo;
	minimo = i;
	for(i=0; i<x; i++){
		for(j=i+1; j<=5; j++){
			if(arreglo[j]<arreglo[minimo]){
				minimo = j;				
			}
		}
		auxiliar = arreglo[i];
		arreglo[i] = arreglo[minimo];
		arreglo[minimo] = auxiliar;
	}


	return 0;
}
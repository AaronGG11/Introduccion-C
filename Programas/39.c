// ORDENAMIENTO POR METODO BURBUJA

#include<stdio.h>



int main(){
	int x;
	printf("Teclee el numero de elementos del arreglo: ");	scanf("%d",&x);

	int arreglo[x];

	for(int k=0;k<x;k++){
		printf("Teclea el elementos [%d]: ",k);		scanf("%d",&arreglo[k]);
	}

	int i,j,auxiliar=0;

	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(arreglo[j]>arreglo[j+1]){
				auxiliar = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = auxiliar;
			}
		}
	}

	for(i=0;i<x;i++){
		printf("%d\n",arreglo[i]);
	}	

	


	return 0;
}
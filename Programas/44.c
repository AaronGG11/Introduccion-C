// BUSQUEDA SECUENCIAL 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	int x, minimo, maximo, i, numero;
	char dato = 'F';
	printf("Teclea el tamaño del arreglo: ");	scanf("%d",&x);

	int arreglo[x];

	printf("Teclea el minimo y maximo aleatorio: ");	scanf("%d%d",&minimo, &maximo);

	srand(time(NULL));
	for(int k=0; k<x; k++){
		arreglo[k] = minimo + rand()%((maximo+1)-minimo);
		printf("%d\n",arreglo[k]);
	}

	printf("Teclea el numero a buscar: ");	scanf("%d",&numero);
	i=0;
	while((dato == 'F') && (i<x)){
		if(arreglo[i] == numero){
			dato = 'V';
		}
		i++;
	}

	if(dato=='F'){
		printf("El numero %d no ha sido encontrado en el arreglo\n", numero);
	}
	else if(dato == 'V'){
		printf("El numero %d ha sido encontrado en el arreglo en la posicion %d\n", numero, i-1);
	}
	else{
		printf("ERROR\n");
	}




	return 0;
}
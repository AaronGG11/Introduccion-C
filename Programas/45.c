// BUSQUEDA BINARIA O DICOTOMICA
// PARA ESTE TIPO DE BUSQUEDA, EL ARREGLO TIENE QUE ESTAR ORDENADO
// QUE HACE?
//	1. PIDE TAMAÑO DEL ARREGLO
//	2. PIDE EL MINIMO Y MAXIMO DE NUMEROS ALEATOIOS POSIBLES DEL ARREGLO Y LO LLENA CON ESTOS
//	3. ORDENA EL ARREGLO MEDIANTE EL METODO DE INSERSION
//	4. IMPRIME EL ARREGLO ORDENADO
//	5. PIDE EL NUMERO A BUSCAR DENTRO DEL ARREGLO
//  6. IMPRIME SI ENCONTRO Y EN QUE POSICION O SI NO FUE ENCONTRADO EL NUMERO SELECCIONADO 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int x;
	printf("Teclea el tamaño del arreglo: ");	scanf("%d",&x);

	int arreglo[x];
	int minimo, maximo, inferior, superior, mitad, dato, i;
	char bandera = 'F';

	printf("Teclea el minimo y maximo del arreglo: ");	scanf("%d%d",&minimo,&maximo);

	srand(time(NULL));
	for(i=0; i<x; i++){
		arreglo[i] = minimo + rand()%((maximo+1)-minimo);
		// printf("%d\n",arreglo[i]);
	}

	// ORDENAR EL ARREGLO POR MEODO DE INSERSION
	int k, posicion, auxiliar;

	for(k=0; k<x; k++){
		posicion = k;
		auxiliar = arreglo[k];

		while((posicion > 0) && (auxiliar < arreglo[posicion-1])){
			arreglo[posicion] = arreglo[posicion-1];
			posicion--;
		}
		arreglo[posicion] = auxiliar;
	}

	for (int m=0; m<x; m++){
		printf("%d\n",arreglo[m]);
	}

	printf("\nTecle el numero a buscar: ");	scanf("%d", &dato);

	inferior = 0;
	superior = x;

	while(inferior <= superior){
		fflush(stdin);
		mitad = (inferior + superior)/2;

		if(arreglo[mitad] == dato){
			bandera = 'V';
			break;
		}
		else if(arreglo[mitad] > dato){
			superior = mitad;
			mitad = (inferior + superior)/2;
		}
		else if(arreglo[mitad] < dato){
			inferior = mitad;
			mitad = (inferior+superior)/2;
		}
	}

	if(bandera == 'F'){
		printf("El numero %d no ha sido encontrado en el arreglo\n", dato);
	}
	else if(bandera == 'V'){
		printf("El numero %d ha sido encontrado en el arreglo en la posicion %d\n", dato, mitad);
	}

	return 0;
}
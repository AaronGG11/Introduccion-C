// PROGRAMA QUE SUME DOS MATRICES
// LOS NUMEROS A SUMAR, SERAN ALEATORIOS 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void sumar(int x, int y,int a[][10],int b[][10]);

int main(){
	int x,y,filas,columnas;

	printf("Teclea filas y columnas de la matriz: ");	scanf("%d%d",&x,&y);

	int matriz1[x][y], matriz2[x][y];
	int inicio, fin;

	printf("Tecle el rango de numeros (ejemplo: 1 100): ");	scanf("%d%d",&inicio,&fin);
	printf("\tGenerando numeros aleatorios en la matriz 1.......\n");

	srand(time(NULL));

		for(filas=0;filas<x;filas++){
		for(columnas=0;columnas<y;columnas++){
			matriz1[filas][columnas]= inicio +rand()%((fin+1)-inicio);//
			printf("%d ",matriz1[filas][columnas]);
		}
		printf("\n");
	}

	printf("\n\n");

	printf("\tGenerando numeros aleatorios en la matriz 2.......\n");

		for(filas=0;filas<x;filas++){
		for(columnas=0;columnas<y;columnas++){
			matriz2[filas][columnas]= inicio +rand()%((fin+1)-inicio);//
			printf("%d ",matriz2[filas][columnas]);
		}
		printf("\n");
	}

	printf("\n\n");

	sumar(x,y,matriz1,matriz2);

	return 0;
}

void sumar(int x, int y,int a[][x],int b[][y]){
	int adicon[x][y];
	int i,j;

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			adicon[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d ",adicon[i][j]);
		}
		printf("\n");
	}
}





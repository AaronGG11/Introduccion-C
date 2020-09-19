// SUMA DE MATRICES DE N X N

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void llena_mat_aleatoria(int x, int y, int a[][10]);
void imprime_mat_aleatoria(int x, int y, int a[][10]);
void suma_mat_aleatorias(int x, int y, int a[x][y],int b[x][y]);

int main(){
	int x,y;

	printf("Teclea el valor de las filas y columnas de la matriz (ejemplo: 3 5): ");	scanf("%d%d",&x,&y);

	int matriz1[x][y];
	int matriz2[x][y];

	llena_mat_aleatoria(x,y,matriz1);
	imprime_mat_aleatoria(x,y,matriz1);
		printf("\n\n");
	llena_mat_aleatoria(x,y,matriz2);
	imprime_mat_aleatoria(x,y,matriz2);
		printf("\n\n");
	suma_mat_aleatorias(x,y,matriz1,matriz2);

	return 0;
}

void llena_mat_aleatoria(int x, int y, int a[x][y]){
	srand(time(NULL));

	int inicio,fin;
	printf("Teclea el limite inferior y superior (ejemplo: 4 9): ");	scanf("%d%d",&inicio,&fin);

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			a[i][j] = inicio + rand()%((fin+1)-inicio);
		}
	}
}

void imprime_mat_aleatoria(int x, int y, int a[x][y]){

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void suma_mat_aleatorias(int x, int y, int a[x][y],int b[x][y]){
	int mat_suma[x][y];

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			mat_suma[i][j] = a[i][j] + b[i][j];
		}
	}
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			printf("%d ",mat_suma[i][j]);
		}
		printf("\n");
	}
}









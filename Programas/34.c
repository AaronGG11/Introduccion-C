// PROGRAMA QUE PIDA EL NUMERO DE N FILAS Y N COLUMNAS, LUEGO MEDIANTE FUNCIONES, RELLENE LA MATRIZ POR TECLADO 

#include<stdio.h>

void llenar   (int matriz[][10],int,int);
void imprimir (int matriz[][10],int,int);

int main(){
	int x,y;	

	printf("Numero de filas de la matriz: ");	scanf("%d",&x);
	printf("Numero de columnas de la matriz: ");	scanf("%d",&y);

	int matriz[x][y];

	llenar(matriz,x,y);
	imprimir(matriz,x,y);

	return 0;
}

void llenar(int matriz[][10],int x,int y){

	int filas,columnas;

	for(filas=0;filas<x;filas++){
		for(columnas=0;columnas<y;columnas++){
			printf("[%d,%d]: ",filas,columnas);
			scanf("%d",&matriz[filas][columnas]);
		}
	}
}

void imprimir(int matriz[][10],int x,int y){

	int filas,columnas;

	for(filas=0;filas<x;filas++){
		for(columnas=0;columnas<y;columnas++){
			printf("%d ",matriz[filas][columnas]);
		}
		printf("\n");
	}
}



/*
#include<stdio.h>



int main(){
	int x,y,filas,columnas;

	printf("Numero de filas de la matriz: ");	scanf("%d",&x);
	printf("Numero de columnas de la matriz: ");	scanf("%d",&y);

	int matriz[x][y];

	for(filas=0;filas<x;filas++){
		for(columnas=0;columnas<y;columnas++){
			printf("[%d,%d]: ",filas,columnas);
			scanf("%d",&matriz[filas][columnas]);
		}
	}

	for(filas=0;filas<x;filas++){
		for(columnas=0;columnas<y;columnas++){
			printf("%d ",matriz[filas][columnas]);
		}
		printf("\n");
	}

	return 0;
}
*/

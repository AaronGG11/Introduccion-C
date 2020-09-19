// PROGRAMA QUE LLENA UNA MATRIZ DE 3X3 DE 0'S 

#include<stdio.h>



int main(){
	int matriz[3][3];
	int filas,columnas;

	printf("LLenado de la matriz\n");
	for(filas=0;filas<3;filas++){
		for(columnas=0;columnas<3;columnas++){
			matriz[filas][columnas] = 0;
			//scanf("%d",&matriz[filas][columnas]);
		}
	}

	printf("MATRIZ\n");
	for(filas=0;filas<3;filas++){
		for(columnas=0;columnas<3;columnas++){
			printf("%d ",matriz[filas][columnas]);
		}
		printf("\n");
	}



	return 0;
}
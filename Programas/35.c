// PROGRAMA QUE PIDE N FILAS Y N COLUMNAS DE UNA MATRIZ, LUEGO LLENA TODA LA MATRIZ CON UN NUMERO INGRESADO Y FINALMENTE A IMPRIME

#include<stdio.h>

void llena_matriz(int n[][10],int k,int m);
void imp_matriz(int n[][10],int k,int m);

int main(){
	int x,y;

	printf("Teclea el numero de filas de la matriz: ");		scanf("%d",&x);
	printf("Teclea el numero de columnas de la matriz: ");		scanf("%d",&y);

	int matriz[x][y];

	llena_matriz(matriz,x,y);
	imp_matriz(matriz,x,y);

	return 0;
}

void llena_matriz(int n[][10],int k,int m){
	int numero;
	printf("Numero a llenar la matriz: ");	scanf("%d",&numero);

	for(int i=0;i<k;i++){
		for(int j=0;j<m;j++){
			n[i][j]=numero;
		}
	}
}

void imp_matriz(int n[][10],int k,int m){
	for(int i=0;i<k;i++){
		for(int j=0;j<m;j++){
			printf("%d ",n[i][j]);
		}
		printf("\n");
	}
}
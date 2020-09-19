// PROGRAMA QUE COPIE UNA MATRIZ EN OTRA  DE 2*2

#include<stdio.h>



int main(){
		
	int matriz1[2][2];
	int matriz2[2][2];

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("[%d,%d]: ",i,j);
			scanf("%d",&matriz1[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%d ",matriz1[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matriz2[i][j]=matriz1[i][j];
			printf("%d ",matriz2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
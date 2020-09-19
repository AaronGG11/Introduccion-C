//PROGRAMA QUE SUME creee un arbol de * con el tanto de filas

#include<stdio.h>



int main(){

	int altura,inicio;

	printf("Teclea la altura de ");  scanf("%d",&altura);

	for(int contador=1;contador<=altura;contador++){
		for(inicio=1;inicio<=altura-contador;inicio++){
			printf(" ");
		}
		for(inicio=1;inicio<=(2*contador)-1;inicio++){
			printf("*");
		}






		printf("\n");
	}


	return 0;
}



/*
	int i,j,n;

	printf("Teclea la altura de la piramide: ");  scanf("%i",&n);

	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=(2*i)-1;j++)
			printf("*");

		printf("\n");
	}
	*/
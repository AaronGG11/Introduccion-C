// CONSIDERAR UNA FUNCION RECURSIVA QUE RECIBE UN NUMERO N E IMPRIMIE LOS NUMEROS DE N AL 1 CON RECURSIVIDAD

#include<stdio.h>

int funcion(int numero);

int main(){
	int numero;

	printf("Teclea un numero: ");	scanf("%d",&numero);

	funcion(numero);
	printf("\n");

	return 0;
}

int funcion(int numero){
	if(numero == 0 || numero == 1){
		printf("%d ",numero);
		return numero;
	}
	else if(numero<0){
			printf("%d ",numero);
		return funcion(numero+1);
	}
	else{
		printf("%d ",numero);
		return funcion(numero-1);
	}

}
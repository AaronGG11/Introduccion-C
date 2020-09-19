//REALIZAR UN PROGRAMA: QUE INDIQUE SI UN NUMERO ES PAR PERO CON FUNCION O PROCEDIMIENTO

#include<stdio.h>

int comprobar_par(int);


int main(){
	int numero;

	printf("Teclea un numero: ");	scanf("%d",&numero);
	if(comprobar_par(numero)==0){
		printf("El numero %d es PAR\n",numero);
	}
	else{
		printf("El numero %d es IMPAR\n",numero);
	}


	return 0;
}

int comprobar_par(int valor){
	if(valor%2==0){
		return 0;
	}
	else
		return 1;
}
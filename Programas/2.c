// PROGRAMA 2 ATS: DETERMINAR SI UN NUMERO ES PAR O IMPAR

#include<stdio.h>


int main(){
	int numero;

	printf("Teclea un numero:  ");   scanf("%i",&numero);
	if(numero % 2 == 0){
		printf("El numero %i es par\n",numero);
	}
	else{
		printf("El numero %i es impar\n",numero);
	}





	return 0;
}
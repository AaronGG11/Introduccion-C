//DETERMINAR SI UN NUMERO ES PRIMO O NO

#include<stdio.h>


int main(){
	int numero,contador=0;

	printf("Teclea un numero: ");   scanf("%d",&numero);

	for(int i=1;i<=numero;i++){
		if(numero%i==0){
			contador++;
		}
	}

	if(contador>2){
		printf("El numero %d es compuesto\n",numero);
	}
	else{
		printf("El numero %d es primo\n",numero);
	}


	return 0;
}
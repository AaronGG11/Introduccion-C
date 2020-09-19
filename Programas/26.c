// PASAR DE NUMERO ENTERO A NUMERO BINARIO CON RECURSIVIDAD

#include<stdio.h>

void binario(int);

int main(){
	int numero;
		
	do{
		printf("Teclea un numero: ");	scanf("%d",&numero);
	}while(numero<0);

	binario(numero);
	printf("\n");


	return 0;
}

void binario(int n){
	if(n>1)
		binario(n/2);
	printf("%d",n%2);
}

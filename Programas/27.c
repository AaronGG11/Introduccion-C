// PROGRAMA QUE PIDA UN NUMERO E INVIERTA EL ORDEN MEDIANTE UNA FUNCON RECURSIVA

#include<stdio.h>

void fun_invertir(int);

int main(){
	int numero;

	printf("Teclea una numero: ");	scanf("%d",&numero);
	printf("%d -- ",numero);

	fun_invertir(numero);

	printf("\n");

	getchar();
	getchar();
	return 0;
}

void fun_invertir(int n){
	printf("%d",n%10);
	if(n>10) fun_invertir(n/10);
}
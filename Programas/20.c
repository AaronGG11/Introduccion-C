//REALIZAR UN PROGRAMA: EN EL UNA FUNCION VOID SALUDE Y OTRA FUNCION INT SUME DOS NUMEROS

#include<stdio.h>

void saludo();
int sumar(int,int);


int main(){
	int a,b;
	printf("Teclea dos numeros: ");   scanf("%d%d",&a,&b);
	saludo();

	printf("La suma de %d y %d es %d\n",a,b,sumar(a,b));

	return 0;
}

void saludo(){
	printf("Hola mundo\n");
}

int sumar(int n1,int n2){ // LOS PARAMETROS NO TIENEN QUE NOMBARSE LA MISMA MANERA, SOLO IMPORTA EL VALOR
	return n1+n2;
}  
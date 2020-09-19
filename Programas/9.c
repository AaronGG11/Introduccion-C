#include<stdio.h>

//IMPRIME LA SUMA DE LOS NUMEROS CONSECUTIVOS HASTA EL NUMERO DESAEADO
//IMPRIME LA MULTIPLICACION DE LOS NUMEROS CONSECUTIVOS HASTA EL NUMERO DESEADO

int main(){
	int numero,contador=0,final=0,producto=1,contador1=1;

	printf("Teclea un numero: ");   scanf("%i",&numero);

	while(contador<=numero){
		final=final+contador;
		contador++;
	}
	while(contador1<=numero){
		producto*=contador1;
		contador1++;
	}


	printf("%i\n",final);
	printf("%i\n",producto);


	return 0;
}
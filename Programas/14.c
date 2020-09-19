//PROGRAMA QUE SUME LOS NUMEROS PARES CON FOR

#include<stdio.h>



int main(){
	int numero,suma=0;

	printf("Teclea un numero: ");  scanf("%i",&numero);

	for(int i=0;i<=numero;i++){
		if(i%2==0){
			suma+=i;
		}
	}
	printf("La suma de los %i primeros numeros pares es: %i\n\n",numero,suma);

	return 0;
}
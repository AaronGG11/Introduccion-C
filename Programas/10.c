//MULTIPLOS DE 3 y DE 5 DESDE 1 HASTA N

#include<stdio.h>



int main(){

	int numero,contador=1;

	printf("Teclea un numero: ");   scanf("%i",&numero);

	while(contador<=numero){
		if((contador%3==0)){
			printf("%i\n",contador);
		}
		if((contador%5==0)){
			printf("%i\n",contador);
		}
			contador++;
	}
	printf("\n");	

	return 0;
}
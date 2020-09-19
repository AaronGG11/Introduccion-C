//PROGRAMA QUE SUME 1-2+3-4.......n
//Divide y venceras
//impares (+)
//pares (-)

#include<stdio.h>



int main(){

	int numero,contador=0,sumaa=0,sumab=0,sumaf=0;

	printf("Teclea un numero\n");   scanf("%i",&numero);
	while(contador<=numero){
		if(contador%2==0){
			sumaa+= contador*(-1);
		}
		else{
			sumab+= contador;
		}
		contador++;
	}
	sumaf= sumaa + sumab;
	printf("%i\n",sumaf);


	return 0;
}
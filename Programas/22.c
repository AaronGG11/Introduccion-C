//REALIZAR UN PROGRAMA: QUE REALICE LA MEDIA ARITMETICA DE NUMEROS N

#include<stdio.h>




int main(){
	int numero=1,contador=1,suma=0;

	while(numero!=0){
	printf("[%d]. Teclea un numero: ",contador); scanf("%d",&numero);
	suma+=numero;
	contador++;
	}	
	printf("La media aritmetica de %d numeros es %.2f\n",contador-2,(float) suma/(contador-2));


	return 0;
}

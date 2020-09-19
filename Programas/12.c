//SUMAR LOS NUMEROS PARES DESDE N HASTA M

#include<stdio.h>



int main(){
	
	int desde,hasta,suma=0;
	printf("Teclea desde que numero y hasta que numero: ");	scanf("%i%i",&desde,&hasta);

	while(desde<=hasta){
		if(desde%2==0){
			suma+=desde;
		}
		desde++;
	}

	printf("%i\n",suma);

	return 0;
}
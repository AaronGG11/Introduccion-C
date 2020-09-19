#include<stdio.h>


int main(){
	int a,b;

	printf("Telcea dos numeros\n");
	scanf("%d%d",&a,&b);

	printf("Suma de %d y %d  es: %d\n",a,b,a+b);
	printf("Resta de %d y %d es: %d\n",a,b,a-b);
	printf("Producto de %d y %d es: %d\n",a,b,a*b);
	printf("Cociente de %d y %d es: %.1f\n",a,b,(float) a/(float) b);


	return 0;
}
#include<stdio.h>
#include<string.h>


int main(){
	char marca[20];
	int precio;

	printf("Marca: ");       scanf("%s",marca);
	printf("\r\b\tPrecio: ");  scanf("%i",&precio);

	if(strcmp(marca,"honda")){
		printf("Precio original:    $%i\nDescuento del 5%%: - $%.2f\nPrecio final:        $%.2f\n",precio,(float)precio*0.05,(float)precio*0.95);
	}
	else if(strcmp(marca,"yamaha")){
		printf("Precio original:    $%i\nDescuento del 8%%: - $%.2f\nPrecio final:        $%.2f\n",precio,(float)precio*0.08,(float)precio*0.92);
	}
	else if(strcmp(marca,"suzuki")){
		printf("Precio original:    $%i\nDescuento del 10%%: - $%.2f\nPrecio final:       $%.2f\n",precio,(float)precio*0.1,(float)precio*0.9);
	}
	else{
		printf("Datos erroneos\n");
	}

	return 0;
}
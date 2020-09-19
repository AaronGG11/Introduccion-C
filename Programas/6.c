#include<stdio.h>


int main(){
	
	int opcion,num1;

	printf("\n\t.: MENU DEL EJERCICIO 16 PROGRAMACION ATS :.\n");
	printf("1. Cubo de un numero\n2. Numero par o impar\n3. Salir\n");
	printf("   Selecciona una opcion: ");  scanf("%i",&opcion);

	switch(opcion){
		case 1: printf("Teclea un numero: ");  scanf("%i",&num1);  printf("Numero al cubo es igual a: %i\n",num1*num1*num1);
			break;
		case 2: printf("Teclea un numero: ");  scanf("%i",&num1);  
				if(num1%2==0){
					printf("El numero telceado es un numero par\n");
				} 
				else{
					printf("El numero telceado es un numero impar\n");
				}
			break;
		case 3: break;
	}


	return 0;
}¡
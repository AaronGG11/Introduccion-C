//REALIZAR UN PROGRAMA: QUE POR MEDIO DE FUNCIONES Y UN MENU, SUME, RESTE, MULTIPLIQUE Y DIVIDA DOS NUMEROS

#include<stdio.h>
#include<stdlib.h>

void menu();
int sumar();
int restar();
int multiplicar();
float dividir();

int main(){

	menu();


	return 0;
}

void menu(){
	int opcion;
	do{
	printf("\tMENU\n");
	printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Salir\n   Selecciona una opcion: \n");
	scanf("%d",&opcion);

	switch(opcion){
		case 1: printf("%d\n",sumar());             break;
		case 2: printf("%d\n",restar());            break;
		case 3: printf("%d\n",multiplicar());       break;
		case 4: printf("%.2f\n",(float)dividir());         break;
	}
	getchar();
	getchar();
	system("clear");
	}while(opcion != 5);
}

int sumar(){
	int numero1,numero2;
	printf("Teclea los sumandos\n"); scanf("%d%d",&numero1,&numero2);

	return numero1+numero2;
}

int restar(){
	int numero1,numero2;
	printf("Teclea los operandos\n"); scanf("%d%d",&numero1,&numero2);

	if(numero1>numero2){
		return numero1-numero2;
	}
	else{
		return numero2-numero1;
	}
}

int multiplicar(){
	int numero1,numero2;
	printf("Teclea los operandos\n"); scanf("%d%d",&numero1,&numero2);

	return numero1*numero2;
}

float dividir(){
	int numero1,numero2;
	printf("Teclea los operandos\n"); scanf("%d%d",&numero1,&numero2);

	return (float)numero1 / (float)numero2;
}






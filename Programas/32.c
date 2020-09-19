// REALICE UN PROGRAMA QUE PERMITA LEER UNA CADENA DE CARACTERES Y QUE DEVUELVA EL NUMERO DE 
//  CARACTERES QUE TIENE DICHA CADENA E IMPRIMIR DICHA CADENA AL REVES.

#include<stdio.h>



int main(){

	char cadena[30];
	int i=0;


	printf("Digite una palabra: ");		scanf("%[^\n]",cadena);//gets(cadena);//scanf("%*c%[^\n]",cadena);

	while(cadena[i] != '\0'){
		i++;
	}	

	printf("La cadena tecleada tiene: %d caracteres\n",i);
	printf("La cadena escrita al reves es: ");

	while(i>=0){
		printf("%c",cadena[i--]);
	}
	printf("\n");	
	
	//fgets(cadena,20,stdin);

	
	

	return 0;
}
/*


*/
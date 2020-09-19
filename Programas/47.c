#include <stdio.h>
void lecad(char*);
/*
	hacer una función recursiva llamada imcad(nombrecadena), esta sería el
	complemento de lecad **usar putchar
*/
void imcad(char*);
int main(){
    char cadena [500] = "Dame una cadena";
    imcad(cadena);
    lecad(cadena);
	imcad(cadena);
}
void imcad(char * cad){
    if(cad[0]=='\0'){
        printf("\n");
    } else {
        putchar(cad[0]);
        imcad(cad+1);
    }
}
void lecad(char * cad){
	char caracter;
	if((caracter=getchar()) == '#'){
		cad[0] = '\0';
	} else {
		cad[0] = caracter;
		lecad(cad+1);
	}
}
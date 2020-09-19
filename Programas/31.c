// PROGRAMA QUE PIDA EL SEXO DE N ESTUDIANTES HASTA QUE SE TECLE ALGUN CARACTER O 
//  CADENA ESPECIFICO, DESPUES CONTABILIZAR EL TOTAL DE MUJERES Y EL TOTAL DE HOMBRES

#include<stdio.h>
#include<string.h>


int main(){
	char sexo[100];
	int i,alumnos,hombres=0,mujeres=0,error=0;


	printf("Tecle el total de estudiantes de la clase: ");	scanf("%d",&alumnos);
	
	for(i=1;i<=alumnos;i++){

		fflush(stdin);
		printf("Teclee el sexo del estudiante [%d]: \n",i);
		scanf("%*c%[^\n]",sexo);

		if(strcmp(sexo,"hombre")==0){
			hombres++;
		}
		else if(strcmp(sexo,"mujer")==0){
			mujeres++;
		}
		else{
			error++;
		}
	}

	printf("El total de los estudiantes es:		Mujeres: %d  y	Hombres: %d 	Error de captura: %d\n",mujeres,hombres,error);

	


	return 0;
}
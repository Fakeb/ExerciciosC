#include <stdio.h>

#include <stdlib.h>





struct agua{

	int litros,temperatura,ph;	

		

};



struct tanque{

		int limite;

		char material[99],formato[99];

		

		struct agua h2o;



};



int main() {

	

	struct tanque tanq;

	

	printf("Digite o limite de litros do tanque:");

	scanf("%d",&tanq.limite);

	fflush(stdin);

	printf("\nDigite o material do tanque: ");

	scanf("%[^\n]s",tanq.material);

	fflush(stdin);

	printf("\nDigite o formato do tanque: ");

	scanf("%[^\n]s",tanq.formato);

	fflush(stdin);

	

	do{

	

		printf("\nDigite os litros de agua dentro do tanque: ");

		scanf("%d",&tanq.h2o.litros);

		fflush(stdin);

		

		if(tanq.h2o.litros>tanq.limite){

		system ("cls");

		printf("Erro, Digite um valor abaixo do limite\n\n");

		}

		

	}while(tanq.h2o.litros>tanq.limite);

	

	printf("\nDigite o a temperatura da agua(graus celsius): ");

	scanf("%d",&tanq.h2o.temperatura);

	fflush(stdin);



		

	do{

		printf("\npH(potencial hidrogenionico) de 1 ate 13, quanto mais proximo de 1 mais acida, mais proximo de 13 mais alcalino(7=neutro)");

		printf("\nDigite o ph da agua:  ");

		scanf("%d",&tanq.h2o.ph);

		fflush(stdin);

		

		if((tanq.h2o.ph>=0)||(tanq.h2o.ph<=14)){

		system ("cls");

		printf("Erro, Digite um valor entre 1 e 13:\n\n");

		}

		

	}while((tanq.h2o.ph<=0)||(tanq.h2o.ph>=14));

	

	printf("\nO Tanque possui um limite de %d litros, com o material %s, tem um formato %s, possui %d litros de agua, com uma temperatura de %d graus celsius e um pH de %d.",tanq.limite,tanq.material,tanq.formato,tanq.h2o.litros,tanq.h2o.temperatura,tanq.h2o.ph);

	

	

	return 0;

}

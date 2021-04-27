/*/
6. Escreva um	programa	que	lê	dois	vetores	de	inteiros	com	10	elementos	e	chama	funções	para	executar	as	
seguintes	operações:
a. Soma	de	vetores
b. Subtração	de	vetores
c. Produto	escalar	dos	vetores
d. Use	ponteiros	para	manipular	os	vetores	nas	funções.
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somar(int *ponteiro1,int *ponteiro2);
void subtrair(int *ponteiro1,int *ponteiro2);
void multiplicar(int *ponteiro1,int *ponteiro2);

int main()
{
	int vetor1[11],vetor2[11],i,*ponteiro1,*ponteiro2;
	
	printf("Digite 10 numeros no primeiro vetor e 10 no segundo para somarmos, subtrairmos e multiplicarmos:\n\n");
	
	for(i=1;i<11;i++){
		printf("Digite o elemento %d do primeiro vetor: ",i);
		scanf("%d",&vetor1[i]);
		system("cls");
	}
	
	for(i=1;i<11;i++){
		printf("Digite o elemento %d do segundo vetor: ",i);
		scanf("%d",&vetor2[i]);
		system("cls");
	}
	
	printf("O primeiro vetor: ");

	for(i=1;i<11;i++){
		printf("%d   ",vetor1[i]);
	}
	printf("\nO segundo vetor: ");
	for(i=1;i<11;i++){
		printf("%d   ",vetor2[i]);
	}
	
	ponteiro1 = vetor1;
	ponteiro2 = vetor2;
	
	somar(ponteiro1,ponteiro2);
	subtrair(ponteiro1,ponteiro2);
	multiplicar(ponteiro1,ponteiro2);
	
	printf("\n\n");
	
	system("pause");
	
	return 0;

}

void somar(int *ponteiro1,int *ponteiro2){
	
	int vetor3[11],i;
	
	printf("\n\nA soma dos dois vetores: ");
	
	for(i=1;i<11;i++){
		vetor3[i]=ponteiro1[i]+ponteiro2[i];
		printf("%d ",vetor3[i]);
	}
}

void subtrair(int *ponteiro1,int *ponteiro2){
	int vetor3[11],i;
	
	printf("\n\nA subtracao dos dois vetores: ");
	
	for(i=1;i<11;i++){
		vetor3[i]=ponteiro1[i]-ponteiro2[i];
		printf("%d ",vetor3[i]);
	}
}

void multiplicar(int *ponteiro1,int *ponteiro2){
	
	int vetor3[11],i;
	
	printf("\n\nA multiplicacao dos dois vetores: ");
	
	for(i=1;i<11;i++){
		vetor3[i]=ponteiro1[i]*ponteiro2[i];
		printf("%d ",vetor3[i]);
	}
}

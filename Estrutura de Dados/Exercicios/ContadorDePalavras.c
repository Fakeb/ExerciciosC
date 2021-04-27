#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int Contagem(char *nome);

int main(){

	int palavras;
	char nome[200];

	printf("Digite o nome de um arquivo:");
	scanf("%[^\n]s",nome);
	fflush(stdin);

	palavras=Contagem(nome);

	printf("Total de palavras:%d\n",palavras);

	system("pause");
	return 0;
}
int Contagem(char *nome){
	FILE *arq;

	int total=0, erro=0;
	char c;

	arq= fopen(nome,"r");

	if(arq==NULL){
		system("cls");
		printf("Arquivo nao existe.\n");
		main();
	}

	do{
		c=fgetc(arq);

		if(!isspace(c)){
			erro=0;
		}
		else if((isspace(c))&&(erro==0)){
			total++;
			erro=1;
		}
	}while(c!=EOF);

	fclose(arq);
	return total;
}

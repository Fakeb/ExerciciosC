#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int recebeValidaArquivo(char nomeArquivo[]);
void exibeArquivo(char nomeArquivo[]);

int main() {
	char nomeArquivo[100];
	//rotina para receber nome de arquivo e validar
	int existe = recebeValidaArquivo(nomeArquivo);
	
	if (existe) {
		printf("Arquivo localizado e sendo impresso ...\n\n");
		exibeArquivo(nomeArquivo);
	} else {
		printf("Arquivo nao localizado\n\n");
	}
	//rotina para exibir o arquivo na tela
	return 1;
}

int recebeValidaArquivo(char nomeArquivo[]){
	FILE *procurador;
	
	printf("Digite o nome de um arquivo texto: ");
	scanf("%s", nomeArquivo);
	fflush(stdin);
	
	procurador = fopen(nomeArquivo,"r");
	
	if (procurador) {
		fclose(procurador);
		return 1;	
	}
	return 0;	
}
void exibeArquivo(char nomeArquivo[]){
	FILE *procurador;
	char linha[200];
	
	procurador = fopen(nomeArquivo,"r");
	
	while (fgets(linha, sizeof(linha), procurador)) {
		printf("%s", linha);
	}	
	fclose(procurador);
}


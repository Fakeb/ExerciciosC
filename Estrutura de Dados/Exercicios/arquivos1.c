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
		exibeArquivo(nomeArquivo);
	} else {
		printf("Arquivo nao localizado\n\n");
	}
	//rotina para exibir o arquivo na tela
	return 1;
}

int recebeValidaArquivo(char nomeArquivo[]){
	return 0;
}
void exibeArquivo(char nomeArquivo[]){
	
}


//menu                                            vetor: 0 1 2 3 4
//1- gerar garagem                                       0=placa do carro e quanto deve
//2- listar carroes em garagem
//3- listar geral
//4- sair

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 5;

typedef struct{
	char placa[7];
	char horaentrada[5];
	char horasaida[5];
	double taxa;
}Vaga;
void inicializar(Vaga V[], int n); // V[] = V* >> todo vetor é um ponteiro
void gerirGaragem(Vaga V[], int n);

int main(){
	int opcao;
	Vaga vetor[TAM];
	inicializar(vetor, TAM);
	do{
		printf("menu\n");
		printf("1-gerir garagem\n");
		printf("4-sair\n");
		printf("opçao");
		scanf("%d",&opcao);
		fflus(stdin);
		switch(opcao){
			case 1: print("geragem");
			gerirGaragem(vetor, TAM);
			break;
		}
	}
	return 1;
}
void gerirGaragem(Vaga V[], int n){
}
void inicializar(Vaga V[], int n){
	int i;
	for(i=0;i<n;i++){
		strcpy(V[i].placa," ");
		strcpy(V[i].horaentrada," ");
		strcpy(V[i].horasaida," ");
		V[i].taxa=0;
	}
}

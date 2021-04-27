#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 5

struct Vaga {
	char placa[15];
	char dataEntrada[15];
	char horaEntrada[15];
	char dataSaida[15];
	char horaSaida[15];
	float taxa;
};

void limpar(struct Vaga *vetor, int n);
void gerirGaragem(struct Vaga *vetor, int n);
int verificarGaragem(char *placa, struct Vaga *vetor, int n);
void entraGaragem(char *placa, struct Vaga *vetor, int n);

FILE *garagem;

void limpar(struct Vaga *vetor, int n) {
	int i;

	for (i = 0; i < n; i++) {
		strcpy(vetor[i].placa, " ");
		strcpy(vetor[i].dataEntrada, " ");
		strcpy(vetor[i].horaEntrada, " ");
		strcpy(vetor[i].dataSaida, " ");
		strcpy(vetor[i].horaSaida, " ");

		vetor[i].taxa = 0;
	}
}

void gerirGaragem(struct Vaga *vetor, int n) {
	char placa[15];
	int posicaoPlaca = -1;

	printf("Digite uma placa: ");
	scanf("%s", placa);
	fflush(stdin);

	posicaoPlaca = verificarGaragem(placa, vetor, n);

	if (posicaoPlaca != -1) {
		printf("Carro localizado\n");
		printf("Calculando taxas ....\n");
		//saiGaragem(placa,vetor,posicaoPlaca);
	} 
	else {
		printf("\nRegistrando entrada. . . ");
		sleep(1);

		entraGaragem(placa,vetor,n);
	}
}

int verificarGaragem(char *placa, struct Vaga *vetor, int n) {
	int i;

	for (i = 0; i < n; i++) {
		if (strcmp(vetor[i].placa, placa) == 0) {

			return i;
		}
	}
	return -1;
}

void entraGaragem(char *placa, struct Vaga *vetor, int n) {
	int i;

	for (i = 0; i < n; i++) {
		if (strcmp(vetor[i].placa, " ") == 0) {
			strcpy(vetor[i].placa, placa);

			garagem = fopen("Garagem.txt", "a");

			if (garagem == NULL) {
				printf("ERRO: O arquivo não foi criado.\n\n");
				main();
			}

			fprintf(garagem, "Placa: %s\n", placa);

			fclose(garagem);

			/*/
			printf("Data entrada [dd/mm/aaaa]: ");
			scanf("%s",vetor[i].dataEntrada);
			fflush(stdin);
			printf("Hora entrada [hh:mm]: ");
			scanf("%s",vetor[i].horaEntrada);
			fflush(stdin);
			/*/
			system("cls");
			return;
		}
	}
	system("cls");
	printf("AVISO: A garagem está lotada.\n\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	struct Vaga vetor[TAM];

	int opcao;

	limpar(vetor, TAM);

	do {
		printf("=== Menu principal\n\nVocê quer?\n\n[1] Gerir garagem\n[2] Listar carros na garagem\n[3] Listar tudo\n[4] Sair\n\nResposta: ");
		scanf("%d", &opcao);
		fflush(stdin);
	
		switch (opcao) {
			case 1: {
				system("cls");
				printf("=== Gestão da garagem\n\n");

				gerirGaragem(vetor, TAM);
				break;
			}
			case 2: {
				system("cls");
				printf("=== Carros na garagem\n\n");

				int i,count=0;

				for (i = 0; i < TAM; i++) {		
					if (strcmp(vetor[i].placa, " ") == 0) {
						count++;

						if (count == TAM) {
							system("cls");
							printf("AVISO: Não há carros na garagem.\n\n");
						}
					}
					else {
						printf("%dª Placa: %s\n", i + 1, vetor[i].placa);
					}
				}
				if (count != TAM) {
					printf("\n");
					system("pause");
					system("cls");
				}
				break;
			}
			case 4: exit(0); break;
			default: {
				system("cls"); 
				printf("ERRO: O valor inserido é inválido.\n\n");
				break;
			}
		}
	} while (opcao != 4);

	return 1;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long int qtdComparacoes, qtdTrocas;
clock_t tempoInicio, tempoFim;

void populaVetor(int v[], unsigned long long int n) {
	unsigned long long int i;	
	srand(time(NULL));
	for (i = 0; i < n; i = i + 1) {
		v[i] = rand() % 1000;
	}

}

void exibirVetor(int v[], unsigned long long int n) {
	unsigned long long int i;	

	for (i = 0; i < n; i = i + 1) {
		printf("%llu - %d\n", i, v[i]);
	}	
	printf("\n\n");
}

void ordenaSelecao(int *v, unsigned long long int n) {
	unsigned long long int i, j, posMenor;
	int tmp; //para as trocas

	qtdComparacoes = 0;
	qtdTrocas = 0;

	for (i = 0; i < n-1; i++) {
		posMenor = i;
		for (j = i+1; j < n; j++) {
			qtdComparacoes++;
			if (v[j] < v[posMenor]) posMenor = j;
		}
		if (i != posMenor) {
			tmp = v[i];
			v[i] = v[posMenor];
			v[posMenor] = tmp;
			qtdTrocas++;
		}
	}
	printf("Selecao\nQuantidade Comparacoes: %llu\nQuantidade Trocas: %llu\n", qtdComparacoes, qtdTrocas);
	tempoFim = clock();
	printf("Tempo: %f\n", (float)(tempoFim - tempoInicio)/CLOCKS_PER_SEC);
}

void ordenaInsercao(int *v, unsigned long long int n) {
	signed long long i, j;
	int tmp; //para as trocas

	qtdComparacoes = 1;
	qtdTrocas = 0;

	for (i = 1; i < n; i++) {
		tmp = v[i];
		qtdComparacoes++;

		for (j = i-1; j >= 0 && tmp < v[j]; j--) {
			v[j+1] = v[j];
			qtdComparacoes++;
			qtdTrocas++;
		}
		v[j+1] = tmp;
		qtdTrocas++;
	}
	printf("Insercao\nQuantidade Comparacoes: %llu\nQuantidade Trocas: %llu\n", qtdComparacoes, qtdTrocas);
	tempoFim = clock();
	printf("Tempo: %f\n", (float)(tempoFim - tempoInicio)/CLOCKS_PER_SEC);
}

void ordenaBolha(int *v, unsigned long long int n) {
	unsigned long long int i;
	int houveTroca, tmp;

	qtdComparacoes = 0;
	qtdTrocas = 0;

	do {
		houveTroca = 0; //marca que nao houveTroca
		for (i = 0; i < n - 1; i++) {
			qtdComparacoes++;
			if (v[i] > v[i + 1]) {
				tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				houveTroca = 1;
				qtdTrocas++;
			}
		}
	} while (houveTroca);
	
	printf("Bolha\nQuantidade Comparacoes: %llu\nQuantidade Trocas: %llu\n", qtdComparacoes, qtdTrocas);
	tempoFim = clock();
	printf("Tempo: %f\n", (float)(tempoFim - tempoInicio)/CLOCKS_PER_SEC);
}

void ordenaAgitacao(int *v, unsigned long long int n) {
	unsigned long long int i;
	int houveTroca, tmp, ini = 0, fim = n;

	qtdComparacoes = 0;
	qtdTrocas = 0;

	do {
		//da esquerda para direita
		houveTroca = 0; //marca que nao houveTroca
		for (i = 0; i < fim - 1; i++) {
			qtdComparacoes++;
			if (v[i] > v[i + 1]) {
				tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				houveTroca = 1;
				qtdTrocas++;
			}
		}
		fim--;
		if (!houveTroca) break;

		//da direita para esquerda
		houveTroca = 0; //marca que nao houveTroca
		for (i = fim; i > ini; i--) {
			qtdComparacoes++;
			if (v[i] < v[i - 1]) {
				tmp = v[i];
				v[i] = v[i - 1];
				v[i - 1] = tmp;
				houveTroca = 1;
				qtdTrocas++;
			}
		}
		ini++;
	} while (houveTroca && ini <= fim);
	
	printf("Agitacao\nQuantidade Comparacoes: %llu\nQuantidade Trocas: %llu\n", qtdComparacoes, qtdTrocas);
	tempoFim = clock();
	printf("Tempo: %f\n", (float)(tempoFim - tempoInicio)/CLOCKS_PER_SEC);
}

void ordenaPente(int *v, unsigned long long int n) {
	unsigned long long int i;
	int houveTroca, tmp, distancia = n;

	qtdComparacoes = 0;
	qtdTrocas = 0;

	do {
		distancia /= 1.3;
		if (distancia < 1) distancia = 1;

		houveTroca = 0; //marca que nao houveTroca
		for (i = 0; i + distancia < n; i++) {
			qtdComparacoes++;
			if (v[i] > v[i + distancia]) {
				tmp = v[i];
				v[i] = v[i + distancia];
				v[i + distancia] = tmp;
				houveTroca = 1;
				qtdTrocas++;
			}
		}
	} while (distancia != 1 || houveTroca);
	
	printf("Pente\nQuantidade Comparacoes: %llu\nQuantidade Trocas: %llu\n", qtdComparacoes, qtdTrocas);
	tempoFim = clock();
	printf("Tempo: %f\n", (float)(tempoFim - tempoInicio)/CLOCKS_PER_SEC);
	
}

int main(int argc, char **argv) {
	
	unsigned long long int quantidade=50000, i;

	int vetorPente[quantidade];
	int vetorSelecao[quantidade];
	int vetorInsercao[quantidade];
	int vetorBolha[quantidade];
	int vetorAgitacao[quantidade];
	
	populaVetor(vetorPente, quantidade);
	//populaVetor(vetorSelecao, quantidade);
	//populaVetor(vetorInsercao, quantidade);
	//populaVetor(vetorBolha, quantidade);
	//populaVetor(vetorAgitacao, quantidade);
	
	ordenaPente(vetorPente, quantidade);
	//ordenaSelecao(vetorSelecao, quantidade);
	//ordenaInsercao(vetorInsercao, quantidade);
	//ordenaBolha(vetorBolha, quantidade);
	//ordenaAgitacao(vetorAgitacao, quantidade);	
	
	
		
	return 0;
}

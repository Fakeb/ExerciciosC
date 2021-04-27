#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 45726

size_t strlen(const char *str);

typedef struct{

	char nome[50];
	int idade;
	
}Dados;

typedef struct no{
	
	Dados aluno;
	struct no *prox;
	
}Celula;

Celula *inserir(Dados aluno, Celula *l);
Celula *remover(Dados a, Celula *l);
Dados position(Celula *l, int posicao);
void inicializar(Celula *hashtable[], int tamanho);
void pesquisar(Dados a, Celula *l);
int hash(char nome[50], int idade);
int resultados(Dados a, Celula *l, int del);

int main(int argc, char *argv[]) {
	
	Dados aluno;
	Celula *hashtable[TAMANHO];
	inicializar(hashtable,TAMANHO);
	
	int option, pos;
	
	system("CLS");
	
	do{

		printf("\n 1 -> Inserir Aluno");
		printf("\n 2 -> Pesquisar Aluno");
		printf("\n 3 -> Excluir Aluno");
		printf("\n 4 -> Sair do Sistema\n");
		
		printf("\nEscolha: ");
		scanf("%d", &option);
		
		switch(option){
			case 1: printf("\nCadastro: ");
			
					printf("\n Digite o Nome do Aluno: ");
					scanf("%s[^\n]", aluno.nome);
					
					fflush(stdin);
					
					printf("\n Digite a Idade do Aluno: ");
					scanf("%d", &aluno.idade);
					
					pos = hash(aluno.nome, aluno.idade);
					
					system("CLS");
					printf("\nHash Gerado: %d\n", pos);
					
					if (hashtable[pos]) printf("Colisao Encontrada!\n");
					hashtable[pos] = inserir(aluno, hashtable[pos]);
					
					break;
					
			case 2: printf("\nPesquisa: ");
			
					printf("\n Digite o Nome do Aluno a ser Pesquisado: ");
					scanf("%s[^\n]", aluno.nome);
					
					fflush(stdin);
					
					printf("\n Digite a Idade do Aluno a ser Pesquisado: ");
					scanf("%d", &aluno.idade);
					
					pos = hash(aluno.nome, aluno.idade);
					
					pesquisar(aluno, hashtable[pos]);
					
					break;
					
		    case 3: printf("\n Digite o Nome do Aluno a ser Removido: ");
					scanf("%s[^\n]", aluno.nome);
					
					fflush(stdin);
					
					printf("\n Digite a Idade do Aluno a ser Removido: ");
					scanf("%d", &aluno.idade);

					pos = hash(aluno.nome, aluno.idade);

					hashtable[pos] = remover(aluno, hashtable[pos]);
					
					break;
					
		    case 4: printf("\nSaindo do Sistema...");
		    
					break;
		}
		
	}while(option != 4);
	
	return 0;
	
}

void inicializar(Celula *hashtable[], int tamanho){
	
	int i;
	
	for(i = 0; i <= tamanho; i++){
		
		hashtable[i] = NULL;
		
	}
	
}

int hash(char nome[], int idade){
	
	int r = (((((int) nome [0]) + ((int) nome [2]) + idade) * ((int) nome [1])) + ((int) nome [strlen(nome)/2]/2)) + strlen(nome);
	
	return r;
	
}

Celula *inserir(Dados a, Celula *l) {
	
	Celula *novo;
	Celula *p, *pR;

	novo = (Celula *)malloc(sizeof(Celula));
	
	novo->aluno = a;
	novo->prox = NULL;

	if (!l) return novo;

	for (pR = NULL, p = l; p; pR = p, p = p->prox) {
		
		if (a.idade < p->aluno.idade) break;
		
	}
	
	if (!pR) {
		
		novo->prox = p;
		return novo;
		
	}
	
	if (!p) {
		
		pR->prox = novo;
		return l;
		
	}

	pR -> prox = novo;
	novo -> prox = p;

	return l;
	
}

void pesquisar(Dados a, Celula *l){
	
	if (!l){
		system("CLS");
		printf("\nNenhum Aluno Encontrado.\n"); 
		return;
	} 

	Celula *p;
	Dados novo;
	int posicao;

	posicao = resultados(a, l, 0);
	novo = position(l, posicao);
	
}

int resultados(Dados a, Celula *l, int del) {
	
	Celula *p;
	int count = 0, pos;

	printf("\nAluno(s):\n");

	for(p = l; p; p = p->prox) {
		
		if (a.nome, a.idade == p->aluno.nome, p->aluno.idade) {
			
			printf("\n%d - Nome: %s (%d Anos)\n", count, p->aluno.nome, a.idade);
			count++;
			
		}
		
	}
	
	if(del == 1){
		
		do {
			
			printf("\nEscolha: ");
			scanf("%d", &pos);
			
		} while (count <= pos);
		
	}

	return pos;
	
}

Dados position(Celula *l, int posicao) {
	
	if (!l){
		system("CLS");
		printf("\nNenhum Aluno Encontrado.\n"); 
		return;
	} 
	
	Celula *p;
	int contador = 0;

	for(p = l; p; p = p->prox) {
		
		if (contador == posicao) {
			
			return p->aluno;
			
		}
		
		contador++;
		
	}
	
}

Celula *remover(Dados a, Celula *l) {
	
	Celula *p,*pR;
	int contador, posicao;
	
	if (!l) {
		
		system("CLS");
		printf("\nNenhum Aluno Econtrado.");
		return;
		
	}

	posicao = resultados(a, l, 1);
	system("CLS");
	printf("Aluno Removido do Sistema.\n\n");
	
	for (contador = 0, pR = NULL, p = l; p; pR = p, p = p->prox) {
		
		if (contador == posicao) {
			break;
		}
		
		contador++;
		
	}
	
	if (!p) return l;
	
	if (p == l) {
		
		l = l->prox;
		free(p);
		return l;
		
	}
	
	if (!p->prox) {
		
		free(p);
		pR->prox = NULL;
		return l;
		
	}
	
	pR->prox = p->prox;
	free(p);
	
	return l;
	
}

//PILHA - LIFO -> inserir / remover do topo

//LISTA - ORDENAÇÃO -> percorrer /inserir / remover / alterar / pesquisar

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int dado;
	struct no *prox;
} Celula;

Celula *inserir(int valor, Celula *l);
void exibir(Celula *l);
Celula *ordenar(Celula *l);

int main() {
	Celula *pilha = NULL;
	Celula *lista = NULL;
	
	pilha = inserir(10, pilha);
	pilha = inserir(5, pilha);
	pilha = inserir(3, pilha);
	
	printf("Exibindo a pilha\n");
	exibir(pilha);
	
	lista = inserir(10, lista);
	lista = inserir(5, lista);
	lista = inserir(1, lista);
	lista = inserir(3, lista);
	lista = ordenar(lista);
	
	printf("Exibindo a lista\n");
	exibir(lista);
	
	return 1;
}
//Inserir na pilha/lista - nossa lista é falsa
Celula *inserir(int valor, Celula *l){
	Celula *novo;
	
	//Alocar memória
	novo = (Celula *)malloc(sizeof(Celula));
	
	//Depositar valores na pilha/lista
	novo -> dado = valor;
	novo -> prox = l;
	
	//Engatar
	return novo;
}

void exibir(Celula *l){
	Celula *p;
	
	if(!l){
		printf("Estrutura vazia\n");
		return;
	}
	for(p = l; p ; p = p->prox){
		printf("%d\n", p->dado);
	}
	
}

Celula *ordenar(Celula *l) {
	//Método da bolha
	Celula *p;
	int houvetroca;
	int aux;
	
	do {
		houvetroca = 0;
		
		for (p = l; p->prox; p = p->prox) {
			if (p->dado > p->prox->dado) {
				houvetroca = 1;
				aux = p->dado;
				p->dado = p->prox->dado;
				p->prox->dado = aux;
			}
		}
	} while(houvetroca);
	
	return l;
}


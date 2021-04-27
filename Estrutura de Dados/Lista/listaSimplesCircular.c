#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
	int dado;
	struct nodo *prox;
}Celula;


Celula *inserirSimples(int valor, Celula *l) {
	Celula *novo, *p;

	//alocar memoria
	novo = (Celula *)malloc(sizeof(Celula));

	//depositar valores 
	novo->dado = valor;
	novo->prox = NULL; //se fosse circular seria diferente

	//percorrer lista
	if (!l) return novo;

	for (p = l; p->prox; p = p->prox);

	//engatar o novo elemento
	p->prox = novo;
	
	return l;
}

Celula *inserirCircular(int valor, Celula *l) {
	Celula *novo, *p;

	//alocar memoria
	novo = (Celula *)malloc(sizeof(Celula));

	//depositar valores
	novo->dado = valor;

	//percorrer a lista
	if (!l) {
		novo->prox = novo;
		return novo;
	}

	for (p = l; p->prox != l; p = p->prox);

	//engatar o novo elemento
	p->prox = novo;
	novo->prox = l;

	return l;

}

void exibirSimples(Celula *l) {
	if (l) {
		for (;l; l = l->prox) {
			printf("%d\t",l->dado);
		}
		printf("\n");
	}
}


void exibirCircular(Celula *l) {
	Celula *p;
	if (l) {
		for (p = l;p->prox != l; p = p->prox) {
			printf("%d\t",p->dado);
		}
		printf("%d\n",p->dado);
	}
}

int main() {
	Celula *lista = NULL;
	Celula *listaCircular = NULL;

	lista = inserirSimples(10, lista);
	lista = inserirSimples(20, lista);
	lista = inserirSimples(30, lista);
	exibirSimples(lista);

	listaCircular = inserirCircular(50, listaCircular);
	listaCircular = inserirCircular(60, listaCircular);
	listaCircular = inserirCircular(70, listaCircular);
	exibirCircular(listaCircular);

	return 1;
}
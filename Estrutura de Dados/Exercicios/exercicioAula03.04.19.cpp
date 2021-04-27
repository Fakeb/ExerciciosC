#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct no {
	int dado;
	struct no *prox;
} Celula;

Celula *inserirLista(int valor, Celula *l);
void exibir(Celula *l);
Celula *juntarListas(Celula *listaA, Celula *listaB);
Celula *ordenar(Celula *l) ;

int main() {
	Celula *listaA = NULL;
	Celula *listaB = NULL;
	Celula *listaC = NULL;
	int i=0;
	srand(time(NULL));
	
	for (i = 0; i < 5; i++) {
		
		listaA = inserirLista(rand()%30, listaA);
		listaB = inserirLista(rand()%30, listaB);
		
		
	}
	
	
	
	

	printf("Exibindo a lista A\n");
	exibir(listaA);
	printf("Exibindo a lista B\n");
	exibir(listaB);
	
	listaC = juntarListas(listaA, listaB);
	
	printf("Exibindo a lista C\n");
	exibir(listaC);
	
	return 0;
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
Celula *inserirLista(int valor, Celula *l) {
	
		Celula *p, *pR, *novo = (Celula *)malloc(sizeof(Celula));
	
		novo->dado = valor;
		novo->prox = NULL;

		if (!l) return novo; //primeira vez

		//percorrer para localizar sua posicao
		
		for (pR = NULL, p = l; p; pR = p, p = p->prox) {
			
			if (valor < p->dado) {
				
				//achei a posicao do valor
				
				break;
				
			}
			
		}
		
		//inicio
		
		if (p == l) {
			
			novo->prox = l; //ou novo->prox = p;
			return novo;
			
		} else if (!p) { //fim
			pR->prox = novo;
			return l;
			
		}
		//meio
		pR->prox = novo;
		novo->prox = p;
		return l;
		
}

Celula *juntarListas(Celula *listaA, Celula *listaB){
	
	
	Celula *p;
	
	for(p=listaA;p->prox;p=p->prox);
	p->prox=listaB;
	listaA=ordenar(listaA);
	
	return listaA;
	
	
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


Celula *juntarLista(Celula *listaA, Celula *listaB){
	
	Celula *p, *lista=NULL;
	for(p=listaA;p;p=p->prox){
		lista=inserir(p->dado,lista);
	}
	for(p=listaB;p;p=p->prox){
		lista=inserir(p->dado,lista);
		
	}
	return lista;

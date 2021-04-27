#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

typedef struct nodo {
	int dado;
	int fb; //fator de balanceamento
	struct nodo *esq, *dir;
}Arvore;

int altura(Arvore *r) {
	if (r) {
		int altE = altura(r->esq);
		int altD = altura(r->dir);
		if (altE > altD) {
			return altE + 1;
		} else {
			return altD + 1;
		}
	} else {
		return 0;
	}
}

Arvore* rotarEsq(Arvore *r) {
	Arvore *tmp, *np;

	np = r->dir;
	tmp = np->esq;
	np->esq = r;
	r->dir = tmp;
	return np;
}

Arvore* rotarDir(Arvore *r) {
	Arvore *tmp, *np; 

	np = r->esq;
	tmp = np->dir;
	np->dir = r;
	r->esq = tmp;
	return np;
}

void atualizarfator(Arvore *r){
	if(r){
		r->fb = altura(r->esq) - altura (r->dir);
		atualizarfator(r->esq);
		atualizarfator(r->dir);
	}
}

Arvore *inserir(int valor, Arvore *r) {
	if (r) {
		
		if (valor < r->dado){
			r->esq = inserir(valor,r->esq);
		}else {
			r->dir = inserir(valor,r->dir);
		}
		
		//metodo para calcular o fator de balancamento
		r->fb = altura(r->esq) - altura(r->dir);
		
		//rota��o simples esquerda
		if(r->fb == -2 && r->dir->fb < 0){	
			r = rotarEsq(r);
		}
		
		//rota��o simples direita
		else if(r->fb == 2 && r->esq->fb > 0){
			r = rotarDir(r);
		}
		
		//rota��o dupla esquerda
		else if(r->fb == -2 && r->dir->fb > 0){
			r -> dir = rotarDir(r->dir);
			r = rotarEsq(r);
		}
	
		//rota��o dupla direita
		else if(r->fb == 2 && r->esq->fb < 0){
			r -> esq = rotarEsq(r->esq);
			r = rotarDir(r);
		}	
		
		atualizarfator(r);
	
		return r;
		
	} else {
		Arvore *novo = (Arvore *)malloc(sizeof(Arvore));
		novo->dado = valor;
		novo->fb = 0;
		novo->esq = NULL;
		novo->dir = NULL;
		return novo;
	}
	
}

void exibir(Arvore *r,int nivel){

	if (r){
		exibir(r->dir,nivel+1);
		int i;
		for(i=0; i < nivel; i++){
			printf("    ");
		}
		printf("%d(%d)\n", r->dado, r->fb);
		exibir(r->esq, nivel+1);
	}
	
}

int main() {
	
	Arvore *raiz = NULL;
	
	int i, vezes, numero;
	
	printf("Quantos Numeros quer Inserir? ");
	scanf("%d", &vezes);
	
	for(i = 0; i < vezes; i++){		
		printf("\n");
		printf("Insira o Numero (%d): ", i+1);
		scanf("%d", &numero);
		raiz = inserir(numero, raiz);
		
		system("cls");
		exibir(raiz,0);
	}

	return 1;
}
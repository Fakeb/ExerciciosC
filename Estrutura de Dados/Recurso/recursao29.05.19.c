#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//codigo feito em aula, dia 29/05/19
// fazer:
// 1)conta nós recursivo
// 2)mostra pares recursivo
// 3)mostra replicados recursivo
// 4)pesquisa recursivo - ?=pesquisarR(valor, lista)

typedef struct no{
	int dado;
	struct no *prox;
}Celula;

void exibirR(Celula *l){ // inicializou a variavel de controle
	if(l){ // teste de parada
		printf("%d\t",l->dado);
		exibirR(l->prox); // ponto de recursao: transformaçao variavel de controle
	}
}

Celula *inserirR(int valor, Celula *l){
	
	if(l){
		
		//percorria - empilhar
		l->prox = inserirR(valor, l->prox);
		return l;
		
	}else{//sai da lista
		//aloca
		Celula *novo =(Celula *) malloc(sizeof(Celula));
		//deposita
		novo->dado = valor;
		if(!l)novo->prox = NULL;
		else novo->prox=l;
		//retorna
		return novo;
	
	}	
}

int main(){
	Celula *lista =NULL;
	int i,valor;
	srand(time(NULL));
	printf("Valores gerados aleatoriamente: \n");
	for(i = 0; i < TAM; i++){
		valor=rand()%100;
		printf("Valor sorteado: %d\n",valor);
		lista = inserirR(valor, lista);		
	}
	
	printf("Valores ja ordenados:\n");
	exibirR(lista);
	
	return 0;
} 

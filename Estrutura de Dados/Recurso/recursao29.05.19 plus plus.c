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

// 1)

int contarR(){
	
}

int mostrarParesR(int valor, Celula *l){
	
}

/*

int contaPares(int *v, int n){
	if(n>0){
		if(v[n-1]%2==0){
			return 1 + contaPares(v, n-1);
		}
		return 0 + contaPares(v,n-1);
	}
	return 0; // estouro do empilhamento, "-1" do topo da pilha 
}

int somarR(int *v, int n){
	
	if(n>0){
		return v[n-1] + somarR(v,n-1);
	}
	return 0;
	
}

*/


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

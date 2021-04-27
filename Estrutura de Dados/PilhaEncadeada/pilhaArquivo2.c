#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para implementar o idioma

typedef struct nodo {
    int dado;
    struct nodo *prox;
} Celula;

Celula *abrirPopular(Celula *topo);
Celula *inserirPilha(int valor, Celula *topo);
int contarPilha(Celula *topo);
void exibirPilha(Celula *topo);
float calcularMedia(Celula *topo);
void exibirFaixa(int valor, Celula *topo);
Celula *copiarPilha(Celula *topo);
Celula *inserirLista(int valor, Celula *l);
Celula *ordenarLista(Celula *l);

int main() {
	setlocale (LC_ALL, "Portuguese"); //Seta a linguagem para portugues
    
	Celula *pilha = NULL;
	int valorPesquisa;
    //abrir arquivo e popular pilha
    pilha = abrirPopular(pilha);
    if (!pilha) {
        printf("Erro no arquivo ou na aloca��o mem�ria\n");
        exit(0);
    } /*else*/
    printf("Pilha constru�da com sucesso\n");

    //quantidade de elementos na pilha
    printf("H� %d dados glicemicos cadastrados\n", contarPilha(pilha));
    //exibir dados na pilha
    exibirPilha(pilha);

    //calcular media
    printf("A m�dia dos dados �: %.2f\n", calcularMedia(pilha));
    
    printf("Digite um valor para pesquisa: ");
    scanf("%d", &valorPesquisa);
    
    exibirFaixa(valorPesquisa, pilha);
    
	//mostrar mediana
	Celula *lista = NULL;
	lista = copiarPilha(pilha);

	lista = ordenarLista(lista);
	printf("\nDados Ordenados: \n");
	exibirPilha(lista);
    //mostrar moda
    return 1;
}

Celula *abrirPopular(Celula *topo) {
    FILE *procurador;
    char nomeArquivo[200];
    int glicemia;
    printf("Informe nome arquivo glicemia: ");
    scanf("%s", nomeArquivo);
    procurador = fopen(nomeArquivo, "r");
    if (!procurador) return topo;
    do {
        fscanf(procurador,"%d", &glicemia);
        if (feof(procurador)) break;

        topo = inserirPilha(glicemia,topo);

    } while (1);
    fclose(procurador);
    return topo;
}
Celula *inserirPilha(int valor, Celula *topo) {
    Celula *novo;

    novo = (Celula *)malloc(sizeof(Celula));
    novo->dado = valor;
    novo->prox = topo;

    return novo;
}

int contarPilha(Celula *topo) {
    Celula *p;
    int conta = 0;

    for (p = topo; p; p = p->prox) {
        conta++;
    }
    return conta;
}

void exibirPilha(Celula *topo) {
	Celula *p;
	
    for (p = topo; p; p = p->prox) {
		printf("%d\n", p->dado);
    }	
}

float calcularMedia(Celula *topo){
	Celula *p;
	int soma=0;
	int i=0;
	
    for (p = topo; p; p = p->prox) {
		soma=soma+p->dado;
		i++;
    }
    return(soma/i);
}

void exibirFaixa(int valor, Celula *topo){
	Celula *p;
	
    for (p = topo; p; p = p->prox) {
    	if ( valor < p->dado ){
			printf("%d\n", p->dado);
    	}	
    }	
}

Celula *copiarPilha(Celula *topo){
	Celula *p;
	Celula *lista = NULL;
	for (p = topo; p; p = p->prox) {
    	lista = inserirLista(p->dado, lista);
    }
    return lista;
}

Celula *inserirLista(int valor, Celula *l){
	Celula *novo;

    novo = (Celula *)malloc(sizeof(Celula));
    novo->dado = valor;
    novo->prox = l;

    return novo;
}

Celula *ordenarLista(Celula *l){
	int aux;
	int houveTroca;
	Celula *p;
	do{
		houveTroca = 0;
		
		for(p = l; p->prox; p=p->prox){
			if(p->dado > p->prox->dado){
				houveTroca = 1;
				aux = p->dado;
				p->dado = p->prox->dado;
				p->prox->dado = aux;
			}
		}
	}while(houveTroca);
	
	return l;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dado;
    struct nodo *prox;
} Celula;

Celula *abrirPopular(Celula *topo);
Celula *inserirPilha(int valor, Celula *topo);
int contarPilha(Celula *topo);

int main() {
    Celula *pilha = NULL;
    //abrir arquivo e popular pilha
    pilha = abrirPopular(pilha);
    if (!pilha) {
        printf("Erro no arquivo ou na alocacao memoria\n");
        exit(0);
    } /*else*/
    printf("Pilha construida com sucesso\n");

    //quantidade de elementos na pilha
    printf("Ha %d dados glicemicos cadastrados", contarPilha(pilha));

    printf("Topo: %d -> %p\n", pilha->dado, pilha);

    //exibir dados na pilha

    //calcular media

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
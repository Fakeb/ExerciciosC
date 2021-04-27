#include <stdlib.h>
#include <stdio.h>
#include <time.h>


typedef struct nodo {
	int dado;
	struct nodo *esq;
	struct nodo *dir;
} Arvore; //arvore binária com 2 filhos

Arvore *inserir(int valor, Arvore *r) {
	if (r) {
		if (valor < r->dado) r->esq = inserir(valor, r->esq);
		else r->dir = inserir(valor, r->dir);
		return r;
	} else {
		Arvore *novo;
		novo = (Arvore *)malloc(sizeof(Arvore));
		novo->dado = valor;
		novo->esq = NULL;
		novo->dir = NULL;
		return novo;
	}
}

void exibirPreFixado(Arvore *r) {
	//RED
	if (r) {
		printf("%d\t", r->dado);
		exibirPreFixado(r->esq);
		exibirPreFixado(r->dir);
	}
}

void exibirInFixado(Arvore *r) {
	//ERD
	if (r) {
		exibirInFixado(r->esq);
		printf("%d\t", r->dado);
		exibirInFixado(r->dir);
	}
}

void exibirPosFixado(Arvore *r) {
	//EDR
	if (r) {
		exibirPosFixado(r->esq);
		exibirPosFixado(r->dir);
		printf("%d\t", r->dado);
	}
}

void exibir(Arvore *r, int nivel) {
	if (r) {
		int i;
		exibir(r->dir, nivel + 1);

		for (i = 0; i < nivel; i++) {
			printf("  ");
		}

		printf("(%d)%d\n", nivel, r->dado);

		exibir(r->esq, nivel + 1);
	}

}

int contaNos(Arvore *r) {
	if (r) {
		return 1 + contaNos(r->esq) + contaNos(r->dir);
	} 
	return 0;
}

int somaNos(Arvore *r) {
	if (r) {
		return r->dado + somaNos(r->esq) + somaNos(r->dir);
	} 
	return 0;
}

Arvore *localiza(int valor, Arvore *r) {
	if (r) {
		if (valor == r->dado) return r; //achei

		if (valor < r->dado) return localiza(valor, r->esq);
		else return localiza(valor, r->dir);
	}
	return NULL;
}

int localizaNivel(int valor, Arvore *r) {
	if (r) {
		if (valor == r->dado) return 0;

		if (valor < r->dado) { //lado esquerdo
			int resposta = localizaNivel(valor, r->esq);
			if (resposta == -1) return -1;
			return resposta + 1;
		} else { //lado direito
			int resposta = localizaNivel(valor, r->dir);
			if (resposta == -1) return -1;
			return resposta + 1;
		}
	}
	return -1;
}

Arvore *podar(Arvore *r) {
   if (r) {
      if (!r->esq && !r->dir) {
         //remover o nodo
         free(r);
         return NULL;
      } else {
         r->esq = podar(r->esq);
         r->dir = podar(r->dir);
         return r;
      }
   }
   return NULL;
}

Arvore *remover(int valor, Arvore *r) {
   if (r) {
      if (valor == r->dado) {
         //achei
         //eh folha
         if (!r->esq && !r->dir) {
            free(r);
            return NULL;
         }
         //nao tem filho na esquerda
         if (!r->esq) {
            Arvore *temp = r->dir;
            free(r);
            return temp;
         }
         if (!r->dir) {
            Arvore *temp = r->esq;
            free(r);
            return temp;
         } else {
         //tem filho na esquerda e na direita e o da esquerda serah o novo pai
            Arvore *temp, *novoPai = r->esq, *rTemp;
            temp = r->esq->dir;
            r->esq->dir = r->dir;
            for(rTemp = r->dir; rTemp->esq; rTemp = rTemp->esq);
            
            rTemp->esq = temp;
            
            free(r);
            return novoPai;
         }
      }
      if (valor < r->dado) {
         r->esq = remover(valor, r->esq);
      } else {
         r->dir = remover(valor, r->dir);
      }
      return r;
   }
   return NULL;
}


int main() {
	Arvore *raiz = NULL;
	int i, num;

	srand(time(NULL));
	for (i = 0; i < (rand() % 7) + 8; i++) {
		num = rand() % 30;
		raiz = inserir(num, raiz);
		printf("%d\t", num);
	}
	printf("\n");
	exibir(raiz, 0);
	//printf("Total de elementos na arvore: %d\n", contaNos(raiz));
	//printf("Soma dos elementos na arvore: %d\n", somaNos(raiz));

	printf("Digite um numero para pesquisa: ");
	scanf("%d", &num);
   
   raiz = remover(num, raiz);
   
   
	//printf("O %d esta no endereco %p da arvore\n", num, localiza(num, raiz));

	//printf("O %d esta no nivel %d da arvore\n", num, localizaNivel(num, raiz));
   
   //printf("\n\n");
   
   //raiz = podar(raiz);
   
   exibir(raiz,0);

	return 1;
}
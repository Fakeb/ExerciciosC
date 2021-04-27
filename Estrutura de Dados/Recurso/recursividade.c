#include <stdlib.h>
#include <stdio.h>

void imprimirIntervalo(int ini, int fim){
	
	for(; ini <= fim; ini++){
		printf("%d\t", ini);
	}
	
	
}

void imprimirR(int ini, int fim){
	
	if(ini <= fim){
	
		printf("%d\t",ini);
		imprimirR(ini+1,fim);
		
	}
	
	
}
// usar lista, e a recursao nesse exemplo
/*
void imprimirPares(Celula *l){
	for(;l; l=l->prox){
		if(l->dado %2==0){
			printf("%d\t", l->dado)
				
			
		}
	}
}
void imprimirR(Celula *l){
	
	if(l){
		if(l->dado%2==0){
			printf("%d\t",l->dado);
		}
		imprimirR(l->prox);
	}

}
*/



int main(){
	int ini=4;
	int fim=10;
	
	//imprimirIntervalo(ini,fim);
	imprimirR(ini,fim);
		
}

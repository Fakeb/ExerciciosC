#include <stdio.h>
#include <stdlib.h>

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


int main(){
	int n = 4;
	int v[3];
	
	v[0] = 10;
	v[1] = 15;
	v[2] = 7;

	printf("Quantidade de Pares: %d ", contaPares(v, n));
		
	return 0;
}



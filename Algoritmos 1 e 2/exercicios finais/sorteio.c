//Desenvolver um sistema para geração automática de números para a MEGA SENA. 
//Requisitos: a) o sistema deve gerar 6 dezenas, aleatoriamente, em cada cartão;
//			  b) o usuário poderá escolher o número de cartões desejado para geração(1..10);
//			  c) uma dezena sorteada e presente em um cartão, jamais poderá estar em outro;
//			  d) exibir na tela do computador, os cartões com suas respectivas dezenas em ordem crescente;
//			  e) permitir que o sistema continue em execução, até que o usuário deseje encerrá-lo;
//			  f) utilizar funções;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeradorCartoes();

void GeradorCartoes(){
	
	srand(time(NULL));
	
	int i,j,aux;
	int cartela[60];
	int num,b,x;
		
		printf("Digite quantas cartelas deseja gerar: ");
		scanf("%d",&num);
	
		for(i=0;i<num*6;i++){
			do{
				cartela[i]=rand()%60;
				aux=0;
				for (j=0;j<i;j++) {
					if (cartela[i]==cartela[j]) {
						aux=1;
					}	
				}
			}while(aux==1);
			printf("  %d",cartela[i]);
		}
}

int main(){
	printf("***Trabalho incompleto***\n\n");
	GeradorCartoes();
	return 0;
}

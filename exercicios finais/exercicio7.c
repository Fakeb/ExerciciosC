/*/
7. Ler	 um	 vetor	 de	 inteiros	 com	 20	elementos.	Desenvolver	 uma	 função	 que	encontra	 o	maior	elemento	 do	
vetor	e	retorne	o	ponteiro	para	o	maior	elemento.	A	função	main deve	exibir	o	maior	elemento	do	vetor
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encontrar(int vetor[20]);

int encontrar(int vetor[20]){

	int elemento=0, *ponteiro,i;
	
	for(i=0;i<=20;i++){
		
		if(vetor[i]>elemento){
			
			elemento=vetor[i];
			
		}
	}	
	
	ponteiro = elemento;
	
	return ponteiro;
}

int main(){
	
	int vetor[20],i;
	
	printf("Digite 20 elementos para descobrirmos qual o maior: \n\n");
	
	for(i=0;i<=20;i++){
		printf("Digite o elemento %d: ",i);
		scanf("%d",&vetor[i]);
		system("cls");
	}
	
	int retorno = encontrar(vetor);
	
	printf("O maior numero digitado foi %d  \n\n",retorno);
	
	system("pause");
	
	return 0;
}

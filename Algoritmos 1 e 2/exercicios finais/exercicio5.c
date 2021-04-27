/*/
5. Ler	um	vetor	com	10	elementos	inteiros	e	um	valor	inteiro.	Usar	uma	função	para	contar	o	número	de	vezes	
que	o	valor	aparece	no	vetor.	A	função	main deve	mostrar	este	valor.
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contador(int vetor[10],int inteiro);

int main(){
	
	int vetor[10], i, inteiro; 
	
	printf("Digite 10 numeros inteiros, depois um numero para vermos quantas vezes esse foi digitado nos primeiros 10: \n\n");
	
	for(i=1;i<=10;i++){
		printf("Digite o elemento %d: ",i);
		scanf("%d",&vetor[i]);
		system("cls");
	}
	
	printf("Digite um numero: ");
	scanf("%d",&inteiro);
	
	printf("\n");
	
	contador(vetor,inteiro);
	
	system("pause");
	
	return 0;
	
}
void contador(int vetor[10],int inteiro){
		
	
	int cont=0,i;
	
	for(i=1;i<=10;i++){
		if(vetor[i]==inteiro){
			cont++;
		}
		
	}
	
	printf("Numero de vezes que apareceu o numero: %d\n\n",cont);
	
}

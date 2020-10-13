//int vetor[3] = {5,3,2}       // printf("vetor %d",vetor[0]);
//      vetor     0 1 2        // printf("vetor %d",vetor[1]);
//ler 10 numeros, armazena-los em um vetor, exibir o valor deles;


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,valor[10];
    for(i=0;i<10;i++){
        printf("\nDigite o %d valor: ",i);
        scanf("%d",&valor[i]);
    }
    for(i=0;i<10;i++){
        printf("\nValor[%d]: %d\n",i,valor[i]);
    }
    system("pause");
    return 0;
}

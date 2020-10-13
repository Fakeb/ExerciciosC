//Ler 5 numeros inteiros, armazena-los em um vetor e exibir o resultado da soma de todos os elementos contidos no vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor[6],i,soma=0;
    printf("Soma de 5 números: \n\n");
    for(i=1;i<6;i++){
        printf("Digite o valor %d: ",i);
        scanf("%d",&valor[i]);
        soma=soma+valor[i];
        system("cls");
    }
    printf("Resposta: %d\n\n",soma);
    system("pause");
    return 0;
}

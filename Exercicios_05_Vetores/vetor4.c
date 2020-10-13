//ler 10 numeros inteiros, armazena-los em um vetor, dobrar o valor apenas dos numeros pares contidos nesse vetor e exibir o conteudo dele na tela

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor[11],i;
    printf("Digite 10 valores, os pares serão dobrados: \n\n");
    for(i=1;i<11;i++){
        printf("Digite o valor %d: ",i);
        scanf("%d",&valor[i]);
        if(valor[i]%2==0){
            valor[i]=valor[i]*2;
        }
        system("cls");
    }
    for(i=1;i<11;i++){
        printf("Valor %d: %d\n\n",i,valor[i]);
    }
    system("pause");
    return 0;
}

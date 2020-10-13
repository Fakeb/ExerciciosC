//Escrever um algoritmo para ler quatro valores inteiros e escrever na tela o maior e o menor
//deles. Considere que todos os valores são diferentes


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4;

        printf("Digite quatro valores inteiros diferentes!\n\n");

        printf("\nDigite o primeiro numero inteiro: ");
        scanf("%d",&n1);

        printf("\nDigite o segundo numero inteiro: ");
        scanf("%d",&n2);

        printf("\nDigite o terceiro numero inteiro: ");
        scanf("%d",&n3);

        printf("\nDigite o quarto numero inteiro: ");
        scanf("%d",&n4);

    if ((n1>n2)&&(n1>n3)&&(n1>n4)){
        printf("\nO primeiro numero e maior\n\n\n");
    }

    else if ((n2>n1)&&(n2>n3)&&(n2>n4)){
        printf("\nO segundo numero e maior\n\n\n");
    }

    else if ((n3>n1)&&(n3>n2)&&(n3>n4)){
        printf("\nO terceiro numero e maior\n\n\n");
    }

    else if ((n4>n1)&&(n4>n2)&&(n4>n3)){
        printf("\nO quarto numero e maior\n\n\n");
    }
    system("pause");
    return 0;
}

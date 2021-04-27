//Escrever um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na
//tela os que são superiores à média.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4;

    printf("Digite quatro valoros inteiros\n\n");
    printf("\nDigite o primeiro valor: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo valor: ");
    scanf("%d",&n2);
    printf("\nDigite o terceiro valor: ");
    scanf("%d",&n3);
    printf("\nDigite o quarto valor: ");
    scanf("%d",&n4);

    int media=(n1+n2+n3+n4)/4;
        printf("\nMedia=%d\n\n",media);

    if((n1==media)&&(n2==media)&&(n3==media)&&(n4==media)){
        printf("\nOs valores sao iguais\n\n");
    }
    if((n1>media)){
        printf("\nO primeiro valor e maior que a media\n\n");
    }
    if((n2>media)){
        printf("\nO segundo valor e maior que a media\n\n");
    }
    if((n3>media)){
        printf("\nO terceiro valor e maior que a media\n\n");
    }
    if((n4>media)){
        printf("\nO quarto valor e maior que a media\n\n");
    }
    system("pause");
    return 0;
}

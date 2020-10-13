//Escreva um algoritmo para ler as medidas de uma piscina e cobrar o pre�o

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float larg,compr,prof,m3,orcamento;

    printf("Piscinas SM\n");
    printf("Orcametos:\n");

    printf("Digite a largura:");
    scanf("%f",&larg);
    printf("Digite o comprimento:");
    scanf("%f",&compr);
    printf("Digite a profundidade:");
    scanf("%f",&prof);
    printf("Digite o valor do M3 cobrado:");
    scanf("%f",&m3);

    orcamento=(larg*compr*prof)*m3;

    printf("Valor final do orcamento:%.2f\n\n",orcamento);

    system("pause");
    return 0;
}

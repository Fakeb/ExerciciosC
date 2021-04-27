//Escreva um algoritmo para calcular a segunda lei de Newton.
//Solicite os cados, efetue o cálculo e apresente o resultado


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float forca,aceleracao,massa;

    printf("Digite o valor da massa:\t");
    scanf("%f",&massa);
    printf("Digite o valor da aceleracao:\t");
    scanf("%f",&aceleracao);

    forca=massa*aceleracao;

    printf("Resultado:%.2f\n",forca);

    system("pause");
    return 0;
}

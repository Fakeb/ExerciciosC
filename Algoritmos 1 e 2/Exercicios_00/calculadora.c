#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1,valor2;

    printf("Bem-vindo ao Calc 2.0\n");
    printf("Digite o primeiro valor:");
    scanf("%f",&valor1);
    printf("Digite o segundo valor:");
    scanf("%f",&valor2);

    float soma,sub,mult,div;

    soma=valor1+valor2;
    sub=valor1-valor2;
    mult=valor1*valor2;
    div=valor1/valor2;

    printf("Resultados\n\n");
    printf("Soma:%.2f\n\n",soma);
    printf("Sub:%.2f\n\n",sub);
    printf("Mult:%.2f\n\n",mult);
    printf("Div:%.2f\n\n",div);

    system("pause");
    return 0;
}

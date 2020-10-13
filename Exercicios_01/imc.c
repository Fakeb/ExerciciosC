//Criar um algoritmo para calcular o imc


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imc,peso,altura;

    printf("digite seu peso:\t");
    scanf("%f",&peso);
    printf("digite sua altura:\t");
    scanf("%f",&altura);

    imc=peso/(altura*altura);

    printf("Seu imc:%.2f\n",imc);

    system("pause");
    return 0;
}

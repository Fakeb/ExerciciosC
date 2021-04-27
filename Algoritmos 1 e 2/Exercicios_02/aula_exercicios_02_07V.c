//Existem n�meros de 4 d�gitos (entre 1000 e 9999) que obedecem � seguinte caracter�stica: se
//dividirmos o n�mero em dois n�meros de dois d�gitos, um composto pela dezena e pela
//unidade, e outro pelo milhar e pela centena, se somarmos estes dois novos n�meros gerando
//um terceiro, o quadrado deste terceiro n�mero � exatamente o n�mero original de quatro
//d�gitos. Por exemplo:
//2025 -> dividindo: 20 e 25 -> somando 20 e 25 tem-se 45 � 452
//= 2025
//Escreva um programa para ler um n�mero e verificar se ele obedece a esta caracter�stica


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,parte1,parte2,soma;
    float resposta;

    printf("Existem numeros de 4 digitos (entre 1000 e 9999) que obedecem uma caracteristica, tente um:\n");

    printf("\nDigite um numero de 1000 a 9999 --->   ");
    scanf("%d",&num);

    if(num > 9999){
        printf("\nNumero invalido\n\n");
    }
    else if(num < 1000){
        printf("\nNumero invalido\n\n");
    }
    else{
        parte1 = num/100;
        parte2 = num%100;
        soma = parte1+parte2;
        resposta = soma*soma;

        printf("\nDividindo --->  %d e %d\n",parte1,parte2);
        printf("\nSomando %d e %d --->  %d \n",parte1,parte2,soma);
        printf("\n%d ao quadrado ---> %.1f\n",soma,resposta);
    }
    if (resposta==num){
        printf("\nO numero obedece a caracteristica\n\n\n");
    }
    else{
        printf("\nO numero nao obedece a caracteristica\n\n\n");
    }
    system("pause");
    return 0;
}

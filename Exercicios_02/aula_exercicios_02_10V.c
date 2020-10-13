//Escrever um algoritmo que leia valores inteiros em duas variáveis distintas e faça o seguinte:
//se o resto da divisão da primeira variável pela segunda for 1, mostre a soma dessas variáveis
//mais o resto da divisão; se o resto desta divisão for 2, escreva se os valores das variáveis são
//pares ou ímpares; se o resto desta divisão for igual a 3, multiplique a soma dos valores lidos
//pelo primeiro valor; se for igual a 4 divida a soma dos números lidos pelo segundo valor, se o
//segundo valor for diferente de zero. Em qualquer outra situação mostre o quadrado dos
//números lidos.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result,soma,mult,div,quadr1,quadr2;

    printf("Digite valores inteiros:\n");

    printf("\nDigite o primeiro valor: ");
    scanf("%d",&num1);

    printf("\nDigite o segundo valor: ");
    scanf("%d",&num2);

    result=num1/num2;

    if(result==1){
        soma=num1+num2+1;
        printf("\nA soma do valor 1 e do valor 2 mais o resto e: %d\n\n",soma);
    }

    if(result==2){
        if(num1&&num2%2==0){
            printf("\nO valor1 e valor2 sao pares\n\n");
        }
        else{
            printf("\nOs valores das variaveis sao impares\n\n");
        }
    }

    if(result==3){
        mult=(num1+num2)*num1;
        printf("\nA soma dos dois valores multiplicada ao primeiro valor e: %d\n\n",mult);
    }

    if(result==0){
        printf("\nNao ha divisao por zero\n");
    }

    if(result==4){
        if(num2>0){
            div=(num1+num2)/num2;

            printf("\nA soma dos dois valores dividida pelo segundo valor e: %d\n\n",div);
        }

        printf("\nNao ha divisao por zero\n\n");
    }

    else{
        quadr1=num1*num1;
        quadr2=num2*num2;

        printf("\nO quadrado do primeiro valor e: %d\n\n",quadr1);
        printf("\nO quadrado do segundo valor e: %d\n\n",quadr2);
    }
    system("pause");
    return 0;
}

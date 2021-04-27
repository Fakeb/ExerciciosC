//Escreva um algoritmo que l� tr�s valores para os lados de um tri�ngulo (cada lado do
//tri�ngulo deve ser menor que a soma dos outros dois lados). O programa deve verificar se os
//lados fornecidos formam realmente um tri�ngulo, e caso esta condi��o seja verdadeira, se o
//tri�ngulo � equil�tero (todos lados iguais), is�sceles (dois lados iguais) ou escaleno (todos
//lados diferentes).


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1,lado2,lado3;

    printf("Para formar um triangulo:\n");
    printf("\nDigite o primeiro valor: ");
    scanf("%f",&lado1);

    printf("\nDigite o segundo valor: ");
    scanf("%f",&lado2);

    printf("\nDigite o terceiro valor: ");
    scanf("%f",&lado3);

    if( lado1<(lado2+lado3)|| lado2<(lado1+lado3)|| lado3<(lado1+lado2)){
        printf("\nEstes valores formam um triangulo de tipo:\n");

        if(lado1==lado2 && lado1!=lado3 || lado2==lado3 && lado2!=lado1){
            printf("\nTriangulo Isosceles\n\n\n");
        }
        if(lado1==lado2 && lado1==lado3){
            printf("\nTriangulo equilatero\n\n\n");
        }

        if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
            printf("\nTriangulo Escaleno\n\n\n");
        }
    }
    else{
        printf("\nOs valores nao formam um triangulo\n\n\n");
    }
    system("pause");
    return 0;

}

//3- escrever um algoritmo para ler um numero menor que 1000, calcular e mostrar os numeros impares maiores que o numero lido e menores que 1000;


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero menor que 1000:  ");
    scanf("%d",&n);

    if(n<=1000){
        printf("\nNumeros impares entre %d e 1000\n\n",n);

        for(;n<1000;n++){

            if(n%2==1){
                printf("%d  ",n);
            }
    }
    }
    else{
        printf("\nNumero maior que 1000\n\n");
    }
    system("pause");
    return 0;
}

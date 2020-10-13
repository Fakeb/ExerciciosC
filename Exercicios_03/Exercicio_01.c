//1-escrever um algoritmo para ler um numero(entre 1 e 10), calcular e exibir a tabuada desse numero lido;


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,result;

    printf("Digite um numero entre 1 e 10:  ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){

    result=n*i;

        if (n<=10){
            printf("%d x %d = %d\n",n, i, result);
        }
        else {
            printf("\nDigitou um diferente de 1 a 10\n\n");
        }
    }
    system("pause");
    return 0;
}

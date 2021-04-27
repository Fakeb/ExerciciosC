//Escrever um algoritmo para ler um valor inteiro e verificar se este valor é par ou impar



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Teste para numeros impares ou pares:\n");

    printf("\nDigite um numero inteiro: ");
    scanf("%d",&valor);

    if(valor%2==0){
        printf("\nNumero par\n\n\n");
    }
    else{
        printf("\nNumero impar\n\n\n");
    }
    system("pause");
    return 0;
}

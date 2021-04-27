//Somar uma sequencia de numeros digitados, enquanto tais numeros forem diferentes de 0. Exibir o resultado da soma


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma=0;

    printf("Soma infinita, 0= Fim do Programa\n\n");

    while(n!=0){
        printf("Digite um numero: ");
        scanf("%d",&n);
        soma=soma+n;
    }

    printf("\n\nSoma Final:%d \n\n",soma);

    system("pause");
    return 0;
}

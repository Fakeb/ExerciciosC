#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2;

    printf("Digite o primeiro valor:");
    scanf("%d",&numero1);
    printf("Digite o segundo valor:");
    scanf("%d",&numero2);

    if(numero1>numero2){
        printf("Resposta: o primeiro numero e maior\n");
    }
    if(numero2>numero1){
        printf("Resposta: o segundo numero e maior\n");
        }
    else{
        printf("Resposta: os dois numeros sao iguais\n\n");
    }

    system("pause");
    return 0;
}

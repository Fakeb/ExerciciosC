//4-Ler dois numeros e calcular o somatorio do intervalo. Exemplo 2 e 7


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    int soma=0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&n2);

    if(n1<n2){
        n1++;

        for(n1;n1<n2;n1++){
            soma=soma+n1;
        }
        printf("\nA soma entre os numeros: %d\n\n",soma);
    }
    else if(n1>n2){
        n2++;

        for(n2;n1>n2;n2++){
            soma=soma+n2;
        }
        printf("\nA soma entre os numeros: %d\n\n",soma);
    }
    else{
        printf("\nVoce digitou dois numeros iguais\n\n");
    }
    system("pause");
    return 0;
}

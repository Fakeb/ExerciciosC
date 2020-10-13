//.2f duas casas dps da virgula
//(valor%2==0)
//vetor for



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10],i=0,numero,somatorio=0,media;
    float valor1,valor2;

    printf("Digite o primeiro numero: ");
    scanf("%f",&valor1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&valor2); // questao 1

    printf("\nResultado do produto:%.2f\n ",(valor1*valor2)); // questao 2


    for(i=0;i<10;i++){
        printf("\nDigite numeros pares para preencher o vetor(10): ");
        scanf("%d",&numero);

        if(numero%2==0){
            numeros[i]=numero;
        }
        else{
            printf("\nValor invalido, Utilize numeros pares");
        i--;
        }
    } // questao 3

    for(i=0;i<10;i++){
        printf("\n %d ",numeros[i]);
    } // questao 4

    for(i=0;i<10;i++){
        somatorio=somatorio+numeros[i];
    }

    media=somatorio/10;

    printf("\nValores maiores que a media: ");

    for(i=0;i<10;i++){
        if(numeros[i]>media){
            printf("\n %d",numeros[i]);
        }
    } // questao 5






    return 0;
}

//Escrever um algoritmo para ler dois valores e uma das seguintes operações a serem
//executadas (codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 –
//Divisão). Calcular e escrever o resultado dessa operação sobre os dois valores lidos.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, resposta;
    int op;

    printf("CALCULADORA");

    printf("\n\nDigite o primeiro valor: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &num2);

    printf("\nDeseja (1)somar (2)subtrair (3)multiplicacao (4)divisao --> ");
    scanf("%d", &op);

    if (op==1) {
        resposta = num1 + num2;
        printf("\nResposta: %.2f\n\n\n", resposta);
    }

    else if (op==2) {
        resposta = num1 - num2;
        printf("\nReposta: %.2f\n\n\n", resposta);
    }

    else if (op==3) {
        resposta = num1 * num2;
        printf("\nReposta: %.2f\n\n\n", resposta);
    }

    else if (op==4) {
        resposta = num1 / num2;
        printf("\nReposta: %.2f\n\n\n", resposta);
    }
    system("pause");
    return 0;
}

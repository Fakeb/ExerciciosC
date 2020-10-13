//Escrever um algoritmo que leia as coordenadas cartesianas de dois pontos no plano. Se
//traçarmos apenas linhas paralelas aos eixos x e y, estes dois pontos são suficientes para
//definir um retângulo. Baseado nisto, faça com que o algorítmo calcule a área do retângulo.
//Lembre-se de que o valor da área não pode ser negativo.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pontoX,pontoY;
    float area;

    printf("Em um plano cartesiano com apenas 2 pontos podemos formar um retangulo:\n");

    printf("\nDigite um valor para X: ");
    scanf("%f",&pontoX);
    printf("\nDigite um valor para Y: ");
    scanf("%f",&pontoY);

    area = pontoX * pontoY;

    printf("\nA area do retangulo:  %.2f \n\n\n",area);

    system("pause");
    return 0;
}

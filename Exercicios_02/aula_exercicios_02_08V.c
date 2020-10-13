//Escrever um algoritmo que leia as coordenadas cartesianas de dois pontos no plano. Se
//tra�armos apenas linhas paralelas aos eixos x e y, estes dois pontos s�o suficientes para
//definir um ret�ngulo. Baseado nisto, fa�a com que o algor�tmo calcule a �rea do ret�ngulo.
//Lembre-se de que o valor da �rea n�o pode ser negativo.



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

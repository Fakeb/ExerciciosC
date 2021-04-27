//Escrever um algoritmo para ler a quantidade de horas aula dadas por dois professores e o
//valor por hora recebido por cada um deles. Mostrar na tela qual dos professores tem o maior
//salário total.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prof1,prof2,valor1,valor2;

    printf("Salario dos professores:\n");

    printf("\nDigite o total de horas do primeiro professor: ");
    scanf("%d",&prof1);

    printf("\nDigite o total de horas do segundo professor: ");
    scanf("%d",&prof2);

    printf("\nDigite o valor por horas do primeiro professor: ");
    scanf("%d",&valor1);

    printf("\nDigite o valor por horas do segundo professor: ");
    scanf("%d",&valor2);

    int salario1=prof1*valor1;
    int salario2=prof2*valor2;

    printf("\n\n\nSalario do primeiro professor=%d\n\n",salario1);
    printf("\nSalario do segundo professor=%d\n\n",salario2);

    if(salario1>salario2){
        printf("\nO primeiro professor ganha mais\n\n\n");
    }
    if(salario2>salario1){
        printf("\nO segundo professor ganha mais\n\n\n");
    }
    system("pause");
    return 0;
}

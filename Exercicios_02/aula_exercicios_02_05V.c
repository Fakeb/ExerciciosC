//Escrever um algoritmo para ler duas notas de um aluno e escrever na tela a palavra
//“Aprovado” se a média das duas notas for maior ou igual a 7,0. Caso a média seja inferior a
//7,0, o programa deve ler a nota do exame e calcular a média final. Se esta média for maior ou
//igual a 5,0, o programa deve escrever “Aprovado”, caso contrário deve escrever
//“Reprovado”.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2, notaExame, ultimaMedia;

    printf("Boletim:\n");

    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f",&nota1);

    printf("\nDigite a segunda nota do aluno:  ");
    scanf("%f",&nota2);

    float media=(nota1+nota2)/2;

    if(media >=7) {
        printf("\nAprovado\n\n\n");
    }

    else {
        printf("\nDigite a nota do exame: ");
        scanf("%f",&notaExame);
        ultimaMedia = (notaExame + media)/2;
    if (ultimaMedia >= 5) {
        printf("\nAprovado\n\n\n");
        }
    else {
        printf("\nReprovado\n\n\n");
        }
    }

    system("pause");
    return 0;
}

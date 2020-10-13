//Escreva um algoritmo para ler as informa�oes de tres pessoas
//Se for masculino ou tiver mais que 35 anos, esta dentro dos requisitos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[100],nome2[100],nome3[100];
    char genero1,genero2,genero3;
    int idade1,idade2,idade3;

    printf("Digite o nome, genero masculino(M) ou feminino(F) e idade de tres pessoas\n");

    printf("\nDigite o nome da primeira pessoa:  ");
    scanf("%s",nome1);
    fflush(stdin);
    printf("Digite o genero(M) ou (F) da primeira pessoa:  ");
    scanf("&c ",&genero1);
    fflush(stdin);
    printf("Digite a idade da primeira pessoa:  ");
    scanf("%d",&idade1);
    fflush(stdin);

    printf("\nDigite o nome da segunda pessoa:  ");
    scanf("%s",nome2);
    fflush(stdin);
    printf("Digite o genero(M) ou (F) da segunda pessoa:  ");
    scanf("&c ",&genero2);
    fflush(stdin);
    printf("Digite a idade da segunda pessoa:  ");
    scanf("%d",&idade2);
    fflush(stdin);

    printf("\nDigite o nome da terceira pessoa:  ");
    scanf("%s",nome3);
    fflush(stdin);
    printf("Digite o genero(M) ou (F) da terceira pessoa:  ");
    scanf("&c ",&genero3);
    fflush(stdin);
    printf("Digite a idade da terceira pessoa:  ");
    scanf("%d",&idade3);
    fflush(stdin);

    if ((genero1=='m')||(idade1>34)){
        printf("\n%s",nome1);
        printf("%c ",genero1);
        printf("%d\n",idade1);
    }
    if ((genero2=='m')||(idade2>34)){
        printf("\n%s",nome2);
        printf("%c ",genero2);
        printf("%d\n",idade2);
    }
    if ((genero3=='m')||(idade3>34)){
        printf("\n%s",nome3);
        printf("%c ",genero3);
        printf("%d\n",idade3);
    }
    else{
        printf("\nNenhuma pessoa esta nos parametros\n\n");
    }

    return 0;
}

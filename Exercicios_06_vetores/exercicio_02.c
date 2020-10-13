//2- criar dois vetoers de inteiros, ler 5 numeros e armazenar em cada vetor. após trocar os elementos do primeiro vetor com o segundo, apresentando na tela os conteudos originais e finais de cada vetor;
//A                 B                A                   B
//2 4 9 3 7         1 5 2 8 6   =>   1 5 2 8 6           2 4 9 3 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[5],vetorB[5],i,j,vetorJ[5];
    for(i=0;i<5;i++){
        printf("Digite os 5 numeros da primeira sequencia: \n");
        printf("- ");
        scanf("%d",&vetorA[i]);
        system("cls");
    }
    for(i=0;i<5;i++){
        printf("Digite os 5 numeros da segunda sequencia: \n");
        printf("- ");
        scanf("%d",&vetorB[i]);
        system("cls");
    }
    for(i=0;i<5;i++){
        printf("A: %d / B: %d \n",vetorA[i],vetorB[i]);
    }
    for(i=0;i<5;i++){
        j = vetorA[i];
        vetorA[i] = vetorB[i];
        vetorB[i] = j;
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("A: %d / B: %d \n",vetorA[i],vetorB[i]);
    }
    system("pause");
    return 0;
}

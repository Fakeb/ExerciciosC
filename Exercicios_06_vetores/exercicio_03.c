//3- criar 3 vetores, lendo 5 numeros inteiros e armazenando-os nos 2 primeiros vetores. Após, o terceiro vetor irá receber o resultado do produto entre os 2 primeiros vetores.
//A                    C
//2 5 1 3 9        ==> 8 15 7 24 18
//B
//4 3 7 8 2


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[5],vetorB[5],vetorC[5],i,j;
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
        vetorC[i]=vetorA[i]*vetorB[i];
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("C: %d \n",vetorC[i]);
    }
    system("pause");
    return 0;
}

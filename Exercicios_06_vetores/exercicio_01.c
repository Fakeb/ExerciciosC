//1- criar um vetor de caracteres, ler 5 letras, armazenando-as no vetor e exibir, no final, em quais posi��es do vetor ha vogais;
//vetor:
//conir = posi�ao 1 tem vogal, posi�ao 3 tem vogal
//01234

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char vetor[6];
    int i;
    for(i=1;i<6;i++){
        printf("Digite 5 letras\n");
        printf("- ");
        scanf("%c",&vetor[i]);
        fflush(stdin);
        system("cls");
    }
    for(i=1;i<=6;i++){
        if((vetor[i]=='a')||(vetor[i]=='A')){
            printf("Letra A encontrada na posi��o %d\n",i);
        }
        else if((vetor[i]=='e')||(vetor[i]=='E')){
            printf("Letra e encontrada na posi��o %d\n",i);
        }
        else if((vetor[i]=='i')||(vetor[i]=='I')){
            printf("Letra i encontrada na posi��o %d\n",i);
        }
        else if((vetor[i]=='o')||(vetor[i]=='O')){
            printf("Letra o encontrada na posi��o %d\n",i);
        }
        else if((vetor[i]=='u')||(vetor[i]=='U')){
            printf("Letra u encontrada na posi��o %d\n",i);
        }
    }
    system("pause");
    return 0;
}

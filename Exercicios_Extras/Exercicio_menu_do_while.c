#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu;
    do{
    printf("Digite 1 para Previs�o do tempo\n");
    printf("Digite 2 para Cota��o do Dollar\n");
    printf("Digite 3 para Cota��o do Euro\n");
    printf("Digite 4 para Principal not�cia do dia\n");
    printf("Digite 5 para Sair\n");
    printf("\nDigite um n�mero: ");
    scanf("%d",&menu);
    system("cls");
    switch(menu){
        case 1: {
            printf("   Not�cia: \n\n");
            printf(" 22�C Ensolarado\n\n");
            break;
        }
        case (2): {
            printf("   Not�cia: \n\n");
            printf(" R$ 3,578\n\n");
            break;
        }
        case (3):{
            printf("   Not�cia: \n\n");
            printf(" R$ 4,242\n\n");
            break;
        }
        case(4):{
            printf("   Not�cia: \n\n");
            printf(" Enem 2018 recebe 1,4 milh�o de inscri��es em 24 horas \n\n");
            break;
        }
    }
    }while(menu!=5);
    system("pause");
    return 0;
}

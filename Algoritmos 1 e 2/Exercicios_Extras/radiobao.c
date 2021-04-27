//Fazer um radio onde + = aumenta 0.1 e - = diminui 0.1 . Tem os canais 1 até 6 (estações 88.0 até 108.00)


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char menu;
    int i,Reiner;
    float ch=88.0,ch1=0,ch2=0,ch3=0,ch4=0,ch5=0,ch6=0;
    for(;;){
        system("cls");
        printf("  Rádio FM\n  CH %.1f\n",ch);
        printf("\n1,2,3,4,5,6 para salvar os rádio ou selecionar\n");
        printf("C para sobrescrever\n");
        printf("+ ou - para trocar os canais\n\nAperte: ");
        scanf("%c",&menu);
        switch(menu){
            case '+': {
                if(ch<107.9){
                    ch = ch + 0.1;
                }
                break;
            }
            case '-': {
                if(ch>88.0){
                    ch = ch - 0.1;
                }
                break;
            }
            case '1': {
                if(ch1==0){
                    ch1= ch;
                }
                else{
                    ch=ch1;
                }
                break;
            }
            case '2': {
                if(ch2==0){
                    ch2 = ch;
                }
                else{
                    ch = ch2;
                }
                break;
            }
            case '3': {
                if(ch3==0){
                    ch3 = ch;
                }
                else{
                    ch = ch3;
                }
                break;
            }
            case '4': {
                if(ch4==0){
                    ch4 = ch;
                }
                else{
                    ch = ch4;
                }
                break;
            }
            case '5': {
                if(ch5==0){
                    ch5 = ch;
                }
                else{
                    ch = ch5;
                }
                break;
            }
            case '6': {
                if(ch6==0){
                    ch6 = ch;
                }
                else{
                    ch = ch6;
                }
                break;
            }
            case 'c':
            case 'C': {
                printf("\nDigite o Novo canal: ");
                scanf("%d",&Reiner);
                switch(Reiner){
                    case 1 :{
                        ch1 = ch;
                        break;
                    }
                    case 2 :{
                        ch2 = ch;
                        break;
                    }
                    case 3 :{
                        ch3 = ch;
                        break;
                    }
                    case 4 :{
                        ch4 = ch;
                        break;
                    }
                    case 5 :{
                        ch5 = ch;
                        break;
                    }
                    case 6 :{
                    ch6 = ch;
                    break;
                }
                }
                break;
            }
        }
    }
    system("pause");
    return 0;
}

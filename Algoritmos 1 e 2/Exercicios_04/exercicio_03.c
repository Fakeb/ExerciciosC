//Desenvolva um algoritmo para imprimir, na tela do computador, o seguinte desenho;
//(Porem de base 30)
//*
//**
//***
//****

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int base=30,ast,i;

    for (i=1;i<=base;i++){
        for (ast=1;ast<=i;ast++){
            printf("*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

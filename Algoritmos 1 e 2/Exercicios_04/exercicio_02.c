//Contar a quantidade de numeros pares e impares, digitados pelo usuario, ate que este digite 0. Exibir quantidade e estatistica: %pares e %impares

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ppar=0,pimpar=0,par=0,impar=0;
    int valor,cont=0;

    printf("Digite um numero par ou impar (Digite 0 para terminar)\n\n");

    while(valor!=0){

        printf("Digite um numero: ");
        scanf("%d",&valor);
        cont++;

        if(valor%2==0){
            par++;
        }

        else{
            impar++;
        }
    }

    par--;
    cont--;
    pimpar = (impar/cont)*100;
    ppar = (par/cont)*100;

    printf("\nImpar foi digitado %.f vezes, ou seja, %.2f%%",impar,pimpar);

    printf("\nPar foi digitado %.f vezes, ou seja, %.2f%%\n\n",par,ppar);

    system("pause");
    return 0;
}

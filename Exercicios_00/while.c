//continuar digitando enquanto for par

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    while(i){
        printf("Digite um numero: ");
        scanf("%d",&n);
        if(numero%2==0){
            printf("\nNumero par");
        }
        else{
            printf("\nNumero impar\n");
        }
    }

    return 0;
}

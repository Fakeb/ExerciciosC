//2-escrever um algoritmo para exibir toda a tabuada de 1 ate 10;


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    for(n=1;n<=10;n++){
        printf("TABUADA DO %d\n", n);

        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",n,i,(n*i));
        }
        printf("-------------------------\n");
    }
    system("pause");
    return 0;
}

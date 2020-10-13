//criar uma matriz de tamanho 3x4
//popula-la com numeros crescentes a partir de 10
//exibir a matriz na tela do computador
// 10 11 12 13
// 14 15 16 17
// 18 19 20 21


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][4],i,j,valor=10; //i = linha , j = coluna;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            matriz[i][j]=valor;
            valor++;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

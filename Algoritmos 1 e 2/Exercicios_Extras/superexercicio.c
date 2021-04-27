#include <stdio.h>

#include <stdlib.h>



int main()

{

    int v1,v2,i,j;

    printf("-- Digite dois valores, se par ira dobrar, se impar ira triplicar --\n");

    printf("Digite o primeiro valor: ");

    scanf("%d",&v1);



    if(v1%2==0){

        v1=v1*2;

    }

    else{

        v1=v1*3;

    }



    printf("\nDigite o segundo valor: ");

    scanf("%d",&v2);



    if(v2%2==0){

        v2=v2*2;

    }

    else{

        v2=v2*3;

    }



    int valor[2],matriz[2][2],n,invalido;



    valor[0]=v1;

    valor[1]=v2;



    printf("\nPrimeiro valor: %d \nSegundo valor: %d",valor[0],valor[1]);



    do{

        printf("\n\nDigite um numero inteiro maior que um para multiplicar pelos anteriores: ");

        scanf("%d",&n);



        if(n<1){

            printf("\nNumero invalido, Digite um numero inteiro maior que um: ");

            invalido=1;

        }

        else{

            invalido=0;

        }

    }

    while(invalido==1);



    for(i=0;i<2;i++){

        valor[i]=valor[i]*n;

    }



    matriz[0][0]=valor[0];

    matriz[0][1]=valor[1];

    matriz[1][0]=valor[0]*2;

    matriz[1][1]=valor[1]*2;



    printf("\n");

    printf("Vetor:");

    printf("\n");



    for(i=0;i<2;i++){

        printf("%d ",valor[i]);

    }



    printf("\n");

    printf("Matriz:");



    for(i=0;i<2;i++){

        printf("\n");

        for(j=0;j<2;j++){

            printf("%d ",matriz[i][j]);

    }

    }

    printf("\n");



    system("pause");

    return 0;

}



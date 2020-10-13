#include <stdio.h>

#include <stdlib.h>



int v1,v2,op,resp;



void SolicitarDados(){

    printf("Digite o primeiro valor: ");

    scanf("%d",&v1);

    printf("Digite o segundo valor: ");

    scanf("%d",&v2);

    printf("Digite a operacao 1=soma, 2=multiplicacao, 3=subtracao, 4=divisao: ");

    scanf("%d",&op);

}

void Calcular(){

    switch(op){

        case 1: (resp=v1+v2);break;

        case 2: (resp=v1*v2);break;

        case 3: (resp=v1-v2);break;

        case 4: (resp=v1/v2);break;

    }

    printf("Resposta: %d",resp);

}

int main(){

    SolicitarDados();

    Calcular();

    return 0;

}



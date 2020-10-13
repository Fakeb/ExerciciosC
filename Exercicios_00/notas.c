#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota,i,n,maior=0;

    printf("Defina o numero de notas: ");
    scanf("%d",&n);

    printf("\nDigite as notas dos alunos:\n");

    for(i=1;i<=n;i++){
        printf("\nAluno:%d Nota:",i);
        scanf("%d",&nota);
        if(nota>maior){
        maior = nota;
    }
    }
    printf("\n\nA maior nota: %d",maior);
    printf("\n\n--------------------------\n");
    system("pause");
    return 0;
}

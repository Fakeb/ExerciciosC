/*/
1. Ler	uma	string	e	chamar	uma	função	para	contar	quantos	caracteres	possui. A	main	deve	exibir	a	quantidade	
de	caracteres.
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quantidade(int i,int aux);

void quantidade(int i,int aux){
	
    printf("\nNumero de caracteres: %d\n\n",i-aux);
    
}

int main(){
	
    int i,aux=0;
    char string[99];

    printf("Digite uma frase e veja quantos caracteres tem\n\nFrase: ");
    scanf("%[^\n]s",string);
    system("cls");
    
	printf("\nFrase digitada: ");
	
    for(i=0;string[i]!=NULL;i++){
        printf("%c",string[i]);

        if(string[i]==' '){
            aux++;
        }
    }
    printf("\n");
    
    quantidade(i,aux);
    
    system("pause");
    
    return 0;
}

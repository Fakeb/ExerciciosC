/*/
3. Ler	duas	palavras	e	usar	uma	 função	para	compará-las.	A	main	deve	informar	se	as	palavras	são	iguais ou	
diferentes.
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comparar(char palavra1[99],char palavra2[99]);

int main(){
	
	char palavra1[99],palavra2[99];
	
	printf("Digite duas palavras para compara-las: \n");

    printf("Palavra 1: ");
    scanf("%[^\n]s",palavra1);
    
    fflush(stdin);

    printf("Palavra 2: ");
    scanf("%[^\n]s",palavra2);
    
    fflush(stdin);
    
    system("cls");

    printf("\n");

    printf("Palavra 1 = %s\nPalavra 2 = %s\n\n",palavra1,palavra2);
	
    comparar(palavra1,palavra2);

    system("pause");
    
    return 0;
}

void comparar(char palavra1[99],char palavra2[99]){

    printf("Comparacao das palavras: \n");

    if(strcmp (palavra1,palavra2) == 0){
        printf("Sao iguais\n\n");
    }
    else{
        printf("Sao diferentes\n\n");
    }
    
}

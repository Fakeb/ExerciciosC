/*/
4. Ler	uma	palavra	e	uma letra	qualquer.	Usar	uma	função	para	mostrar	a	palavra	cortada	na	primeira	posição	
em	que	a	letra	informada for	encontrada	na	palavra.	A	função	main	deve	exibir	a	nova	string.
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void dados();
void corte(char letra,char palavra[99]);

int main()
{
	char palavra[99];
	char letra;
		
	printf("Digite uma palavra e uma letra, iremos corta-la na letra desejada:\n\n");
	
    printf("A palavra desejada: ");
    scanf("%[^\n]s",palavra);
    
    fflush(stdin);

    printf("Letra desejada: ");
    scanf("%c",&letra);
	
    system("cls");
		
    printf("Palavra Digitada: %s\nLetra Digitada: %c\n",palavra,letra);
    
	corte(letra,palavra);
    
    system("pause");
    
    return 0;
    
}

void corte(char letra,char palavra[99]){
	
	int i;
	
	printf("Palavra cortada:");
	
	for(i=0;palavra[i]!=letra;i++){
		
		printf("%c",palavra[i]);
		
	}

	printf("\n\n");
	
}

/*/
10. Criar	um	arquivo	texto	que	receberá	um	texto	informado	pelo	usuário.	Após,	verificar	e	exibir	quantas	vezes	
a	palavra	“teste”	está	inserida	no	arquivo.
/*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

FILE *file;

int main(){
	
	FILE *file;
	file = fopen("texto.txt","w");
	
	char texto[999];
	int i=0,contador=0;
	
	printf("Digite um texto no arquivo 'texto': ");
	scanf("%[^\n]s",texto);
	
	while (texto[i]!='\0'){
		fputc(texto[i],file);
		if(texto[i]=='t' && texto[i+1]=='e' && texto[i+2]=='s' && texto[i+3]=='t' && texto[i+4]=='e' && (texto[i+5]=='s' || texto[i+5]==' ' || texto[i+5]=='.' || texto[i+5]==',' || texto[i+5]=='\0') ){
			contador++;
		}
		i++;
	}
	
	fclose(file);
	
	printf("\nContagem dos testes: %d \n\n",contador);
	
	system("pause");
	
	return 0;
}

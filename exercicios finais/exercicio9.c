/*/
9. Criar	 um	 arquivo	 �texto�	 que	 armazena	 um	 texto	 digitado	 pelo	 usu�rio.	 Posteriormente,	 	 apresente	 ao	
usu�rio	o	n�mero	de	vezes	que	os	caracteres	�A�	e	�a�	aparecem	no	arquivo.
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
		if( (texto[i]=='a')||(texto[i]=='A') ){
			contador++;
		}
		i++;
	}
	
	fclose(file);
	
	printf("\nContagem dos 'As': %d ",contador);
	
	system("pause");
	
	return 0;
}

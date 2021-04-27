// sistema supervisório: 
//sensores(1 até 8) mostrando 0 ou 1 - temperatura, luminosidade ...( sensor 1: ligado ou desligado...)
// o sistema sempre em execução, se mudar no arquivo, atualiza no sistema.

#include <stdlib.h>
#include <stdio.h>

void sensores(){
	
	system("cls");
	
	FILE *file;
	file=fopen ("sensor.txt","r");
	char ch;
	
	while (ch != EOF) {
		ch=fgetc(file);
		
		printf("%c",ch);
	}
	/*/
	while (1){
		ch=fgetc(file);
		if(ch==EOF){
			break;
		}
		printf("%c",ch);
	}
	/*/
	printf("\n");
	fclose(file);

	sleep(1); // 1 segundos de espera
	
	sensores();
}



int main(){
	
	sensores();
	
	return 0;
}

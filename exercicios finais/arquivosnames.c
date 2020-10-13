#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void gravar(int contato),consultar(),menu();
FILE *file;

void menu(){
	
	int op,contato;

	printf("1 = cadastrar contatos\n");
	printf("2 = consultar\n");
	printf("3 = sair\n");
	printf(": ");
	scanf("%d",&op);
	
	switch(op){
		case 1:{
			system("cls");
			printf("Numero de contatos: ");
			scanf("%d",&contato);
			printf("\n\n");
			gravar(contato);
			break;
		}
		case 2:{
			system("cls");
			consultar();
			break;
		}
		case 3:{
			system("cls");
			printf("\n\nFEITO\n\n");
			break;
		}
		default:{
			system("cls");
			printf("Digite somente de 1 ate 3");
			menu();
			break;
		}
	}	
}
void gravar(int contato){
	
	int i;
	char arquivo[999],nome[999],email[999],teleloiro[999];
	
	for(i=0;i<contato;i++){
	
	fflush(stdin);
	printf("Digite o nome do contato: ");
	scanf("%[^\n]s",arquivo);

	fflush(stdin);
	
	printf("Digite o email: ");
	scanf("%[^\n]s",email);
	
	fflush(stdin);
	
	printf("Digite o telefone: ");
	scanf("%[^\n]s",teleloiro);
	fflush(stdin);
	
	strcpy(nome,arquivo);
	strcat(arquivo,".txt");
	file = fopen(arquivo,"a");
	
	if (file == NULL) {
            printf("3RR0: D3U P4U N0 PR0GR4M4, R3S3T4 4I\n\n");
            menu();
    }
    
    fprintf(file,"\nNome do contato: %s\n",nome);
    fprintf(file,"Email:  %s\n",email);
    fprintf(file,"Telefone:  %s",teleloiro);
	
	fclose(file);
	}
	system("cls");
	printf("Salvoo\n\n");
	menu();
}
void consultar(){
	
	char arquivosnames[999],ler;
	
	fflush(stdin);
	printf("Digite o Nome do contato: ");
	scanf("%[^\n]s",arquivosnames);
	strcat(arquivosnames,".txt");
	
	file = fopen(arquivosnames,"r");
	
	do {
        ler = fgetc(file);
        
        if (ler != EOF) {
            printf("%c", ler);
        }
    } while (ler != EOF);
	
	fclose(file);
	
	printf("\n\n");
	printf("Aperte qualquer coisa para continuar: ");
	system("pause>nul");
	system("cls");
	menu();
}
int main(){
	menu();
	return 0;
}

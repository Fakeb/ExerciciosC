// 1) cadastrar de produto>> digite o codigo de barras= 7895..., digite o nome do produto= noralgina
// 2) consultar >> digitar o codigo de barras = nome do produto
// 3)sair
// maleato de enalipril 20mg = 7896523210773
// novalgina 1g = 7891058001155
// hidroclorotiaziada 25mg = 7896004716176

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void gravar(int produto),consultar(),menu();
FILE *file;

void menu(){
	
	int op,produto;

	printf("1 = cadastrar\n");
	printf("2 = consultar\n");
	printf("3 = sair\n");
	printf(": ");
	scanf("%d",&op);
	
	switch(op){
		case 1:{
			system("cls");
			printf("Numero de produtos: ");
			scanf("%d",&produto);
			printf("\n\n");
			gravar(produto);
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
void gravar(int produto){
	
	int i;
	char arquivo[999],ch[999],codigscorrects[999];
	
	for(i=0;i<produto;i++){
	
	fflush(stdin);
	printf("Digite o nome do produto: ");
	scanf("%[^\n]s",ch);
	fflush(stdin);
	
	printf("Codigo de barras: ");
	scanf("%[^\n]s",arquivo);
	fflush(stdin);
	
	strcpy(codigscorrects,arquivo);
	strcat(arquivo,".txt");
	file = fopen(arquivo,"a");
	
	if (file == NULL) {
            printf("3RR0: D3U P4U N0 PR0GR4M4, R3S3T4 4I\n\n");
            menu();
    }
    
    fprintf(file,"\nNome do produto: %s\n",ch);
    fprintf(file,"Codigo do produto: %s",codigscorrects);
	
	fclose(file);
	}
	system("cls");
	printf("Salvoo\n\n");
	menu();
}
void consultar(){
	
	char arquivosnames[999],ler;
	
	fflush(stdin);
	printf("Digite o codigo do produto desejado: ");
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

/*/
8. Crie	um	outro	programa	para	ler	e	exibir	os	dados	do	arquivo	“Notas”	e	mostrar	a	média	das	notas	da	turma.
/*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	int alunos,notas[99],i;
	float temp;
	
	printf("Digite o numero de alunos: ");
	scanf("%d",&alunos);
	
	for(i=0;i<alunos;i++){
		
		printf("Digite as notas: ");
		scanf("%d",&notas[i]);
		
	}
	/*/
	
	NAO CONSEGUI GRAVAR
	
	FILE *file;
	
	file = fopen("Notas.txt","w");
	
	i=0;
	
	while (notas[i]!='\0'){
		fputc(notas[i],file);
		i++;
	}
	
	fclose(file);
	/*/
	
	
	for(i=0;i<alunos;i++){
		
		temp=temp+notas[i];
		
	}
	temp=temp/alunos;
	
	printf("Media: %.2f",temp);
	
	
	
	return 0;
}

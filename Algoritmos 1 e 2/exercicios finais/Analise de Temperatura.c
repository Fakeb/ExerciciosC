#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Controle{
	int temp;
}controle;

void temperatura(){
	controle.temp =  rand() % 20;
	printf("Temperatura: %d\n",controle.temp);
	if(controle.temp>=18){
		printf("***Alarme***\n Sirene Acionada\n Luz de Alarme Acionada\n");
		system("pause");
		temperatura();
	}
	else{
		temperatura();
	}
}

int main(){
	temperatura();
	return 0;	
}

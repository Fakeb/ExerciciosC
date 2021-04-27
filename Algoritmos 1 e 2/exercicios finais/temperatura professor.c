#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	int temperatura;
} Sensor;

typedef struct {
	int estado;
} Sirene;

typedef struct {
	int estado;
} LuzEmergencia;

typedef struct {
	int estado;
} BotaoDesarme;


int lerTemperatura();
void alarme();

int main(){
	for(;;) {
		int temp = lerTemperatura();
		printf("TEMPERATURA: %d\n", temp);
		if (temp >= 18) {
			alarme();
		}
	}
	return 0;
}

int lerTemperatura(){
	srand(time(NULL));
	Sensor sensor;
	sensor.temperatura = rand() % 20;
	return sensor.temperatura;
}

void alarme(){
	Sirene sirene;
	LuzEmergencia luz;
	BotaoDesarme botao;
	sirene.estado = 1;
	luz.estado = 1;
	botao.estado = 1;
	while(botao.estado != 0) {
		printf("ATUADOR 1 - Sirene: %d \n", sirene.estado);
		printf("ATUADOR 2 - Luz de Emergencia: %d \n", luz.estado);
		printf("AGUARDANDO DESARME...\n");
		scanf("%d", &botao.estado);
	}
	sirene.estado = 0;
	luz.estado = 0;
	printf("ATUADOR 1 - Sirene: %d \n", sirene.estado);
	printf("ATUADOR 2 - Luz de Emergencia: %d \n", luz.estado);
	printf("SISTEMA REATIVADO\n");
}

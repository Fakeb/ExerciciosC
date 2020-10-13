//ler 10 numeros, armazena-los em um vetor e trocar os conteudos de posiçoes.
//ex 3974156820
//   0286514793


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, n1, n2, num[11];
	printf("Digite os 10 valores para inverter as posições:\n");
	for (i = 1; i <= 10; i++)	{
		printf("O %d valor: ",i);
		scanf("%d", &num[i]);
	}
	for (i = 1; i <= 11; i++ ) {
    	for (n1 = i + 1; n1 <= 11; n1++) {
            n2 = num[i];
            num[i] = num[n1];
            num[n1] = n2;
		}
	}
	printf("\nOrdem inversa:\n");
    for (i = 1; i <= 10; i++) {
        printf(" %d\n", num[i]);
	}
	printf("\n");
    system("pause");
    return 0;
}

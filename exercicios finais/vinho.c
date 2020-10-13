#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	float tinto=0,branco=0,rose=0,quantidade=0,total=0;
	char menu;

	for(;;) {
		system("cls");
		printf("Quantidade dos vinhos:\nTinto: %.0f\tBranco: %0.f\tRose: %.0f\n\n",tinto,branco,rose);

		printf("Tinto: %.2f%%\tBranco: %.2f%%\tRose: %.2f%%\n", (tinto/total)*100 , (branco/total)*100 , (rose/total)*100 );

		printf("\nDigite T - Tinto, B - Branco, R - Rose:");
		scanf("%c",&menu);
		fflush(stdin);

		printf("\nAgora a quantidade:");
		scanf("%f",&quantidade);
		fflush(stdin);

		switch(menu) {
			case 'T':
			case 't': {
				tinto = tinto + quantidade;
				break;
			}
			case 'B':
			case 'b': {
				branco = branco + quantidade;
				break;
			}
			case 'R':
			case 'r': {
				rose = rose + quantidade;
				break;
			}
		}

		total = tinto + branco + rose;

	}
	system("pause");
	return 0;
}

//Escreva um algoritmos para ordenar os numeros em ordem crescente ( utilizando vetor )


#include <stdio.h>
#include <locale.h>

int main() {
	int i, n1, n2, num[6];
	printf("Digite os Valores para ordenar:\n");
	for (i = 1; i <= 5; i++)	{
		printf("O %d valor: ",i);
		scanf("%d", &num[i]);
	}
	for (i = 1; i <= 5; i++ ) {
    	for (n1 = i + 1; n1 <= 5; n1++) {
        	if (num[i] > num[n1]) {
            	n2 = num[i];
                num[i] = num[n1];
                num[n1] = n2;
			}
		}
	}
	printf("\nOrdem crescente:\n");
    for (i = 1; i <= 5; i++) {
        printf(" %d\n", num[i]);
	}
    system("pause");
    return 0;
}

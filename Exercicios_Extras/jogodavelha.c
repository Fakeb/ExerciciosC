


int main () {

    setlocale(LC_ALL, "Portuguese");

    int i,lin,col,lin1,col1,lin2,col2,fail=0,draw=0;

    char tabuleiro[4][4];

    for (lin = 1; lin <= 3; lin++){

        for (col = 1; col <= 3; col++){

            tabuleiro[lin][col] = ' ';

        }

    }

    for (;;){

		if (draw < 9) {

			do {

			    for (lin = 1; lin <= 3; lin++) {

			    	printf("\n\t\t");

			        for (col = 1; col <= 3; col++) {

			        	printf("|%c|", tabuleiro[lin][col]);

			        }

			    }



			    printf("\n\nJogador 1:\nInsira linha e coluna para efetuar uma jogada:\n\n");

			    printf("Digite a linha: ");

			    scanf("%d", &lin1);

			    printf("Digite a coluna: ");

			    scanf("%d", &col1);



			    system("cls");



			    if (tabuleiro[lin1][col1] == ' ') {

			    	tabuleiro[lin1][col1] = 'X';

			    	draw++;

			    	fail = 0;

			    }

			    else {

					printf("Jogada inv�lida.\n");

					fail = 1;

			    }

			}

			while (fail == 1);

		}

		else {

			printf("O jogo empatou.\n");

			for (lin = 1; lin <= 3; lin++) {

				printf("\n\t\t");

				for (col = 1; col <= 3; col++) {

					printf("|%c|", tabuleiro[lin][col]);

				}

			}

			printf("\n");

			return 0;

		}

		for (i = 1; i <= 3; i++) {

			if ((tabuleiro[i][1] == tabuleiro[i][2]) && (tabuleiro[i][2] == tabuleiro[i][3])) {

				if ((tabuleiro[i][1] == 'X') && (tabuleiro[i][2] == 'X') && (tabuleiro[i][3] == 'X')) {

					printf("O jogador 1 venceu.\n");

					for (lin = 1; lin <= 3; lin++) {

						printf("\n\t\t");

						for (col = 1; col <= 3; col++) {

							printf("|%c|", tabuleiro[lin][col]);

						}

					}

					printf("\n");

					return 0;

				}

			}

		}

		for (i = 1; i <= 3; i++) {

			if ((tabuleiro[1][i] == tabuleiro[2][i]) && (tabuleiro[2][i] == tabuleiro[3][i])) {

				if ((tabuleiro[1][i] == 'X') && (tabuleiro[2][i] == 'X') && (tabuleiro[3][i] == 'X')) {

					printf("O jogador 1 venceu.\n");

					for (lin = 1; lin <= 3; lin++) {

						printf("\n\t\t");

						for (col = 1; col <= 3; col++) {

							printf("|%c|", tabuleiro[lin][col]);

						}

					}

					printf("\n");

					return 0;

				}

			}

		}

		if ((tabuleiro[1][1] == 'X') && (tabuleiro[2][2] == 'X') && (tabuleiro[3][3] == 'X')) {

			printf("O jogador 1 venceu.\n");

			for (lin = 1; lin <= 3; lin++) {

				printf("\n\t\t");

				for (col = 1; col <= 3; col++) {

					printf("|%c|", tabuleiro[lin][col]);

				}

			}

			printf("\n");

			return 0;

		}

		if (draw < 9) {

		    do {

				for (lin = 1; lin <= 3; lin++) {

			    	printf("\n\t\t");

			    	for (col = 1; col <= 3; col++) {

			            printf("|%c|", tabuleiro[lin][col]);

			        }

			    }



			    printf("\n\nJogador 2:\nInsira linha e coluna para efetuar uma jogada:\n\n");

			    printf("Digite a linha: ");

			    scanf("%d", &lin2);

			    printf("Digite a coluna: ");

			    scanf("%d", &col2);



			    system("cls");



			    if (tabuleiro[lin2][col2] == ' ') {

			    	tabuleiro[lin2][col2] = 'O';

			    	draw++;

			    	fail = 0;

			    }

			    else {

					printf("Jogada inv�lida.\n");

					fail = 1;

			    }

			}

			while (fail == 1);

		}

		else {

			printf("O jogo empatou.\n");

			for (lin = 1; lin <= 3; lin++) {

				printf("\n\t\t");

				for (col = 1; col <= 3; col++) {

					printf("|%c|", tabuleiro[lin][col]);

				}

			}

			printf("\n");

			return 0;

		}

		for (i = 1; i <= 3; i++) {

			if ((tabuleiro[i][1] == tabuleiro[i][2]) && (tabuleiro[i][2] == tabuleiro[i][3])) {

				if ((tabuleiro[i][1] == 'O') && (tabuleiro[i][2] == 'O') && (tabuleiro[i][3] == 'O')) {

					printf("O jogador 2 venceu.\n");

					for (lin = 1; lin <= 3; lin++) {

						printf("\n\t\t");

						for (col = 1; col <= 3; col++) {

							printf("|%c|", tabuleiro[lin][col]);

						}

					}

					printf("\n");

					return 0;

				}

			}

		}

		for (i = 1; i <= 3; i++) {

			if ((tabuleiro[1][i] == tabuleiro[2][i]) && (tabuleiro[2][i] == tabuleiro[3][i])) {

				if ((tabuleiro[1][i] == 'O') && (tabuleiro[2][i] == 'O') && (tabuleiro[3][i] == 'O')) {

					printf("O jogador 2 venceu.\n");

					for (lin = 1; lin <= 3; lin++) {

						printf("\n\t\t");

						for (col = 1; col <= 3; col++) {

							printf("|%c|", tabuleiro[lin][col]);

						}

					}

					printf("\n");

					return 0;

				}

			}

		}

		if ((tabuleiro[1][1] == 'O') && (tabuleiro[2][2] == 'O') && (tabuleiro[3][3] == 'O')) {

			printf("O jogador 2 venceu.\n");

			for (lin = 1; lin <= 3; lin++) {

				printf("\n\t\t");

				for (col = 1; col <= 3; col++) {

					printf("|%c|", tabuleiro[lin][col]);

				}

			}

			printf("\n");

			return 0;

		}

	}

	system("pause");

    return 0;

}

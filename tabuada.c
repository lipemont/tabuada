#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
	int opcao, numero;
// Menu de operações
	do {
		printf("\n* Menu de Operações: *\n");
		printf("|1. Adição           |\n");
		printf("|2. Subtração        |\n");
		printf("|3. Multiplicação    |\n");
		printf("|4. Divisão          |\n");
		printf("|5. Sair             |\n");
		printf("\n Escolha uma opção (1-5): ");
		scanf("%d", &opcao);
		getchar(); // Consome o caractere '\n'
		
		switch (opcao) {
		case 1: // Adição
			system("clear"); // Limpa a tela
			printf("Escolha um número para gerar a tabuada de adição: ");
			scanf("%d", &numero); // Recebe o número escolhido pelo usuário
			printf("\nTabuada de adição de %d:\n", numero);
            // Gera a tabuada de adição
			for (int i = 0; i <= 9; i++) {
				printf("%d + %d = %d\n", numero, i, numero + i);
			}
			break;
		case 2: // Subtração
			system("clear"); // Limpa a tela
			printf("Escolha um número para gerar a tabuada de subtração ");
			scanf("%d", &numero);
			printf("\nTabuada de subtraC'C#o de %d:\n", numero);

// Gera a tabuada de subtração sem resultados negativos
			for (int i = 0; i <= 9; i++) {
				if (numero >= i) {
					printf("%d - %d = %d\n", numero, i, numero - i);
				} else {
					printf("%d - %d = %d\n", i, numero, i - numero);
				}
			}
			break;
		case 3: // Multiplicação
			system("clear"); // Limpa a tela
			printf("Escolha um número para gerar a tabuada de multiplicação: ");
			scanf("%d", &numero);
			printf("\nTabuada de multiplicação de %d:\n", numero);
// Gera a tabuada de Multiplicação
			for (int i = 0; i <= 10; i++) {
				printf("%d * %d = %d\n", i, numero, i * numero);
			}
			break;
		case 4: // Divisão
			system("clear"); // Limpa a tela
			printf("Escolha um número para gerar a tabuada de divisão: ");
			scanf("%d", &numero);
			printf("\nTabuada de divisão de %d:\n", numero);
// Gera a tabuada de divisão
			for (int i = 1; i <= 10; i++) {
				printf("%d / %d = %.2f\n", numero * i, numero, (float)(numero * i) / numero);
			}
			break;
		case 5: // Sair
			printf("Saindo do programa...\n");
			break;
		default:
			printf("opção inválida! Tente novamente.\n");
			system("clear");
			break;
		}
// Aguarda antes de limpar a tela, exceto se a opção for sair
		if (opcao >= 1 && opcao <= 4) {
			printf("\nPressione ENTER para voltar ao menu principal...\n");
            getchar(); // Consome o caractere '\n'
            getchar(); // Espera o ENTER ser pressionado
            system("clear");
		}
	} while (opcao != 5); // Continua até o usuário escolher a opção de sair
	return 0;
}

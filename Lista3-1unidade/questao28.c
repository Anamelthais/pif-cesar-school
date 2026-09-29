#include <stdio.h>

int main(void) {
    int opcao, leitura, caractere;
    double salario, aumento, desconto;

    do {
        printf("\n--- FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");

        leitura = scanf("%d", &opcao);

        if (leitura == EOF) {
            return 1;
        }

        if (leitura != 1) {
            printf("Opcao invalida. Digite um numero.\n");

            while ((caractere = getchar()) != '\n' && caractere != EOF) {
            }

            opcao = 0;
            continue;
        }

        switch (opcao) {
            case 1:
            case 2:
                printf("Digite o salario: ");
                leitura = scanf("%lf", &salario);

                if (leitura == EOF) {
                    return 1;
                }

                if (leitura != 1) {
                    printf("Entrada invalida.\n");

                    while ((caractere = getchar()) != '\n'
                           && caractere != EOF) {
                    }

                    break;
                }

                if (salario < 0) {
                    printf("O salario nao pode ser negativo.\n");
                    break;
                }

                if (opcao == 1) {
                    if (salario <= 2000.00) {
                        aumento = salario * 0.15;
                    } else {
                        aumento = salario * 0.10;
                    }

                    printf("Aumento: R$ %.2f\n", aumento);
                    printf("Novo salario: R$ %.2f\n", salario + aumento);
                } else {
                    if (salario <= 3000.00) {
                        desconto = salario * 0.08;
                    } else {
                        desconto = salario * 0.15;
                    }

                    printf("Imposto: R$ %.2f\n", desconto);
                    printf("Salario apos desconto: R$ %.2f\n",
                           salario - desconto);
                }

                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}
#include <stdio.h>
#include <limits.h>

int main(void) {
    int valor;
    int melhorTotal = INT_MAX;
    int melhor100 = 0, melhor50 = 0, melhor20 = 0;
    int melhor10 = 0, melhor5 = 0, melhor2 = 0;

    printf("Digite o valor inteiro positivo do saque: ");
    if (scanf("%d", &valor) != 1 || valor <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    /*
    Testa retiradas das cedulas maiores.
    Cada retirada e feita por subtracao sucessiva.
    */
    int resto100 = valor;
    int qtd100 = 0;

    while (resto100 >= 0) {
        int resto50 = resto100;
        int qtd50 = 0;

        while (resto50 >= 0) {
            int resto20 = resto50;
            int qtd20 = 0;

            while (resto20 >= 0) {
                int resto10 = resto20;
                int qtd10 = 0;

                while (resto10 >= 0) {
                    int resto5 = resto10;
                    int qtd5 = 0;

                    while (resto5 >= 0) {
                        if (resto5 % 2 == 0) {
                            int resto2 = resto5;
                            int qtd2 = 0;

                            while (resto2 >= 2) {
                                resto2 -= 2;
                                qtd2++;
                            }

                            int total = qtd100 + qtd50 + qtd20
                                      + qtd10 + qtd5 + qtd2;

                            if (total < melhorTotal) {
                                melhorTotal = total;
                                melhor100 = qtd100;
                                melhor50 = qtd50;
                                melhor20 = qtd20;
                                melhor10 = qtd10;
                                melhor5 = qtd5;
                                melhor2 = qtd2;
                            }
                        }

                        resto5 -= 5;
                        qtd5++;
                    }

                    resto10 -= 10;
                    qtd10++;
                }

                resto20 -= 20;
                qtd20++;
            }

            resto50 -= 50;
            qtd50++;
        }

        resto100 -= 100;
        qtd100++;
    }

    if (melhorTotal == INT_MAX) {
        printf("Nao e possivel compor esse valor com as cedulas disponiveis.\n");
        return 1;
    }

    printf("Cedulas de R$ 100: %d\n", melhor100);
    printf("Cedulas de R$ 50: %d\n", melhor50);
    printf("Cedulas de R$ 20: %d\n", melhor20);
    printf("Cedulas de R$ 10: %d\n", melhor10);
    printf("Cedulas de R$ 5: %d\n", melhor5);
    printf("Cedulas de R$ 2: %d\n", melhor2);
    printf("Total de cedulas: %d\n", melhorTotal);

    return 0;
}
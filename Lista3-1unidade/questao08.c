#include <stdio.h>

int main(void) {
    double nota;
    int leitura, caractere;

    do {
        printf("Digite uma nota de 0 a 10: ");
        leitura = scanf("%lf", &nota);

        if (leitura == EOF) {
            return 1;
        }

        if (leitura != 1) {
            printf("Entrada invalida. Digite um numero.\n");

            while ((caractere = getchar()) != '\n' && caractere != EOF) {
            }
        } else if (!(nota >= 0 && nota <= 10)) {
            printf("Nota invalida. Tente novamente.\n");
        }
    } while (leitura != 1 || !(nota >= 0 && nota <= 10));

    printf("Nota registrada com sucesso!\n");

    return 0;
}
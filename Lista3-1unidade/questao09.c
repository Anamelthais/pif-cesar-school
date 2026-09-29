#include <stdio.h>

int main(void) {
    double valor, soma = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite um valor positivo (negativo encerra): ");

        if (scanf("%lf", &valor) != 1) {
            return 1;
        }

        if (valor < 0) {
            break;
        }

        if (valor == 0) {
            printf("Zero nao e positivo e sera desconsiderado.\n");
            continue;
        }

        soma += valor;
        quantidade++;
    }

    printf("Quantidade: %d\n", quantidade);
    printf("Soma: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor positivo informado.\n");
    }

    return 0;
}
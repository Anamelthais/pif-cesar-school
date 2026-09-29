#include <stdio.h>

int main(void) {
    int n;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o termo desejado (1 a 92): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 92) {
        printf("Entrada invalida. Digite um numero de 1 a 92.\n");
        return 1;
    }

    printf("Sequencia: 1");

    if (n >= 2) {
        printf(" 1");
    }

    for (int i = 3; i <= n; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;

        printf(" %lld", atual);
    }

    printf("\nTermo %d: %lld\n", n, atual);

    return 0;
}
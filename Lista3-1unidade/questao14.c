#include <stdio.h>

int main(void) {
    int quadrado;
    long long int soma = 0;

    for (int i = 1; i <= 100; i++) {
        quadrado = i * i;
        printf("%d -> %d\n", i, quadrado);
        soma += quadrado;
    }

    printf("Soma dos quadrados: %lld\n", soma);

    return 0;
}
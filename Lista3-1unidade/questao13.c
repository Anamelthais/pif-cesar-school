#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("Erro: nao existe fatorial de negativo neste programa.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        if (fatorial > LLONG_MAX / i) {
            printf("Erro: resultado excede o limite de long long int.\n");
            return 1;
        }

        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
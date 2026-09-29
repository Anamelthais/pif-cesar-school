#include <stdio.h>

int main(void) {
    int n;
    long long int numero = 1;

    printf("Digite o numero de linhas: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Digite um numero positivo.\n");
        return 1;
    }

    for (long long int linha = 1; linha <= n; linha++) {
        for (long long int coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }

            printf("%lld", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}
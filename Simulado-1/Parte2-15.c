#include <stdio.h>

int main(void) {
    int n, numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero positivo.\n");
        return 1;
    }

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }

            printf("%d", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    int num, encontrou = 0;

    printf("Digite um limite inteiro positivo: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Limite invalido.\n");
        return 1;
    }

    for (long long int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%lld ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.");
    }

    printf("\n");

    return 0;
}
#include <stdio.h>

void contarFor(void) {
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void contarWhile(void) {
    int i = 0;

    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void contarDoWhile(void) {
    int i = 0;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");
}

int main(void) {
    printf("FOR:\n");
    contarFor();

    printf("\nWHILE:\n");
    contarWhile();

    printf("\nDO-WHILE:\n");
    contarDoWhile();

    return 0;
}

/*
O for e o mais adequado porque a contagem tem inicio, fim
e incremento definidos, reunidos no cabecalho do laco.
*/
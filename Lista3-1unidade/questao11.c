#include <stdio.h>

int main(void) {
    int a, b, passo, atual;

    printf("Digite A e B: ");
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    passo = (a <= b) ? 1 : -1;
    atual = a;

    while (1) {
        printf("%d", atual);

        if (atual == b) {
            break;
        }

        printf(" ");
        atual += passo;
    }

    printf("\n");

    return 0;
}
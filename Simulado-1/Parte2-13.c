#include <stdio.h>

int main(void) {
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro de 0 a 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Entrada invalida. Digite um numero de 0 a 20.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
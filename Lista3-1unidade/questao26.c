#include <stdio.h>

int main(void) {
    int a, b, primo, encontrou = 0;
    long long int soma = 0;

    printf("Digite A e B positivos, com A < B: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || a >= b) {
        printf("Intervalo invalido.\n");
        return 1;
    }

    printf("Primos: ");

    for (long long int numero = a; numero <= b; numero++) {
        primo = numero > 1;

        for (long long int divisor = 2;
             divisor <= numero / divisor && primo;
             divisor++) {
            if (numero % divisor == 0) {
                primo = 0;
            }
        }

        if (primo) {
            printf("%lld ", numero);
            soma += numero;
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum");
    }

    printf("\nSoma dos primos: %lld\n", soma);

    return 0;
}
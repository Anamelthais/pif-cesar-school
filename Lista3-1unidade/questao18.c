#include <stdio.h>
#include <limits.h>

int main(void) {
    long long int numero, invertido = 0;
    int digito;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%lld", &numero) != 1 || numero <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    while (numero > 0) {
        digito = numero % 10;

        if (invertido > (LLONG_MAX - digito) / 10) {
            printf("Numero invertido excede o limite do tipo.\n");
            return 1;
        }

        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero invertido: %lld\n", invertido);

    return 0;
}
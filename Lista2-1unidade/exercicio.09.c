#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);
    printf("Divisao: %.2f\n", (float) numero1 / numero2);

    // Para evitar divisao por zero, deve-se verificar se numero2 e diferente de 0.

    return 0;
}
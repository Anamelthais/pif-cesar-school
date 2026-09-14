#include <stdio.h>

int main() {
    float velocidadeKm, velocidadeMs;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeKm);

    velocidadeMs = velocidadeKm / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidadeMs);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float alturaDegrau, alturaTotal;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que deseja alcancar em metros: ");
    scanf("%f", &alturaTotal);

    alturaTotal = alturaTotal * 100;

    quantidadeDegraus = (int) ceil(alturaTotal / alturaDegrau);

    printf("Numero minimo de degraus: %d\n", quantidadeDegraus);

    return 0;
}
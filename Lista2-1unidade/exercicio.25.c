#include <stdio.h>

int main() {
    float salarioBase;
    float gratificacao, imposto, salarioLiquido;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    // Formula:
    // salarioLiquido = salarioBase + 5% do salarioBase
    //                  - 7% do salarioBase

    return 0;
}
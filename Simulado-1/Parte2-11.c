#include <stdio.h>

int main(void) {
    int dias;
    double bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    if (dias < 0) {
        printf("O numero de dias nao pode ser negativo.\n");
        return 1;
    }

    bruto = dias * 45.00;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("\n--- HOLERITE ---\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
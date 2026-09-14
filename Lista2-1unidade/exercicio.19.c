#include <stdio.h>

int main() {
    int dias;
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 30.00;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - imposto;

    printf("Valor bruto: R$ %.2f\n", salarioBruto);
    printf("Valor liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
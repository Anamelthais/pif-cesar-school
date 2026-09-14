#include <stdio.h>

int main() {
    float horasNormais, horasExtras;
    float salarioBruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10.00) + (horasExtras * 15.00);

    imposto = salarioBruto > 12000
              ? (salarioBruto - 12000) * 0.10
              : 0;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);

    return 0;
}




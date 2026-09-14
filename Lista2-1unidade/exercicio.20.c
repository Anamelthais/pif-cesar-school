#include <stdio.h>
#include <math.h>

int main() {
    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &lado_a);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt((lado_a * lado_a) + (lado_b * lado_b));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
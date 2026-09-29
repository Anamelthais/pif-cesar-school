#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Os valores informados nao formam um triangulo.\n");
        return 1;
    }

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.3f\n", area);

    return 0;
}
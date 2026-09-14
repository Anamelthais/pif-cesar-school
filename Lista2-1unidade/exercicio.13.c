#include <stdio.h>

int main() {
    float lado, baseRetangulo, alturaRetangulo;
    float baseTriangulo, alturaTriangulo;
    float areaQuadrado, areaRetangulo, areaTriangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &baseRetangulo, &alturaRetangulo);

    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &baseTriangulo, &alturaTriangulo);

    areaQuadrado = lado * lado;
    areaRetangulo = baseRetangulo * alturaRetangulo;
    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2.0;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo: %.2f\n", areaTriangulo);

    return 0;
}
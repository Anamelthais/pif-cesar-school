#include <stdio.h>

int main() {
    float comprimento, largura;
    float precoMetro;
    float perimetro, metrosArame, custoTotal;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro do arame: ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);

    metrosArame = perimetro * 3;

    custoTotal = metrosArame * precoMetro;

    printf("Metros de arame necessarios: %.2f m\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custoTotal);

    return 0;
}
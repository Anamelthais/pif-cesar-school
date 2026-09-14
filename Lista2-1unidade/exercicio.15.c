#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float mediaSimples, mediaPonderada;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    mediaPonderada = (nota1 * 1 + nota2 * 1 +
                      nota3 * 2 + nota4 * 2) / 6.0;

    printf("Media aritmetica: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}
#include <stdio.h>

int main(void) {
    double nota, soma = 0, maior = 0, menor = 0;
    int quantidade = 0;

    while (1) {
        printf("Digite uma nota de 0 a 10 (-1 encerra): ");

        if (scanf("%lf", &nota) != 1) {
            return 1;
        }

        if (nota == -1.0) {
            break;
        }

        if (!(nota >= 0 && nota <= 10)) {
            printf("Nota invalida.\n");
            continue;
        }

        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        quantidade++;
    }

    printf("Total de alunos avaliados: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota registrada.\n");
    }

    return 0;
}
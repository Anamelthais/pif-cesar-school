#include <stdio.h>

int main(void) {
    int total, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total);

    if (total < 0) {
        printf("A quantidade de segundos nao pode ser negativa.\n");
        return 1;
    }

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n",
           horas, minutos, segundos);

    return 0;
}
#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int totalSegundos;

    printf("Digite a hora de inicio: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    totalSegundos += duracao;

    horas = (totalSegundos / 3600) % 24;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           horas, minutos, segundos);

    return 0;
}
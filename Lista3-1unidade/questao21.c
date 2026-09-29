#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char secreta, tentativa;
    int tentativas = 0;

    srand((unsigned int)time(NULL));
    secreta = rand() % 26 + 'a';

    do {
        printf("Adivinhe a letra de a a z: ");

        if (scanf(" %c", &tentativa) != 1) {
            return 1;
        }

        if (tentativa < 'a' || tentativa > 'z') {
            printf("Digite uma letra minuscula de a a z.\n");
            continue;
        }

        tentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        } else if (tentativa > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        }
    } while (tentativa != secreta);

    printf("Parabens! Voce acertou a letra '%c'.\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);

    return 0;
}
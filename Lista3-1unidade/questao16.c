#include <stdio.h>

int main(void) {
    const int SENHA = 2026;
    int digitada;

    for (int tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha (tentativa %d de 3): ", tentativa);

        if (scanf("%d", &digitada) != 1) {
            return 1;
        }

        if (digitada == SENHA) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            return 0;
        }

        printf("Senha incorreta.\n");
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}
#include <stdio.h>

int main(void) {
    const int SENHA_SECRETA = 2026;
    int senha, acertou = 0;

    for (int tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha (tentativa %d de 3): ", tentativa);
        scanf("%d", &senha);

        if (senha == SENHA_SECRETA) {
            acertou = 1;
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    // O numero exibido representa o codigo inteiro
    // associado ao caractere na tabela ASCII.

    return 0;
}
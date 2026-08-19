#include <stdio.h>

int main()
{
    // a) \n = quebra de linha | \t = tabulação
    printf("\n\tBom dia! Shirley.\n");

    // b) \n = quebra de linha no final da frase
    printf("Você já tomou café? \n");

    // c) Dois \n = duas quebras de linha antes da frase
    // Depois, outro \n separa as duas frases
    printf("\n\nA solução não existe!\nNão insista.\n");

    // d) \t = tabulação entre as palavras
    // \n = quebra de linha
    printf("Duas\tlinhas\tde\tsaída\nou\tuma?\n");

    // e) %s = texto (string)
    // Cada \n coloca uma palavra em uma nova linha
    printf("%s\n%s\n%s\n", "um", "dois", "três");

    return 0;
}
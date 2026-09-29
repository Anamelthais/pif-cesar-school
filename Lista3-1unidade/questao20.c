#include <stdio.h>

int main(void) {
    printf("%-10s %-12s %s\n", "Decimal", "Hexadecimal", "Caractere");

    for (int codigo = 32; codigo <= 126; codigo++) {
        printf("%-10d %-12X '%c'\n",
               codigo, (unsigned int)codigo, codigo);
    }

    return 0;
}
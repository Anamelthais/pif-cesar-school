/* #include <stdlib.h>; Não se usa o ponto e virgula
*int Main{} a função principal deve ser int main(). C diferencia maiúsculas de minúsculas.
*( ... ) foi feita a troca do simbolo no corpo da função, também não pode { ... }.
*printf( Existem %d semanas no ano.,52);  precisa estar entre aspas: "Existem %d semanas no ano.".
*cout << endl; esseprecisei de ajuda da IA pois não conhecia, vi que cout e endl são comandos de C++, não de C. Deveria usar \n no printf().
*system("PAUSE"); → pode funcionar no Windows, mas não é necessário para o programa. Como o objetivo é um programa C simples e portátil, podemos removê-lo.
* O return 0; está correto, mas precisa estar dentro das chaves da função main().
*/

#include <stdio.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);

    return 0;
}


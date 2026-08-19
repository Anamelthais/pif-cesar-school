/*O programa não está adequado ao padrão ANSI C porque não possui as diretivas #include <stdio.h> e #include <stdlib.h>, 
necessárias para printf() e system(), também falta declarar main() como int main() e utilizar return 0; ao final da função. no meu notebook não roda pois uso linux.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Linguagem C");
    system("pause");

    return 0;
}
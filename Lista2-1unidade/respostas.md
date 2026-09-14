1ª QUESTÃO:

a) O valor exibido será 2.
b) Isso ocorre porque o valor 2.97 é atribuído a uma variável do tipo int. O C faz uma conversão de tipos e a parte decimal é descartada, fazendo o truncamento.
c) Para manter a precisão, pode-se utilizar float ou double.

2ª QUESTÃO:

Entrada Standard de Caracteres vs. Bibliotecas Legadas

a)O uso da biblioteca `<conio.h>` deve ser evitado porque ela não faz parte do padrão ANSI C. Por isso, suas funções podem não funcionar em diferentes sistemas operacionais, prejudicando a portabilidade do programa.

b)A biblioteca padrão `<stdio.h>` fornece a função `getchar()` para entrada de caracteres e `putchar()` para saída de caracteres.

c)Uma forma de realizar a leitura ignorando quebras de linha residuais é:


#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Caractere digitado: %c\n", caractere);

    return 0;
}

3ª QUESTÃO:

 #include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}

4ª QUESTÃO: 

Valores iniciais: `a = 1`, `b = 2`, `c = 3`, `d = 4`.

**a) `a += b + c;`**  
a = 1 + (2 + 3) = 6  
**a = 6**

**b) `b *= c = d + 2;`**  
c = 4 + 2 = 6  
b = 2 * 6 = 12  
**b = 12, c = 6**

**c) `d %= a + a + a;`**  
d = 4 % (1 + 1 + 1)  
d = 4 % 3 = 1  
**d = 1**

**d) `d -= c -= b -= a;`**  
b = 2 - 1 = 1  
c = 3 - 1 = 2  
d = 4 - 2 = 2  
**d = 2, c = 2, b = 1**

**e) `a += b += c += 7;`**  
c = 3 + 7 = 10  
b = 2 + 10 = 12  
a = 1 + 12 = 13  
**a = 13, b = 12, c = 10**

5ª QUESTÃO:

## Questão 05

**a) `i < j + 3`**

1 < 2 + 3  
1 < 5  
**Resultado: 1 (verdadeiro)**

**b) `2 * i - 7 <= j - 8`**

2 * 1 - 7 <= 2 - 8  
-5 <= -6  
**Resultado: 0 (falso)**

**c) `-x + y >= 2.0 * y`**

-3.3 + 4.4 >= 2.0 * 4.4  
1.1 >= 8.8  
**Resultado: 0 (falso)**

**d) `x == y`**

3.3 == 4.4  
**Resultado: 0 (falso)**

**e) `!(n - j)`**

!(2 - 2)  
!0  
**Resultado: 1 (verdadeiro)**

**f) `!n - j`**

!2 - 2  
0 - 2  
-2

**Resultado da expressão: -2**

Observação: `!` possui maior precedência que `-`, então primeiro é calculado `!n`.
Como n = 2 (verdadeiro em C), `!2 = 0`. Assim, 0 - 2 = -2.

**g) `i && j && k`**

1 && 2 && 3

Como todos são diferentes de zero, todos são considerados verdadeiros.

**Resultado: 1 (verdadeiro)**

**h) `i || j - 3 && k`**

1 || (2 - 3) && 3  
1 || (-1 && 3)  
1 || 1  
**Resultado: 1 (verdadeiro)**

**i) `i < j && 2 >= k`**

1 < 2 && 2 >= 3  
1 && 0  
**Resultado: 0 (falso)**

**j) `i == 2 || j == 4 || k == 5`**

1 == 2 || 2 == 4 || 3 == 5  
0 || 0 || 0  
**Resultado: 0 (falso)**

6ª QUESTÃO:

### a)

No incremento prefixado (`++n`), a variável é incrementada antes de seu valor ser atribuído.

Trecho A:
n inicia com 5.
`++n` aumenta n para 6 e depois atribui esse valor a x.

**Resultado: n = 6, x = 6**

No incremento pós-fixado (`m++`), o valor atual da variável é utilizado primeiro e o incremento ocorre depois.

Trecho B:
m inicia com 5.
O valor 5 é atribuído a y e depois m é incrementado para 6.

**Resultado: m = 6, y = 5**

### b)

A instrução:

`printf("%d\t%d\t%d\n", n, n+1, n++);`

pode gerar comportamento indefinido porque a variável `n` é acessada e também modificada por `n++` dentro da mesma chamada de função, sem uma ordem de avaliação garantida entre os argumentos do `printf()`.

O compilador não é obrigado a avaliar os argumentos da esquerda para a direita. Por isso, `n++` pode ser avaliado antes ou depois dos outros argumentos, podendo produzir resultados diferentes.

O incremento deve ser feito separadamente.

7

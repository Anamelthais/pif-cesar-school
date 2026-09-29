# Lista de revisão — Programação Imperativa e Funcional

## Questão 01 — Sensibilidade a maiúsculas e minúsculas

**Alternativa correta: c).**

Em C, `valor` e `VALOR` são identificadores diferentes. O mesmo acontece com `peso` e `Peso`, e com `taxa` e `TAXA`. A linguagem diferencia letras maiúsculas de minúsculas independentemente do sistema operacional.

## Questão 02 — Erros no código

Há **três erros principais**:

1. A função de entrada foi escrita como `Main()`, mas deve ser `main()`.
2. O texto do `printf` está sem aspas. Ele precisa ser uma string, como `"A idade do aluno eh: %d anos.\n"`.
3. `cout << endl;` é uma instrução de C++, não de C. Em C, uma quebra de linha pode ser feita com `\n` no `printf`.

**Observação:** também há um ponto e vírgula desnecessário após `#include <stdlib.h>`. Ele deve ser retirado.

Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade = 20;

    printf("A idade do aluno eh: %d anos.\n", idade);
    system("PAUSE");

    return 0;
}
```

## Questão 03 — Atribuições compostas

Valores iniciais: `a = 2`, `b = 4`, `c = 5` e `d = 10`.

| Instrução | Cálculo | Valores após a instrução |
|---|---|---|
| `a += b + c;` | `a = 2 + 4 + 5` | `a = 11`, `b = 4`, `c = 5`, `d = 10` |
| `b *= c = d - 2;` | Primeiro `c = 8`; depois `b = 4 * 8` | `a = 11`, `b = 32`, `c = 8`, `d = 10` |
| `d %= a + 3;` | `d = 10 % 14` | `a = 11`, `b = 32`, `c = 8`, `d = 10` |
| `a += b += c += 5;` | `c = 13`; depois `b = 45`; depois `a = 56` | `a = 56`, `b = 45`, `c = 13`, `d = 10` |

**Valores finais: `a = 56`, `b = 45`, `c = 13` e `d = 10`.**

## Questão 04 — Expressões lógicas

Considere `i = 2`, `j = 3`, `k = 0`, `x = 2.5` e `y = 5.0`.

| Item | Avaliação | Resultado |
|---|---|---|
| a) `i < j + 2` | `2 < 5` | **1** |
| b) `2 * i - 5 <= j - 4` | `-1 <= -1` | **1** |
| c) `!k && (x + y >= 7.5)` | `!0 && (7.5 >= 7.5)` → `1 && 1` | **1** |
| d) `!(i == j) \|\| (y / x == 2.0)` | `!(2 == 3) \|\| (5.0 / 2.5 == 2.0)` → `1 \|\| 1` | **1** |
| e) `i == 2 && j == 4 \|\| k == 0` | `(1 && 0) \|\| 1` | **1** |

Na letra **e**, `&&` é avaliado antes de `||`.

## Questão 05 — Estruturas de repetição

**a)** O `while` testa a condição **antes** de executar o bloco. Por isso, seu bloco pode executar **zero vezes**. O `do-while` testa a condição **depois**, então seu bloco executa **pelo menos uma vez**.

**b)** O `for` costuma ser mais legível quando já sabemos como controlar as repetições, por exemplo, ao percorrer um vetor ou contar de 1 a 10. Ele reúne inicialização, condição e atualização em um só lugar:

```c
for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
}
```

**c)** `while (condicao);` não é, por si só, um erro de compilação. O ponto e vírgula forma um **corpo vazio**. Se `condicao` permanecer verdadeira, o programa continuará repetindo esse laço sem executar uma instrução dentro dele. Quando o ponto e vírgula foi colocado por engano, trata-se de um **erro de lógica**.

## Questão 06 — Escopo, `continue` e `break`

**a)** `soma` foi declarada dentro das chaves do `for`. Assim, ela só existe naquele bloco. O `printf` está fora dele e não consegue acessar `soma`, causando erro de compilação. Além disso, se a declaração permanecesse dentro do laço, `soma` seria reiniciada com zero a cada passagem.

**b)** O laço passa pelos valores de `i` de **1 até 8**:

- Para `i = 1, 2, 3, 4, 6 e 7`, o quadrado é somado.
- Em `i = 5`, `continue` pula o restante daquela passagem, então `5²` não é somado.
- Em `i = 8`, `break` encerra o laço antes da soma. Os valores 9 e 10 não são alcançados.

**c)** Código corrigido:

```c
#include <stdio.h>

int main(void) {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }

        if (i == 8) {
            break;
        }

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}
```

Cálculo: `1² + 2² + 3² + 4² + 6² + 7² = 1 + 4 + 9 + 16 + 36 + 49 = 115`.

**Saída:**

```text
Soma final = 115
```
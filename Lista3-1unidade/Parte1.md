# Lista de Exercícios — Capítulo 3 — Laços de Repetição

## Questão 01

a) O while avalia a condição antes de executar o bloco, podendo executar
zero vezes. O do-while avalia a condição depois do bloco, garantindo pelo
menos uma execução.

b) O for é adequado para contagens e percursos com controle definido.
O while é adequado quando a repetição depende de uma condição e não
sabemos antecipadamente quantas vezes será executada. O do-while é
adequado para menus e validações que precisam executar pelo menos uma vez.

c) O ponto e vírgula em while (condicao); representa um corpo vazio.
Não é um erro de compilação. Se foi colocado por engano, é um erro de
lógica. Enquanto a condição permanecer verdadeira, o laço continuará
repetindo sem executar instruções em seu corpo.

## Questão 02

a) A variável soma foi declarada dentro do bloco do for e não pode ser
acessada pelo printf que está fora desse bloco.

b) A variável soma é inicializada com zero a cada iteração. Assim, em vez
de acumular os quadrados, ela armazena apenas o quadrado da iteração atual.

c) Código corrigido:

```c
#include <stdio.h>

int main(void) {
    int soma = 0;

    for (int i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    return 0;
}
```

Saída: Soma final = 285.

O escopo determina onde o nome da variável pode ser utilizado.
Uma variável declarada em um bloco fica visível a partir de sua declaração
até o fim desse bloco, inclusive em blocos internos, salvo quando outra
declaração oculta o mesmo nome. Uma variável local automática existe durante
a execução de seu bloco. Como soma foi declarada no bloco de main, ela
permanece disponível durante o laço e no printf final.

## Questão 03

a) A sequência impressa é: 36, 18, 9, 4, 2 e 1, separados por tabulação.
Como a é inteira, a divisão por 2 descarta a parte fracionária.

b) O programa lê um caractere a cada teste e encerra quando recebe X.
Para os outros caracteres, imprime o caractere correspondente ao código
numérico seguinte. Em ASCII, por exemplo, 'a' + 1 corresponde a 'b'.

Os parênteses fazem a atribuição a ch ocorrer antes da comparação com X.
Sem eles, a comparação seria avaliada primeiro, e ch receberia o resultado
lógico 0 ou 1, em vez do caractere lido.

Observação: getch() não faz parte da biblioteca padrão de C.

c) Pode-se utilizar break dentro do laço quando uma condição de saída for
atingida. O programa continuará executando a instrução seguinte ao laço.

## Questão 04

a) break encerra imediatamente o laço mais interno que contém a instrução.
A execução continua depois desse laço.

b) continue pula o restante da iteração atual. No for, a expressão de
atualização (normalmente o incremento) é executada em seguida; depois,
a condição é testada novamente.

c) Apenas o laço interno é interrompido. O laço externo continua normalmente.

## Questão 05

a) O laço executa 5 iterações.

b) Saída:

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

Quando i = 5 e j = 5, a condição i < j é falsa.

c) Versão com while:

```c
#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 10;

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}
```

## Questão 06

a) O valor final de x é 6.

b) O pós-incremento utiliza o valor anterior de x na comparação e depois
incrementa a variável, inclusive no teste que encerra o laço:

| Valor usado na comparação | Resultado de x++ < 5 | x após o incremento |
|---|---|---|
| 0 | Verdadeiro | 1 |
| 1 | Verdadeiro | 2 |
| 2 | Verdadeiro | 3 |
| 3 | Verdadeiro | 4 |
| 4 | Verdadeiro | 5 |
| 5 | Falso | 6 |

c) Versão explícita:

```c
#include <stdio.h>

int main(void) {
    int x = 0;
    int anterior;

    do {
        anterior = x;
        x++;
    } while (anterior < 5);

    printf("Valor final de x = %d\n", x);

    return 0;
}
```
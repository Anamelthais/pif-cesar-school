/*| Instrução                 | Status          | Justificativa Teórica                                                                                                                            |
| ------------------------- | --------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ |
| **a) `int a;`**           | ✅ **Correto**   | Declara a variável `a` como do tipo inteiro (`int`).                                                                                             |
| **b) `float b;`**         | ✅ **Correto**   | Declara a variável `b` como ponto flutuante de precisão simples (`float`).                                                                       |
| **c) `double float c;`**  | ❌ **Incorreto** | `double` e `float` são tipos distintos e não podem ser usados juntos dessa forma na mesma declaração. O correto seria `double c;` ou `float c;`. |
| **d) `unsigned char d;`** | ✅ **Correto**   | Declara `d` como caractere sem sinal (`unsigned char`).                                                                                          |
| **e) `unsigned e;`**      | ✅ **Correto**   | Em C, `unsigned` sozinho é uma abreviação válida para `unsigned int`.                                                                            |
| **f) `long float f;`**    | ❌ **Incorreto** | `long` não pode ser combinado com `float` dessa maneira. Para maior precisão, utiliza-se `long double`.                                          |
| **g) `long g;`**          | ✅ **Correto**   | Declara `g` como `long int`; quando `long` aparece sozinho, o tipo inteiro é implícito.                                                          |
| **h) `long double h;`**   | ✅ **Correto**   | Declara `h` como ponto flutuante de precisão estendida (`long double`).                                                                          |
*/
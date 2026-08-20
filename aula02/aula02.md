# Aula 02 - Variáveis, tipos de dados, `printf()` e `scanf()`

Na Aula 01, fizemos um programa simples que imprimia uma mensagem. Agora vamos fazer nossos programas começarem a **armazenar e receber informações**.

Ao final desta aula, você deverá entender códigos como:

```c
int idade = 25;
float altura = 1.75;

printf("Idade: %d\n", idade);
printf("Altura: %.2f\n", altura);
```

Não se preocupe em decorar tudo agora. O objetivo é entender cada parte com calma.

---

## 1. O que é uma variável?

Uma variável é um espaço que reservamos na memória para guardar uma informação.

Imagine pequenas caixas:

```text
+-------------+
| idade       |
|     25      |
+-------------+

+-------------+
| altura      |
|    1.75     |
+-------------+
```

Em C, precisamos informar **qual tipo de informação** cada caixa poderá armazenar.

Por exemplo:

```c
int idade = 25;
```

Podemos separar essa instrução em:

```text
int     idade     =     25;
 |        |       |      |
tipo     nome   recebe  valor
```

O `;` indica o final da instrução.

Também podemos declarar primeiro e atribuir depois:

```c
int idade;

idade = 25;
```

Isso é perfeitamente válido.

---

## 2. Tipos primitivos

Existem vários tipos em C. Por enquanto, vamos trabalhar principalmente com quatro.

### `int` - números inteiros

Usado para números sem casas decimais:

```c
int idade = 30;
int quantidade = 15;
int ano = 2026;
```

### `float` - números decimais

Usado para números com casas decimais:

```c
float altura = 1.75;
float temperatura = 23.5;
```

### `double` - números decimais com maior precisão

```c
double salario = 7850.45;
```

Por enquanto, basta saber que `double` consegue trabalhar com maior precisão que `float`.

### `char` - um caractere

```c
char letra = 'A';
char resposta = 'S';
```

Observe uma diferença importante:

```c
'A'
```

usa **aspas simples** porque representa um único caractere.

---

## 3. Imprimindo variáveis com `printf()`

Nós já conhecemos:

```c
printf("Hello World!\n");
```

Mas `printf()` também consegue mostrar valores de variáveis.

Exemplo:

```c
#include <stdio.h>

int main(void)
{
    int idade = 25;

    printf("Minha idade e %d anos.\n", idade);

    return 0;
}
```

O `%d` é um **especificador de formato**.

Ele basicamente diz:

```text
Neste lugar eu quero colocar um número inteiro.
```

Então:

```c
printf("Minha idade e %d anos.\n", idade);
```

pode ser imaginado como:

```text
Minha idade e [idade] anos.
                 |
                25
```

Resultado:

```text
Minha idade e 25 anos.
```

---

## 4. Especificadores importantes

Cada tipo possui seu especificador.

| Tipo | Exemplo | `printf` |
|---|---:|---|
| `int` | `25` | `%d` |
| `float` | `1.75` | `%f` |
| `double` | `1.75` | `%f` |
| `char` | `'A'` | `%c` |

Por exemplo:

```c
int idade = 30;
float altura = 1.75;
char categoria = 'A';

printf("Idade: %d\n", idade);
printf("Altura: %f\n", altura);
printf("Categoria: %c\n", categoria);
```

O resultado será parecido com:

```text
Idade: 30
Altura: 1.750000
Categoria: A
```

Mas provavelmente não queremos seis casas decimais na altura.

Podemos escrever:

```c
printf("Altura: %.2f\n", altura);
```

O `.2` significa mostrar **duas casas decimais**.

Resultado:

```text
Altura: 1.75
```

---

## 5. Recebendo informações com `scanf()`

Até agora fomos nós que definimos o valor da variável:

```c
int idade = 25;
```

Mas podemos pedir para o usuário informar a idade.

É aqui que entra `scanf()`.

Veja:

```c
#include <stdio.h>

int main(void)
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Voce tem %d anos.\n", idade);

    return 0;
}
```

Ao executar, a interação pode ficar assim:

```text
Digite sua idade: 30
Voce tem 30 anos.
```

Observe que inicialmente fizemos:

```c
int idade;
```

A variável existe, mas ainda não colocamos um valor nela.

Depois:

```c
scanf("%d", &idade);
```

o usuário fornece esse valor.

---

## 6. Mas o que é esse `&`?

Essa parte costuma causar confusão no começo:

```c
scanf("%d", &idade);
```

O `&` está relacionado ao **endereço da variável na memória**.

Imagine:

```text
Memória do computador

Endereço       Variável       Valor

0x1000         idade           30
               ^
               |
             &idade
```

Quando usamos:

```c
&idade
```

estamos fornecendo ao `scanf()` o local onde ele deve armazenar o valor digitado.

Você vai entender isso muito melhor quando estudarmos **ponteiros**.

Por enquanto, guarde:

```c
scanf("%d", &idade);
```

Para ler um `int`, usamos `%d` e normalmente passamos `&variavel`.

---

## 7. Exemplo com mais de uma variável

Veja este programa:

```c
#include <stdio.h>

int main(void)
{
    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\n--- Dados ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
```

Se digitarmos:

```text
Digite sua idade: 30
Digite sua altura: 1.75
```

teremos:

```text
--- Dados ---
Idade: 30 anos
Altura: 1.75 metros
```

Observe a relação:

```text
int
 |
%d

float
 |
%f
```

Essa relação será bastante importante enquanto você estiver aprendendo C.

---

## 8. Resumo da aula

Nesta aula você viu que:

- variável é um espaço usado para guardar informação;
- `int` guarda números inteiros;
- `float` e `double` guardam números com casas decimais;
- `char` guarda um caractere;
- `printf()` mostra informações na tela;
- `scanf()` recebe informações digitadas pelo usuário;
- o `&` em `scanf()` indica onde o valor digitado será armazenado;
- especificadores como `%d`, `%f` e `%c` precisam combinar com o tipo da variável.

Agora pratique os exercícios da aula antes de olhar qualquer solução pronta.

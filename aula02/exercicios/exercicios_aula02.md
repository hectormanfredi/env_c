# Exercícios - Aula 02

Agora é sua vez. **Não consulte soluções prontas ainda.**

Faça cada exercício em um arquivo separado, por exemplo:

```text
aula02/
├── exercicio01.c
├── exercicio02.c
└── exercicio03.c
```

Compile um deles assim:

```powershell
gcc -Wall -Wextra exercicio01.c -o exercicio01.exe
```

E execute:

```powershell
.\exercicio01.exe
```

---

## Exercício 1 - Cadastro simples

Crie um programa que peça:

- idade;
- altura;
- uma letra representando uma categoria.

Depois mostre os três valores.

Exemplo de interação:

```text
Digite sua idade: 30
Digite sua altura: 1.75
Digite sua categoria: A

--- Cadastro ---
Idade: 30
Altura: 1.75
Categoria: A
```

---

## Exercício 2 - Calculadora de soma

Peça dois números inteiros:

```text
Digite o primeiro numero: 10
Digite o segundo numero: 20
```

Armazene-os em duas variáveis.

Crie uma terceira variável para armazenar a soma e apresente:

```text
Resultado: 30
```

Aqui você precisará descobrir como fazer algo semelhante a:

```text
resultado recebe numero1 + numero2
```

usando a sintaxe de C.

---

## Exercício 3 - Dados de um produto

Crie um programa que receba:

```text
Codigo do produto: 123
Quantidade: 4
Preco unitario: 19.90
```

Depois calcule:

```text
valor total = quantidade x preco
```

E apresente algo semelhante a:

```text
--- Compra ---
Codigo: 123
Quantidade: 4
Preco unitario: 19.90
Total: 79.60
```

Aqui você precisará utilizar **`int` e `float` juntos** e descobrir qual operador C utiliza para multiplicação.

Comece pelo **Exercício 1**. Quando terminar, envie somente o seu código para correção.


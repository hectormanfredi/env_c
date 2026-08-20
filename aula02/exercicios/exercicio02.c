// ## Exercício 2 - Calculadora de soma

// Peça dois números inteiros:

// ```text
// Digite o primeiro numero: 10
// Digite o segundo numero: 20
// ```

// Armazene-os em duas variáveis.

// Crie uma terceira variável para armazenar a soma e apresente:

// ```text
// Resultado: 30
// ```

// Aqui você precisará descobrir como fazer algo semelhante a:

// ```text
// resultado recebe numero1 + numero2
// ```

// usando a sintaxe de C.

#include <stdio.h>

int main(void) {
    int numero1, numero2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;
    printf("Resultado: %d\n", resultado);

    return 0;

}
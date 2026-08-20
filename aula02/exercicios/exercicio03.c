// ## Exercício 3 - Dados de um produto

// Crie um programa que receba:

// ```text
// Codigo do produto: 123
// Quantidade: 4
// Preco unitario: 19.90
// ```

// Depois calcule:

// ```text
// valor total = quantidade x preco
// ```

// E apresente algo semelhante a:

// ```text
// --- Compra ---
// Codigo: 123
// Quantidade: 4
// Preco unitario: 19.90
// Total: 79.60
// ```

// Aqui você precisará utilizar **`int` e `float` juntos** e descobrir qual operador C utiliza para multiplicação.

#include <stdio.h>

int main(void) {

    int codigo_produto;
    int quantidade;
    float preco;
    float total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    total = quantidade * preco;

    printf("--- Compra --- \n");
    printf("Codigo: %d \n", codigo_produto);
    printf("Quantidade: %d \n", quantidade);
    printf("Preco unitario: %.2f \n", preco);
    printf("O Total e de: %.2f", total);


    return 0;
}
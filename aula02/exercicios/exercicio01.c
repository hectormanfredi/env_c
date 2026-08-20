// Crie um programa que apareça:

// idade;
// altura;
// uma letra representando uma categoria;

// Depois mostre os três valores.

// Exemplo de interação:

// Digite sua idade: 30
// Digite sua altura: 1.75
// Digite sua categoria: A

// --- Cadastro ---
// Idade: 30
// Altura: 1.75
// Categoria: A

# include <stdio.h>

int main(void) {
    int idade;
    float altura;
    char categoria;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite a sua categoria: ");
    scanf(" %c", &categoria);

    printf("\n");

    printf("-- Cadastro -- \n");
    printf("Idade: %d \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Categoria: %c \n", categoria);

    return 0;
}
// importando a biblioteca padrao de entrada e saida
#include <stdio.h>

// int main() {
//     int idade = 35;
//     float altura = 1.70;

//     printf("Idade: %d\n", idade);
//     printf("Altura: %.2f\n", altura);
    
//     return 0;
// }

// com o %.2f podemos formatar numeros float para que sejam exibidos com apenas duas casas decimais.
// int main() {
//     int idade = 35;
//     float altura = 1.70;
//     char categoria = 'A';

//     printf("Idade: %d\n", idade);
//     printf("Altura: %.2f\n", altura);
//     printf("Categoria: %c\n", categoria);    
//     return 0;
// }

// o & serve para darmos o endereço de memoria da variavel, para que o scanf consiga armazenar o valor digitado pelo usuario no local correto.
int main() {
    int idade;
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("--- Dados --- \n");
    printf("Idade: %d \n", idade);

    printf("Altura: %.2f metros\n", altura);

    return 0;
}
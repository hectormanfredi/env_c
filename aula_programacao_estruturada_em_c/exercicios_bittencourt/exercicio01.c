#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Entrada de dados
    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    // Validação simples
    if (altura <= 0 || peso <= 0) {
        printf("Peso e altura devem ser valores maiores que zero.\n");
        return 1;
    }

    // Cálculo do IMC
    imc = peso / (altura * altura);

    // Saída formatada com 2 casas decimais
    printf("\nSeu IMC e: %.2f\n", imc);

    // Classificação
    printf("Classificação: ");
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obesidade Grau I\n");
    } else if (imc < 40.0) {
        printf("Obesidade Grau II\n");
    } else {
        printf("Obesidade Grau III (Mórbida)\n");
    }

    return 0;
}

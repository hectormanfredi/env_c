// Vamos calcular o IMC
// Precisamos de altura e peso
// peso / altura 2

// Menor que 18,5 kg/m²: Baixo peso (magreza)
// De 18,5 a 24,9 kg/m²: Peso normal (eutrofia)
// De 25,0 a 29,9 kg/m²: Sobrepeso
// De 30,0 a 34,9 kg/m²: Obesidade grau I
// De 35,0 a 39,9 kg/m²: Obesidade grau II
// Igual ou maior que 40,0 kg/m²: Obesidade grau III (mórbida)

#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Vamos calcular o IMC!\n");
    printf("Me diga o seu peso: ");
    scanf("%f", &peso);

    printf("Agora me diga sua altura:");
    scanf("%f", &altura);

    if(peso <= 0 || altura <= 0){
        printf("Valores inválidos.");
        return 1;
    } else {
        imc = peso / (altura * altura);

        printf("O seu imc é: %.2f\n", imc);

        printf("--- Classificação --- \n");
        if(imc < 18.5) {
            printf("Baixo peso (magreza) \n");
        } else if(imc < 25){
            printf("Peso Normal (eutrofia)");
        } else if(imc < 30){
            printf("Sobrepeso");
        } else if(imc < 35){
            printf("Obesidade grau I");
        } else if(imc < 40){
            printf("Obesidade grau II");
        } else {
            printf("Obesidade grau III (morbida)");
        }

    }

    return 0;

}

// clang -Wall -Wextra aula_programacao_estruturada_em_c/exercicios_bittencourt/exercicio-calc-imc.c -o aula_programacao_estruturada_em_c/exercicios_bittencourt/exercicio-calc-imc

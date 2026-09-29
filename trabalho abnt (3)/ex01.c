#include <stdio.h>
int main() {
    float peso, altura, imc;
    char nome[50];

    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc <= 24.9)
        printf("Peso normal\n");
    else if (imc <= 29.9)
        printf("Sobrepeso\n");
    else if (imc <= 34.9)
        printf("Obesidade grau I\n");
    else if (imc <= 39.9)
        printf("Obesidade grau II\n");
    else
        printf("Obesidade grau III\n");

}
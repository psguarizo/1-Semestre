#include <stdio.h>

void main() {
    float area, litros;

    printf("Digite o tamanho da area em m²: ");
    scanf("%f", &area);

    litros = (area / 6) * 1.1;

    int latas = ceil(litros / 18);
    float preco_latas = latas * 80;

    int galoes = ceil(litros / 3.6);
    float preco_galoes = galoes * 25;

    int latas_mix = litros / 18;
    float resto = litros - (latas_mix * 18);

    int galoes_mix = ceil(resto / 3.6);
    float preco_mix = (latas_mix * 80) + (galoes_mix * 25);

    printf("\n--- RESULTADO ---\n");

    printf("\n1) Apenas latas:\n");
    printf("Quantidade: %d latas\n", latas);
    printf("Preco: R$ %.2f\n", preco_latas);

    printf("\n2) Apenas galoes:\n");
    printf("Quantidade: %d galoes\n", galoes);
    printf("Preco: R$ %.2f\n", preco_galoes);

    printf("\n3) Misturando:\n");
    printf("Latas: %d\n", latas_mix);
    printf("Galoes: %d\n", galoes_mix);
    printf("Preco: R$ %.2f\n", preco_mix);
}
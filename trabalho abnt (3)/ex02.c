#include <stdio.h>
void main() {
    float peso, excesso = 0, multa = 0;

    printf("Digite o peso dos peixes: ");
    scanf("%f", &peso);

    if (peso > 50) {
        excesso = peso - 50;
        multa = excesso * 4;
    }

    printf("Excesso: %.2f kg\n", excesso);
    printf("Multa: R$ %.2f\n", multa);

}
#include <stdio.h>

void main() {
    float preco, total = 0, desconto, valorDesconto, totalPagar;
    int qtd;
    char resp;

    resp = 's';

    while (resp == 's' || resp == 'S') {
        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

        printf("Digite a quantidade: ");
        scanf("%d", &qtd);

        total = total + (preco * qtd);

        printf("Mais algum produto? (s/n): ");
        scanf(" %c", &resp); 
    }

    printf("\nTotal da compra: R$ %.2f\n", total);

    // Desconto
    printf("Informe a porcentagem de desconto: ");
    scanf("%f", &desconto);

    valorDesconto = total * (desconto / 100);
    totalPagar = total - valorDesconto;

    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Total a pagar: R$ %.2f\n", totalPagar);
}
#include <stdio.h>
#include <string.h>
#include <windows.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto p;

    printf("Digite o nome do produto: ");
    fgets(p.nome, 50, stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';

    printf("Digite o preco: ");
    scanf("%f", &p.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);

    printf("\nNome: %s\n", p.nome);
    printf("Preco: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);

    return 0;
}
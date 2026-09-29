#include<stdio.h>
#include<windows.h>

struct Produto{
    char nome[50];
    float preco;
    int quantidade;
};

void main(){
    SetConsoleOutputCP(65001);

    struct Produto prods[5];
    float totalProduto, totalGeral = 0;

    for(int i = 0; i < 5; i++){
        printf("Produto %d\n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        gets(prods[i].nome);

        printf("Preço: ");
        scanf("%f", &prods[i].preco);

        printf("Quantidade: ");
        scanf("%d", &prods[i].quantidade);

        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        totalProduto = prods[i].preco * prods[i].quantidade;
        totalGeral += totalProduto;

        printf("Produto: %s\n", prods[i].nome);
        printf("Preço: %.2f\n", prods[i].preco);
        printf("Quantidade: %d\n", prods[i].quantidade);
        printf("Valor em estoque: %.2f\n\n", totalProduto);
    }

    printf("Total geral do estoque: %.2f", totalGeral);

    getch();
}
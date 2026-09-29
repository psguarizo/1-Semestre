#include<stdio.h>
#include<windows.h>
#include<string.h>

struct Produto{
    char nome[50];
    float preco;
    int quantidade;
};

void main(){
    SetConsoleOutputCP(65001);

    struct Produto prods[5];
    float totalProduto, totalGeral = 0;

    strcpy(prods[0].nome, "Teclado");
    strcpy(prods[1].nome, "Mouse");
    strcpy(prods[2].nome, "Monitor");
    strcpy(prods[3].nome, "Notebook");
    strcpy(prods[4].nome, "Impressora");

    prods[0].preco = 100;
    prods[1].preco = 50;
    prods[2].preco = 800;
    prods[3].preco = 2500;
    prods[4].preco = 400;

    prods[0].quantidade = 10;
    prods[1].quantidade = 20;
    prods[2].quantidade = 5;
    prods[3].quantidade = 2;
    prods[4].quantidade = 4;

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
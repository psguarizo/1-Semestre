#include <stdio.h>
#include <windows.h>

void main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b;
    char op;

    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &a, &b);

    printf("Escolha a opção:\n");
    printf(" '+' Somar\n '-' Subtrair\n '' Multiplicar\n '/' Dividir:\n");
    scanf(" %c", &op);

    if (op == '+')
        printf("A soma de %d + %d = %d", a, b, a + b);
    else if (op == '-')
        printf("A subtração de %d - %d = %d", a, b, a - b);
    else if (op == '*')
        printf("A multiplicação de %d x %d = %d", a, b, a * b);
    else if (op == '/')
        printf("A divisão de %d ÷ %d = %d", a, b, a / b);
    else
        printf("Opção inválida");

getch();
}
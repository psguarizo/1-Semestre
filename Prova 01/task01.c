#include <stdio.h>
#include <windows.h>

int main() {
    int empresas, anos, total = 0;
    SetConsoleOutputCP(CP_UTF8);

    printf("Em quantas empresas voce ja trabalhou? ");
    scanf("%d", &empresas);
    for (int i = 1; i <= empresas; i++) {
        printf("Na %da empresa ficou quantos anos: ", i);
        scanf("%d", &anos);

        total = total + anos;
    }
    printf("\nVoce possui %d anos de experiencia\n", total);

    getch();
}
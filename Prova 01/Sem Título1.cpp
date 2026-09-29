#include <stdio.h>
#include <windows.h>

int main() {
    int empresas, i, anos, total = 0;
    SetConsoleOutputCP(CP_UTF8);

    printf("Em quantas empresas voce ja trabalhou? ");
    scanf("%d", &empresas);

    for (i = 1; i <= empresas; i++) {
        printf("Na %d empresa ficou quantos anos: ", i);
        scanf("%d", &anos);

        if (anos < 0) {
            printf("Entrada invalida, considerado 0 anos.\n");
            anos = 0;
        }

        total += anos; 
    }

    printf("\nVoce possui %d anos de experiencia\n", total);

 	getch();
}
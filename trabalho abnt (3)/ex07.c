#include <stdio.h>
int main() {
    int resp, soma = 0;
    char continuar;

    do {
        soma = 0;

        printf("Telefonou para a vitima? (1=sim 0=nao): ");
        scanf("%d", &resp);
        soma += resp;

        printf("Esteve no local do crime? ");
        scanf("%d", &resp);
        soma += resp;

        printf("Mora perto da vitima? ");
        scanf("%d", &resp);
        soma += resp;

        printf("Devia para a vitima? ");
        scanf("%d", &resp);
        soma += resp;

        printf("Ja trabalhou com a vitima? ");
        scanf("%d", &resp);
        soma += resp;

        if (soma == 2)
            printf("Suspeita\n");
        else if (soma >= 3 && soma <= 4)
            printf("Cumplice\n");
        else if (soma == 5)
            printf("Assassino\n");
        else
            printf("Inocente\n");

        printf("Deseja analisar outro suspeito? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's');

}
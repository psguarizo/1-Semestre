#include <stdio.h>

int main() {
    char fuma, bebe, drogas;
    int totalVicios = 0;

    printf("Voce fuma? (s/n): ");
    scanf(" %c", &fuma);
    while (fuma != 's' && fuma != 'n') {
        printf("Entrada invalida! Digite s ou n: ");
        scanf(" %c", &fuma);
    }

    printf("Voce bebe? (s/n): ");
    scanf(" %c", &bebe);
    while (bebe != 's' && bebe != 'n') {
        printf("Entrada invalida! Digite s ou n: ");
        scanf(" %c", &bebe);
    }

    printf("Voce usa drogas? (s/n): ");
    scanf(" %c", &drogas);
    while (drogas != 's' && drogas != 'n') {
        printf("Entrada invalida! Digite s ou n: ");
        scanf(" %c", &drogas);
    }

    
    if (fuma == 's') {
        totalVicios++;
    }

    if (bebe == 's') {
        totalVicios++;
    }

    if (drogas == 's') {
        totalVicios++;
    }

    if (totalVicios == 0) {
        printf("Apto\n");
    } else if (totalVicios == 1) {
        printf("Reavaliado\n");
    } else {
        printf("Inapto\n");
    }

}
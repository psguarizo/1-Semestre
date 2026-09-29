#include <stdio.h>
int main() {
    int n, i;
    float nota, media = 0;

    printf("Quantas notas? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        media += nota;
    }

    media = media / n;

    printf("Media: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado\n");
    else if (media >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

}
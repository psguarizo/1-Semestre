#include <stdio.h>
#include <windows.h>

float media(float* array, int tamanho){
    float total = 0;

    for(int i = 0; i < tamanho; i++){
        total += array[i];
    }

    return total / tamanho;
}

void main(){
    SetConsoleOutputCP(CP_UTF8);

    int t;

    printf("Digite quantas notas o aluno terá:");
    scanf("%d", &t);

    float notas[t];

    for(int i = 0; i < t; i++){
        printf("%dª nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("Notas digitadas\n");

    for(int i = 0; i < t; i++){
        printf("%dª nota: %.1f\n", i + 1, notas[i]);
    }

    printf("Média: %.2f", media(notas, t));

    getch();
}
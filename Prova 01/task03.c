#include <stdio.h>

int main() {
    char nome[50];
    char opcao;
    char continuar = 's';

    int senha = 0;

    while (continuar == 's' || continuar == 'S') {

        printf("\nInforme o nome do paciente: ");
        scanf(" %[^\n]", nome);

        printf("Selecione o tipo de atendimento:\n");
        printf("C - Atendimento comum\n");
        printf("P - Atendimento prioritario\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);

        if (opcao == 'C' || opcao == 'c') {
            senha++;
            printf("Senha gerada para %s: C%d\n", nome, senha);
        }
        else if (opcao == 'P' || opcao == 'p') {
            senha++;
            printf("Senha gerada para %s: P%d\n", nome, senha);
        }
        else {
            printf("Opcao invalida! Paciente nao registrado.\n");
            continue;
        }

        printf("Deseja cadastrar outro paciente? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nSistema encerrado. Total de senhas emitidas: %d\n", senha);

}
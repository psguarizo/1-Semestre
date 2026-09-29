#include <stdio.h>
#include <windows.h>
#define MAX_CHAR 200
void main(){
    SetConsoleOutputCP(CP_UTF8);
    FILE *arquivo = fopen("texto_aleatório.txt","r");
    if (arquivo == NULL){
        printf("Erro ao ler arquivo nao_estruturado.txt");
        getch();
        return 0;
    }else{
        printf("Arquivo aberto.\n");
    }
    char linha[MAX_CHAR];
    while(fgets(arquivo, sizeof(linha),arquivo) != NULL){
        printf("%s", linha);
    }
    fclose(arquivo);
    getch();
}

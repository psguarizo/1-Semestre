#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][30], aux[30];
    int i, j;
    for(i = 0; i < 5; i++) scanf("%s", nomes[i]);

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
    for(i = 0; i < 5; i++) printf("%s\n", nomes[i]);
    return 0;
}
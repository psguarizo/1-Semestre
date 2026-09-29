#include <stdio.h>

int main() {
    int n[10], i, pMa, pMe;
    for(i = 0; i < 10; i++) scanf("%d", &n[i]);

    pMa = pMe = 0;
    for(i = 1; i < 10; i++) {
        if(n[i] > n[pMa]) pMa = i;
        if(n[i] < n[pMe]) pMe = i;
    }
    printf("Posicao Maior: %d | Posicao Menor: %d", pMa, pMe);
    return 0;
}
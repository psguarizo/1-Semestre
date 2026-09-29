#include <stdio.h>

int main() {
    int n[10], i, j, aux;
    for(i = 0; i < 10; i++) scanf("%d", &n[i]);

    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(n[i] < n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }
    for(i = 0; i < 10; i++) printf("%d ", n[i]);
    return 0;
}
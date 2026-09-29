#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[25];
    srand(time(NULL));

    for(int i=0;i<25;i++){
        v[i] = rand()%101;
        printf("%d ", v[i]);
    }
    return 0;
}
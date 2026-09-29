#include <stdio.h>

int main(){
    int v[5];

    for(int i=0;i<5;i++){
        scanf("%d",&v[i]);
    }

    for(int i=4;i>=0;i--){
        printf("%d ", v[i]);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[25], op;
    srand(time(NULL));

    for(int i=0;i<25;i++){
        v[i] = rand()%101;
    }

    printf("1-Crescente 2-Decrescente: ");
    scanf("%d",&op);

    for(int i=0;i<24;i++){
        for(int j=i+1;j<25;j++){
            if((op==1 && v[i]>v[j]) || (op==2 && v[i]<v[j])){
                int tmp=v[i];
                v[i]=v[j];
                v[j]=tmp;
            }
        }
    }

    for(int i=0;i<25;i++) printf("%d ", v[i]);
}
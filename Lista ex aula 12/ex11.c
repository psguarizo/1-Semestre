#include <stdio.h>

int main(){
    int v[10];

    for(int i=0;i<10;i++) scanf("%d",&v[i]);

    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(v[i]>v[j]){
                int t=v[i]; v[i]=v[j]; v[j]=t;
            }
        }
    }

    for(int i=0;i<10;i++) printf("%d ", v[i]);
}
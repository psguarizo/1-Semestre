#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[5][5], num, achou=0;
    srand(time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j] = rand()%101;
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Digite numero: ");
    scanf("%d",&num);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]==num){
                printf("Encontrado em [%d][%d]\n", i, j);
                achou=1;
            }
        }
    }

    if(!achou) printf("Nao encontrado");
}
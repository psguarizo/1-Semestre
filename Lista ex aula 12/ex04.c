#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[5][5], menor, li=0, lj=0;
    srand(time(NULL));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j] = rand()%101;
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    menor = m[0][0];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j] < menor){
                menor = m[i][j];
                li=i; lj=j;
            }
        }
    }

    printf("\nMenor: %d na posicao [%d][%d]", menor, li, lj);
}
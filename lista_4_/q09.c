#include <stdio.h>


int main(){
    #define TAM 3
    int vetor[TAM][TAM];

    puts("diga os valores da sua matriz 3x3");

    for(int i = 0 ; i <= 2 ; i++){
        for(int j = 0 ; j <= 2 ; j++){
            scanf("%d",& vetor[i][j]);
        }
    }

    for(int i = 0 ; i <= 2 ; i++){
        printf("%d\n", vetor[i][i]);
    }

}

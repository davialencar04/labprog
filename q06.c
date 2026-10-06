#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor[2];
    srand(time(NULL));

    for(int i = 0 ; i <= 2 ; i++){
        vetor[i] = rand() % 19;
    }
    
    for(int i = 0 ; i <= 2 ; i++){
        printf("%d\n", vetor[i]);
    }
}

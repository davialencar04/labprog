#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetor[100];
    int vetorb[100];
    
    puts("defina o intervalo do seu vetor de 100 números: ");
    int x;
    int y;
    scanf("%d",& x);
    scanf("%d",& y);

    srand(time(NULL));

    for(int i = 0 ; i <= 99 ; i++){
        vetor[i] = rand() %(x - y + 1) + y;
    }

    for(int i = 1 ; i <= 99 ; i++){
        int valor_atual = vetor[i];
        int k;
        for(k = i - 1 ; k >= 0 && vetor[k] > valor_atual ; k--){
            vetor[k+1] = vetor[k];
        }
        vetor[k+1] = valor_atual;
    }

    for(int i = 0 ; i <= 99 ; i++){
        printf("%d\n", vetor[i]);
    }

    for(int i = 0 ; i <= 99 ; i++){
        vetorb[i] = rand() %(x - y +1) + y;
    }
    
    for(int i = 0 ; i <= 99 ; i++){
        for(int j = 0 ; j < 99 ; j++){
            if (vetorb [j] > vetorb [j+1]){
                int temp = vetorb[j+1];
                vetorb[j+1] = vetorb[j];
                vetorb[j] = temp;
            }    
        }
    }

    for(int i = 0 ; i <= 99 ; i++){
        printf("%d\n", vetorb[i]);
    }

    

    
    
}

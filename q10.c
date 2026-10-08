#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    #define TAM 3
    int vetor[TAM][TAM];
    int flag = 0;

    srand(time(NULL));
    
    for(int i = 0 ; i <= 2 ; i++){
        for(int k = 0 ; k <= 2 ; k++){
            vetor[i][k] = rand()%10;
        }
    }

    for(int i = 0 ; i <= 2 ; i++){
        for(int k = 0 ; k <= 2 ; k++){
            printf(" %d", vetor[i][k]);
        }
        printf("\n");
    }

    puts("diga qual numero desejas procurar e descobrir suas repetições: ");
    int x;  
    scanf("%d",& x);

    for(int i = 0 ; i <= 2 ; i++){
        for(int k = 0 ; k <= 2 ; k++){
            if(vetor[i][k] == x){
                flag = flag+1;
            }   
        }    
    }
    printf("o numero escolhido %d aparece %dx", x , flag);
}    

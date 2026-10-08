#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int vetor[3];
    srand(time(NULL));
    double mediaa = 0;
    double produto = 1;

    for(int i = 0 ; i <= 2 ; i++){
        vetor[i] = rand() % 19 + 1;
    }
    
    for(int i = 0 ; i <= 2 ; i++){
        printf("%d\n a", vetor[i]);
    }
    
    for(int i = 0 ; i <= 2 ; i++){
        mediaa = mediaa + vetor[i];
       
    }
    mediaa = mediaa/3;
    printf("%lf\n b", mediaa);
    
    for(int i = 0 ; i <= 2 ; i++){
        produto = produto * vetor[i];
    }
    double mediag = pow(produto , 1.0/3);
    printf("%lf", mediag);
}

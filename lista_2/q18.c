#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double n1;
double somatorio;

int main(){

    for(int i = 0 ; i <= 64 ; i++){
        
        n1 = pow(2 , i);
        somatorio = n1 + somatorio;

    }
    printf("o valor de grãos da última casa é igual a: %f\n",n1);
    printf("o valor do somatório de todas as casas fica: %f\n", somatorio);
}
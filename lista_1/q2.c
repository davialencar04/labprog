#include <stdio.h>

float valor;

int main(){
    puts("escreva um número");
    scanf("%f",&valor);
    
    printf("seu valor em números reais com uma casa decimal fica: %1f",valor);
    return 0;    
}
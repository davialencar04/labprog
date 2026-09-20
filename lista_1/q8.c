#include <stdio.h>

int valor;
int sucessor;
int antecessor;

int main(){
    puts("digite um inteiro");
    scanf("%d",& valor);
    
    sucessor = valor+1;
    antecessor = valor-1;

    printf("o sucessor de %d é %d e seu antecessor é %d",valor,sucessor,antecessor);
}
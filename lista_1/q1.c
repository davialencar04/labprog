#include <stdio.h>

int valor;

int main(){
    puts("escreva um número");
    scanf("%d",&valor);

    printf("o valor do seu número em decimal é: %d em hexa fica: %x já em octal fica: %o",valor,valor,valor);
    return 0;    
}
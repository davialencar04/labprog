#include <stdio.h>

int valor;
int valorfinal;

int main(){
    puts("diga um valor inteiro");
    scanf("%d",& valor);

    valorfinal = valor*valor;

    printf("o quadrado do valor escolhido é igual a: %d",valorfinal);

}
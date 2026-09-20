#include <stdio.h>

float valor;
float valor2;
float prova;

int main(){
    puts("diga um número inteiro");
    scanf("%f",& valor);

    puts("diga outro número inteiro");
    scanf("%f",& valor2);

    prova = valor/valor2;

    printf("se o valor a seguirnão for um valor inteiro, o primeiro algarismo é multiplo do segundo: %f", prova);

    return 0;
}
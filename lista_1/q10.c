#include <stdio.h>

float cotacao;
float valor;
float resultado;

int main(){
    puts("diga o valor em reais que deseja cambiar");
    scanf("%f",& valor);

    puts("diga a cotação atual do dolar");
    scanf("%f",& cotacao);

    resultado = valor/cotacao;

    printf("o valor cambiado fica: %f",& resultado);

    return 0;
}
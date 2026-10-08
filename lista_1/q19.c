#include <stdio.h>

int valor;
float paridade;

int main(){
    puts("diga um valor");
    scanf("%d",& valor);

    paridade = valor%2;

    printf("se o valor a seguir for qualquer número além de 0, esse número é impar: %f ", paridade);

}
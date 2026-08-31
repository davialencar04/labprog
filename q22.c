#include <stdio.h>

int main() {

    int numero;
    int centena, dezena, unidade;
    int inverso;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    inverso = unidade * 100 + dezena * 10 + centena;

    printf("Numero invertido: %d\n", inverso);

    return 0;
}
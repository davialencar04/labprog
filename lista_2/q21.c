#include <stdio.h>

int main() {

    int numero;
    int d1, d2, d3, d4, d5;

    printf("Digite um numero de cinco digitos: ");
    scanf("%d", &numero);

    d1 = numero / 10000;
    d2 = (numero / 1000) % 10;
    d3 = (numero / 100) % 10;
    d4 = (numero / 10) % 10;
    d5 = numero % 10;

    if (d1 == d5 && d2 == d4) {
        printf("O numero e um palindromo.\n");
    } else {
        printf("O numero nao e um palindromo.\n");
    }

    return 0;
}
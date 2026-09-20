#include <stdio.h>

int main() {

    int numero;
    int maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (!(numero < 0 && numero % 2 == 0)) {

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        printf("Digite outro numero: ");
        scanf("%d", &numero);
    }

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nProduto: %d\n", maior * menor);

    return 0;
}
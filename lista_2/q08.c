#include <stdio.h>

int main() {

    double valor;
    int prestacao;
    double entrada;

    printf("Digite o valor da mercadoria: ");
    scanf("%lf", &valor);

    prestacao = (int)(valor / 3);   // pega apenas a parte inteira
    entrada = valor - 2 * prestacao;

    printf("Entrada: R$ %.2lf\n", entrada);
    printf("1a prestacao: R$ %d.00\n", prestacao);
    printf("2a prestacao: R$ %d.00\n", prestacao);

    return 0;
}
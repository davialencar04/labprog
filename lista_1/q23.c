#include <stdio.h>

int main() {

    int x, n, resultado;

    printf("Digite x: ");
    scanf("%d", &x);

    printf("Digite n: ");
    scanf("%d", &n);

    resultado = x << n;

    printf("%d * 2^%d = %d\n", x, n, resultado);

    return 0;
}
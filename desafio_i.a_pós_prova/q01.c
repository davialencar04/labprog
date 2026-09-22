#include <stdio.h>

int main() {
    int R, G, B;
    int M;

    scanf("%d %d %d", &R, &G, &B);
    scanf("%d", &M);

    /* Limpa o último bit de cada componente */
    R = R & 254;
    G = G & 254;
    B = B & 254;

    /* Insere os bits da mensagem */
    R = R | ((M >> 2) & 1);
    G = G | ((M >> 1) & 1);
    B = B | (M & 1);

    printf("%d %d %d\n", R, G, B);

    return 0;
}

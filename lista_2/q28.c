#include <stdio.h>

int main() {

    unsigned char vetor[20];
    unsigned char X;
    int Y;

    /* Preenche o vetor */
    for (int i = 0; i < 20; i++) {
        printf("vetor[%d] = ", i);
        scanf("%hhu", &vetor[i]);
    }

    printf("Digite X (0 a 255): ");
    scanf("%hhu", &X);

    printf("Digite Y (Y >= 5): ");
    scanf("%d", &Y);

    if (Y < 5 || Y > 14) {
        printf("Posicao invalida!\n");
        return 1;
    }

    /* Esconde os bits 7,6,5,4 nas posições anteriores */
    for (int i = 0; i < 4; i++) {

        unsigned char bit = (X >> (7 - i)) & 1;

        vetor[Y - 4 + i] &= 0xFE;
        vetor[Y - 4 + i] |= bit;
    }

    /* Esconde os bits 3,2,1,0 nas posições posteriores */
    for (int i = 0; i < 4; i++) {

        unsigned char bit = (X >> (3 - i)) & 1;

        vetor[Y + 1 + i] &= 0xFE;
        vetor[Y + 1 + i] |= bit;
    }

    printf("\nVetor com os bits escondidos:\n");

    for (int i = 0; i < 20; i++) {
        printf("%3hhu ", vetor[i]);
    }

    printf("\n");

    return 0;
}
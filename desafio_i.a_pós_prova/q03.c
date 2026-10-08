#include <stdio.h>

int main(void) {
    int n, i;
    int pixel, x_min, x_max;
    int x;
    float x_norm;

    printf("Digite o numero de pixels (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("A imagem precisa ter pelo menos 1 pixel.\n");
        return 0;
    }

    /* Le o primeiro pixel para inicializar min e max */
    printf("Digite a intensidade do pixel 1: ");
    scanf("%d", &pixel);
    x_min = pixel;
    x_max = pixel;

    /* Le os demais pixels, atualizando min e max, sem guardar nenhum vetor */
    for (i = 2; i <= n; i++) {
        printf("Digite a intensidade do pixel %d: ", i);
        scanf("%d", &pixel);

        if (pixel < x_min) {
            x_min = pixel;
        }
        if (pixel > x_max) {
            x_max = pixel;
        }
    }

    printf("\nMenor intensidade (x_min): %d\n", x_min);
    printf("Maior intensidade (x_max): %d\n", x_max);

    /* Le o pixel que sera normalizado */
    printf("\nDigite a intensidade do pixel a ser normalizado: ");
    scanf("%d", &x);

    if (x_max == x_min) {
        /* Evita divisao por zero caso todos os pixels tenham a mesma intensidade */
        printf("Nao e possivel normalizar: x_max e x_min sao iguais.\n");
    } else {
        x_norm = (float)(x - x_min) / (float)(x_max - x_min);
        printf("Valor normalizado: %.4f\n", x_norm);
    }

    return 0;
}

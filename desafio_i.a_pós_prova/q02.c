#include <stdio.h>

int main(void) {
    int n;
    float x_ant, x_atual, x_prox, y;
    int i;

    printf("Digite o numero de amostras (n): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("E necessario pelo menos 3 amostras para calcular a media movel.\n");
        return 0;
    }

    /* Le as duas primeiras amostras: x1 e x2 */
    printf("Digite x1: ");
    scanf("%f", &x_ant);   /* x_ant guarda x_{i-1} */

    printf("Digite x2: ");
    scanf("%f", &x_atual); /* x_atual guarda x_i */

    printf("\nResultado da media movel:\n");

    /* i vai de 2 ate n-1 (usando indices como no enunciado) */
    for (i = 2; i <= n - 1; i++) {
        printf("Digite x%d: ", i + 1);
        scanf("%f", &x_prox); /* x_prox guarda x_{i+1} */

        y = (x_ant + x_atual + x_prox) / 3.0f;
        printf("y%d = %.4f\n", i, y);

        /* desloca a janela: quem era "atual" vira "anterior",
           quem era "proximo" vira "atual" */
        x_ant = x_atual;
        x_atual = x_prox;
    }

    return 0;
}

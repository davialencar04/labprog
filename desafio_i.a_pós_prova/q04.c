#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    int parar = 0; /* substitui o "break": controla a condicao do while */

    while (!parar) {
        scanf("%d", &numero);

        if (numero == -1) {
            /* antes: break;  agora: sinaliza para parar no proximo teste do while */
            parar = 1;
        } else if (numero < 0) {
            /* antes: continue;  agora: simplesmente nao faz nada e cai no fim do while */
        } else if (numero > 255) {
            /* antes: continue;  agora: idem, nao processa este numero */
        } else {
            soma += numero;
            contador++;
        }
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}

#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {

        if (i % 2 != 0) {     // Se for ímpar

            int fatorial = 1;

            for (int j = 1; j <= i; j++) {
                fatorial *= j;
            }

            printf("%d! = %d\n", i, fatorial);
        }
    }

    return 0;
}
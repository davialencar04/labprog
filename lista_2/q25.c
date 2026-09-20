#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    double pi = 0.0;

    for (int i = 1; i <= n; i++) {

        int denominador = 2 * i - 1;

        if (i % 2 != 0) {
            pi += 4.0 / denominador;
        } else {
            pi -= 4.0 / denominador;
        }
    }

    printf("%.10lf\n", pi);

    return 0;
}
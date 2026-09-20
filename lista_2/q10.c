#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
double multiplos;
double resultado;

int main(){
    for (n = 4 ; n <= 22 ; n++){
        multiplos = 4*n;
        resultado = pow (multiplos,2);
        printf("potência número %d é igual a: %f\n", n , resultado);
    }
}
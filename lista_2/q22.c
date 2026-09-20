#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("diga um número a ser analisado");
    int n1;
    scanf("%d",& n1);

    int contador;
    contador = 0;

    while(n1 !=0){
        
        int digito;
        digito = n1 % 10;

        if (digito ==7){
            contador = contador + 1;
        }

        n1 = n1/10;
    }
    printf("%d", contador);
}
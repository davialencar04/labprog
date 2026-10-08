#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
int limite1;
int limite2;
int troca;
double multiplos;
double resultado;

int main(){
    
    puts("defina o qual o primeiro multiplo de 4 a ser considerado o primeiro na sua contagem: \n");
    scanf("%d",& limite1);

    puts("defina o último múltiplo de 4 a ser considerado: \n");
    scanf("%d",& limite2);

    if (limite1 > limite2){
        
        troca = limite1;
        limite1 = limite2;
        limite2 = troca;
        
    }

    for (n = limite1 ; n <= limite2 ; n++){
        
        multiplos = 4*n;
        resultado = pow (multiplos,2);
        printf("potência número %d é igual a: %f\n", n , resultado);

    }
}
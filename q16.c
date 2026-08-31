#include <stdio.h>
#include <math.h>

int valor;

int main(){
    puts("diga um valor");
    scanf("%d",& valor);
    
    printf("o módulo do seu valor: %d", abs(valor));
}
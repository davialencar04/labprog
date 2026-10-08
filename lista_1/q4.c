#include <stdio.h>

float valor;
float desconto;

int main(){
    puts("qual foi o valor da conta?");
    scanf("%f",&valor);
    
    puts("com a adição dos 10 por cento do garçon, fica:");
    desconto=(valor*10)/100;
    valor=valor+desconto;
    printf("%f",valor);

    return 0;
}
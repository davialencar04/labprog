#include <stdio.h>

float numero1;
float numero2;
float valor;
float valor2;
float valor3;
float valor4;
float valor5;

int main(){
    puts("digite um valor para o primeiro número");
    scanf("%f",& numero1);

    puts("digite um valor para o segundo número");
    scanf("%f",& numero2);

    valor = numero1+numero2;
    valor2 = numero1*numero2;
    valor3 = numero1-numero2;
    valor4 = numero1/numero2;
    valor5 = (valor4*numero2)-numero1;

    printf("a soma dos valores é %f , o produto deles é %f , a diferença entre eles é %f , o resto da divisão entre eles é %f , e o quociente dessa divisão %f",valor,valor2,valor3,valor5,valor4);
    
    return 0;
}
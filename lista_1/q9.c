#include <stdio.h>

float comprimento;
float largura;
float altura;
float area;

int main(){
    puts("diga o valor do comprimento da caixa:");
    scanf("%f",& comprimento);

    puts("diga o valor da largura da caixa:");
    scanf("%f",& largura);

    puts("diga o valor da altura da caixa:");
    scanf("%f",& altura);

    area = comprimento*largura*altura;
    printf("a área da caixa é: %f",area);
}
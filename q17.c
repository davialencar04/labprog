#include <stdio.h>
#include <math.h>

float raio;
float diametro;
float area;

int main(){
    puts("diga o valor do raio");
    scanf("%f",& raio);

    diametro = raio*2;

    printf("logo, o diametro de sua circunferência é: %2f", diametro);

    area = 3.14159*pow(raio,2);

    printf("a área do seu circunferência é: %f", area);
}
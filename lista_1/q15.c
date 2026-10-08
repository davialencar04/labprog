#include <stdio.h>

float hora;
int valor;
float salario;
float bruto;
float desconto;

int main(){
    puts("qual o valor da sua hora aula?");
    scanf("%f",& hora);
    
    puts("quantos horas vc trabalha por semana");
    scanf("%d",& valor);

    bruto = (valor*hora)*4; //vezes 4 devido essa ser quantidade de semanas em um mês
    desconto = (bruto*14)/100;
    salario = bruto-desconto;

    printf("o seu salário bruto é igual a: %f", bruto);
    printf("aplicando uma taxa de 14 por cento ao mês, o seu salário fica: %f", salario);

}
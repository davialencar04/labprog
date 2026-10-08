#include <stdio.h>

int dias;
float salario;
float bonificação;
float imposto;

int main(){
    puts("diga quantos dias voê trabalhou esse mês?");
    scanf("%d",& dias);

    if (dias<=10){
        salario = 50.25*dias;
        imposto = (salario*10)/100;
        salario = salario-imposto;
        printf("seu salário, após a aplicação de impostos fica: %f",salario);
        
    }
    if (dias>10 && dias<=20){
        salario = 50.25*dias;
        bonificação = (salario*20)/100;
        salario = salario+bonificação;
        imposto = (salario*10)/100;
        salario = salario-imposto;
        printf("seu salário, após a aplicação de impostos fica: %f",salario);
    }
    
}
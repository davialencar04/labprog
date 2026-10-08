#include <stdio.h>
#include <stdlib.h>

float n1;
float n2;
float divisao;

int main(){
    n2 = 1;
    while(n2 > 0){
        puts("diga o valor do dividendo\n");
        scanf("%f",& n1);

        puts("diga o valor do divisor\n");
        scanf("%f",& n2);

        divisao = n1/n2;

        printf("a divisão dos valores escolhidos foi: %f", divisao);
    }
}
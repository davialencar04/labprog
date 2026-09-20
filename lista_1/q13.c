#include <stdio.h>

float c;
float f;

int main(){
    puts("diga a temperatura em celsius a ser convertida em fahrenheint");
    scanf("%f",& c);

    f = (9*c+160)/5;

    printf("%f em fahrenheint é: %f",c,f);

    return 0;
}
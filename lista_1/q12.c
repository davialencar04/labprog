#include <stdio.h>

int a;
int b;
int c;

int main(){
    puts("diga o valor de A: ");
    scanf("%d",& a);
    printf("o valor escolhido foi: %d \n", a);

    puts("diga o valor de B:");
    scanf("%d",& b);
    printf("o valor escolhido foi: %d \n", b);

    c=a;
    a=b;
    b=c;

    printf("agora A é igual a: %d , e B é igual a: %d",a,b);
    return 0;




}

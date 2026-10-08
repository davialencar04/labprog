#include <stdio.h>

int main(){
    puts("diga um valor inteiro");
    int n1;
    scanf("%d",& n1);
    int n2 = --n1;
    printf("%d\n", n2);
    int n3 = n1--;
    printf("%d\n", n3);
    int subtrator = n2-n3;
    printf("%d\n", subtrator);
}
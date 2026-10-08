#include <stdio.h>

int n1;
int n2;
int f;

int main(){
    puts("digite um número a ser calculado seu fatorial");
    scanf("%d",& n1);

    n2 = 1;
    for(; n1 >= 1 ; n1--){
        n2 = n1*n2;
        f = n2;
    }
    printf("%d",f);
}
#include <stdio.h>
#include <stdlib.h>

double n1;

int main(){

    for(int i = 10 ; i <= 100 ; i += 10){
        
        printf("%d\n", i);

        n1 = (i * 1.8) + 32;

        printf("%f\n", n1);
    }
}
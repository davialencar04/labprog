#include <stdio.h>

int main(){
    int a=0;
    int b=1;
    for(int i = 0 ; i <= 21 ; i++ ){
        printf("%d\n", a);
        int proximo = a+b;
        a = b;
        b = proximo;

        
        
    }
}
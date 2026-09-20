#include <stdio.h>
#include <stdlib.h>

int n1;
int multiplicacao;

int main(){
    
    puts("diga qual número desejas ver a tabuada");
    scanf(" %d",& n1);

    for(int i = 1 ; i <= 10 ; i++){
        
        multiplicacao = n1 * i;
        
        printf("%d x %d = %d\n", n1 , i , multiplicacao);
    }
}
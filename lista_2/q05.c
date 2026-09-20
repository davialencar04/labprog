#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;

int main(){
    
    do{
        puts("digite um número a ser comparado");
        scanf("%d",& n1);

        puts("digite outro número a ser comparado");
        scanf("%d",& n2);

        if (n1 > n2){
            puts("o primeiro valor é maior que o segundo");
        }else{
            puts("o segundo valor é maior que o primeiro");
        }
    }while(n1 != 0 || n2 != 0);
        puts("programa encerrado");
        
}
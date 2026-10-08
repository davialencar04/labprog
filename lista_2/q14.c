#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;
int troca;
int contagem;

int main(){

    contagem = 0;
    
    puts("diga um valor incial da margem de valores divisíveis por 3:");
    scanf("%d",& n1);

    puts("diga um valor final da margem de valores divisíveis por 3:");
    scanf("%d",& n2);

    if(n1 > n2){
        troca = n1;
        n1 = n2;
        n2 = troca;
    }
    for(int i = n1 ; i <= n2 ; i++){
        if(i % 3 == 0){
            contagem = contagem + 1;
        }else{
            continue;
        }
    }
    printf("a quantidade de números divisíveis por 3 nessa margem é: %d\n", contagem);

}
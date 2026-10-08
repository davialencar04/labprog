#include <stdio.h>
#include <stdlib.h>

int n1;
int n2;
int troca;
int somatorio;

int main(){
    puts("diga onde vc quer que comece a sua faixa de números pares a serem somados\n");
    scanf("%d",& n1);

    puts("diga onde vc quer que termine a sua faixa de números pares a serem somados\n");
    scanf("%d",& n2);

    if(n1 > n2){
        
        troca = n1;
        n1 = n2;
        n2 = troca;

    }

    for(int i = n1 ; i <= n2 ; i++){

        if(i % 2 == 0){

            somatorio = i + somatorio;

        }else{
            continue;
        }
    }
    printf("somatório: %d", somatorio);
}
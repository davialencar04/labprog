#include <stdio.h>
#include <stdlib.h>

int main(){
    char vetor[80];
    char x;

    puts("digite um nome: ");
    fgets(vetor, 80, stdin);

    puts("digite uma letra: ");
    scanf(" %c",& x);

    for(int i = 0 ; i <= 80 ; i++){
        if(vetor[i] == x){
            printf("na posição %d está o caractere procurado", i);
        }
    }
}

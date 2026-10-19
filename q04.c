#include <stdio.h>


int main(){
    #define TAM 10
    int vetor[TAM], *vetorptr;

    
    puts("digite dez números");
    for(int i = 0 ; i <= 9 ; i++){
        scanf("%d",&vetor[i]);
        vetorptr = &vetor[i];

        printf("%p\n",vetorptr);
    }

    puts("digite dez caracteres");
    for(int i = 0 ; i <= 9 ; i++){
        
    }
}

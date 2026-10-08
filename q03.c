#include <stdio.h>


int main(){
    char vetor[80];
    int contador = 0;

    puts("digite seu nome: ");
    fgets(vetor , 80 , stdin);

    for(int i = 0 ; vetor[i] != '\n' ; i++){
        contador = contador + 1;
    }

    printf("o nome digitado pelo usuário tem %d caracteres", contador);
}

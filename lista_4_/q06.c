#include <stdio.h>
#include <string.h>


int main(){
    char vetor[80];
    
    puts("digite qualquer coisa:");
    fgets(vetor , 80 , stdin);

    for(int i = strlen(vetor) - 1; i >= 0 ; i--){
        printf("%c", vetor[i]);
    }
}

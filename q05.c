#include <stdio.h>
#include <string.h>


int main(){
    char vetor1[80];
    char vetor2[80];
    
    puts("digite qualquer coisa:");
    fgets(vetor1 , 80 , stdin);

    puts("digite outra coisa:");
    fgets(vetor2 , 80 , stdin);

    printf("%s %s", vetor1 , vetor2);

    puts("---------------");

    strcat(vetor1 , vetor2);

    printf("%s\n", vetor1);
    
    

}

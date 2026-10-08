#include <stdio.h>
#include <string.h>

int main(){
    char vetor1[80];
    char vetor2[80];
    int contador1;
    int contador2;

    puts("digite algo");
    fgets(vetor1 , 80 , stdin);

    puts("digite outra coisa");
    scanf(" %c",& vetor2);

    if(strcmp(vetor1,vetor2) == 0){
        puts("as duas informações contém a mesma qauntidade de caracteres");
    }else{
        puts("as duas informações contém quantidades de caracteres distintas");
    }
    puts("a0");

    for(int i = 0 ; i < '\n' ; i++){
        vetor1[i];
        contador1 = contador1+1;
    }
    
    for(int i = 0 ; i < '\n' ; i++){
        vetor2[i];
        contador2 = contador2+1;
    }
    if(contador1 == contador2){
        puts("as duas informações contém a mesma quantidade de caracteres");
    }else{
        puts("as duas informações contém quantidades de caracteres distintas");
    }
}

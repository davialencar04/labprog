#include <stdio.h>
#include <stdlib.h>

char ch;

int main(){
    puts("diga um número de 1-7, correspondente a semana:");

    do{
        scanf(" %c",& ch);
    
        switch (ch){

            case '1':
            puts("domingo");
            break;

            case '2':
            puts("segunda");
            break;

            case '3':
            puts("terça");
            break;

            case '4':
            puts("quarta");
            break;

            case '5':
            puts("quinta");
            break;

            case '6':
            puts("sexta");
            break;

            case '7':
            puts("sábado");
            break;

            case '0':
            puts("número inválido");
            break;
        }
    }while (ch != '0');
        
}
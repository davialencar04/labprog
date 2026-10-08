#include <stdio.h>
#include <stdlib.h>

int jose;
int pedro;
int ano;

int main(){

    jose = 150;
    pedro = 110;
    ano = 0;

    while(jose > pedro){
        
        jose = jose + 2;
        pedro = pedro + 3;
        ano = ano + 1;

    }

    printf("pedro terá superado a altura de jose no ano: %d",ano);
}
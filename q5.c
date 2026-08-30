#include <stdio.h>

float altura;
char sexo;
float peso;

int main(){
    puts("diga sua altura");
    scanf("%f",&altura);
    
    puts("diga sua sexualidade h/m");
    scanf(" %c",&sexo);

    if(sexo=='h' || sexo=='H'){
        peso = 72.7*altura-58;
        printf("%f",peso);    
    }
    if(sexo=='m' || sexo=='M'){
        peso = 62.1*altura-44.7;
        printf("%f",peso);
    }
    {
     
    }
    
}
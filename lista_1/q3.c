#include<stdio.h>

int valor;
int valor2;
double valor3;
double valor4;

int main(){
    puts("escreva um valor");
    scanf("%d",&valor);
    valor2=valor*3;
    valor3=valor*valor;
    valor4=valor/2;

    printf("o valor que vc escreveu foi: %d o triplo desse valor é: %d o quadrado desse valor é: %f já a metade do valor inicial é: %f",valor,valor2,valor3,valor4);

    return 0;

}
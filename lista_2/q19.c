#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("diga um valor mínimo para a sua margem de valores");
    int n1;
    scanf("%d",& n1);

    puts("diga um valor máximo para a sua margem de valores");
    int n2;
    scanf("%d",& n2);

    double media;
    double somatorio;

    for (int i = n1 ; i <= n2 ; i++){
        
        somatorio = somatorio + i;

    }
    double quantidade;
    quantidade = n2-n1;
    media = somatorio/quantidade;

    printf("%f", media);
}
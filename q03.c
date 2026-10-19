#include <stdio.h>
#include <stdlib.h>


int main(){
    puts("digite qualquer valor. o encerra!");
    int a, *aptr, *menorptr;
    scanf("%d",&a);
    aptr = &a;
    
    int menor = a;
    menorptr = &menor;
    
    if(a == 0){
        exit(1);
    }

    do{
        scanf("%d",&a);
        aptr = &a;

        if (a < menor && a > 0){
            menor = a;
        }

    }while( a != 0 );

    printf("%d", *menorptr);
}

#include <stdio.h>


int main(){
    double vetor[15];
    double menor;
    double maior = 0;
    
    puts("escrevaa um valor: ");
    menor = scanf("%lf",& vetor[0]);

    for(int i = 0 ; i <= 13 ; i++){
        
        scanf("%lf",& vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i]; 
        }else if(vetor[i] < menor){
            menor = vetor[i];
        }else{
            continue;
        }
    }

    printf("maior valor digitado: %lf", maior);
    printf("menor valor digitado: %lf", menor);
    printf("soma desses valores é igual a: %lf", maior+menor);
}

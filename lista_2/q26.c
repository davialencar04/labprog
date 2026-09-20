#include <stdio.h>

int main(){
    void print_binario(unsigned int n){
        for (int i = 31 ; i >= 0 ; i--){
            int bit = (n>>i) & 1;
            printf("%d",bit);
            if (i % 4 == 0) printf(" ");
        }
    printf("\n");
    }

    for(int i = 1 ; i <= 256 ; i++){
        printf("%d", i);
        printf("%x", i);
        print_binario(i);
    }
}
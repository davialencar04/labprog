#include <stdio.h> 

int main(){
    int cateto1 , cateto2 , hip;

    for (cateto1 = 1 ; cateto1 <= 500 ; cateto1++){
        
        for (cateto2 = 1 ; cateto2 <= 500 ; cateto2++){
            
            for (hip = 1 ; hip <= 500 ; hip++){
                if(cateto1*cateto1+cateto2*cateto2 == hip*hip){
                    printf("%d\n %d\n %d\n", cateto1,cateto2,hip);
                }
            }
        }
    }
}
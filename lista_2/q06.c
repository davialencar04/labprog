#include <stdio.h>
#include <stdlib.h>

int voto;
int paulo;
int renata;
int branco;
char ch;

int main(){
    do{
        puts("tecle o número desejado para realizar seu voto");
        scanf("%d",& voto);

        if(voto == 5){
            
            puts("você tem certeza da sua decisão? s/n");
            scanf(" %c",& ch);

            if (ch == 's'){
                paulo = paulo + 1;

            }else if (ch == 'n'){
                continue;

            }
        }else if (voto == 7){
            
            puts("você tem certeza da sua decisão? s/n");
            scanf(" %c",& ch);

            if (ch == 's'){
                renata = renata + 1;

            }else if (ch == 'n'){
                continue;

            }    
        }else if(voto >=0 && voto != 5 && voto != 7){
            
            puts(" vc tem certeza da sua decisão? s/n");
            scanf(" %c",& ch);

            if(ch == 's'){
                branco = branco + 1;

            }else if (ch == 'n'){
                continue;

            }
        }
    }while (voto > 0);

    puts("-----------------------------------------");
    puts("segue o relatório dos votos dessa eleição");
    printf("paulo: %d\n", paulo);
    printf("renata: %d\n", renata);
    printf("branco: %d\n", branco);
}
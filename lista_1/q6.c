#include <stdio.h>

int horas;
int minutos;
int segundos;
int hs;
int ms;
int st;

int main(){
    puts("diga uma quantidade de horas");
    scanf("%d",& horas);

    puts("diga uma quantidade de minutos");
    scanf("%d",& minutos);

    puts("diga uma quantidade de segundos");
    scanf("%d",& segundos);

    hs = horas*3600;
    ms = minutos*60;
    st = hs+ms+segundos;

    printf("toda essa quantidade de tempo em segundos fica: %d",st);

}
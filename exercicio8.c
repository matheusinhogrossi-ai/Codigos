#include <stdio.h>
#include <unistd.h>

int main(){
    int gols;
    printf("me fale os gols que um jogador fez em apenas uma temporada\n");
    scanf("%d", &gols);
    if (gols >10){
        printf("Excelente Temporada!");
    } else if(gols>=5 && gols<=10){
        printf("Boa temporada!");
    } else {
        printf("temporada abaixo do esperado");
    }
}

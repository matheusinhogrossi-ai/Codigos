#include <stdio.h>
#include <unistd.h>

int main(){
    int idade;
    int gols;
    printf("me fale idade do jogador e a quantidade de gols\n");
    scanf("%d %d", &idade, &gols);
    if(idade <=20 && gols > 10){
        printf("Jovem talento promissor!");
    }
    else if (idade <=20 && gols <= 10){
        printf("Jovem em desenvolvimento");
    }
    else if (idade >=20 && gols > 15){
        printf("Jogador experiente em grande fase!");
    }
    else if (idade >20 && gols <= 15){
        printf("Estevao");
    }
    return 0;
}

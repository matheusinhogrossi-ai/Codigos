#include <stdio.h>
#include <unistd.h>

int main(){
    int cartaoamarelo;
    int cartaoamarelo2 = 2;
    printf("voce ja recebeu um cartão vermelho, continue com cuidado sem levar 2 cartões amarelos\n");
    sleep(2.5);
    printf("continuando partida...\n");
    sleep(2);
    printf(".....\n");
    sleep(1);
    printf(".....\n");
    sleep(1);
    printf(".....\n");
    sleep(1);
    printf("o juiz te pegou olhando pro saco dele\n");
    sleep(1.5);
    printf("recebeu cartão amarelo paekkkkkkk quantos recebeu?\n");
    scanf("%d", &cartaoamarelo);
    if (cartaoamarelo >=2){
        printf("ta expulso da partida, juiz te fudeu legal");
    }else if(cartaoamarelo == 0){
        printf("nem fudendokkkkkkk juiz achou ruim msm assim e te expulsou");
    } else {
        printf("pode continuar juiz deixou passar essa, juiz gostou\n");
        sleep(1);
        printf("....\n");
        sleep(2);
        printf("agora o juiz olhou pra tua cara e achou vc feio pra caralho, quantos cartoes amarelos recebeu?\n");
        scanf("%d", &cartaoamarelo2);
        printf("voce foi expulso seu fudidokkkkkkkkkkkkk");
}
}

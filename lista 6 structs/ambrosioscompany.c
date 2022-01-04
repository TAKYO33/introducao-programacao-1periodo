#include <stdio.h>
#include <string.h>

typedef struct{
    int numpassagem, poltrona;
    float idade;
    char saida[30], destino[30], nome[50], data[20], hora[10];
}passagem;


int main(){
    int i, parada=0;
    float media=0, cont=0, num=0;
    passagem cartao[44];
    for(i=0; i<44 && parada==0; i++){
        scanf("%d", &cartao[i].numpassagem);
        if(cartao[i].numpassagem!=-1){
            scanf(" %20[^\n]", cartao[i].data);
            scanf(" %30[^\n]", cartao[i].saida);
            scanf(" %30[^\n]", cartao[i].destino);
            scanf(" %10[^\n]", cartao[i].hora);
            scanf("%d", &cartao[i].poltrona);
            scanf("%f", &cartao[i].idade);
            scanf(" %50[^\n]", cartao[i].nome);
        }else parada=1;
    }
    for(i=0; cartao[i].numpassagem!=-1; i++){
        cont+=cartao[i].idade;
        num++;
    }
    media=(cont/num);
    for(i=0; cartao[i].numpassagem!=-1; i++){
        if(cartao[i].idade>media && cartao[i].poltrona % 2==0){
            printf("%s\n", cartao[i].nome);
        }
    }

    return 0;
}
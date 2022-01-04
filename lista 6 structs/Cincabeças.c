#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
    char nome[21];
    int idade, id;
}Jogador1;
typedef struct{
    char nome[21];
    int idade, id;
}Jogador2;

int main(){
    int pont1=0, pont2=0, i, resultado=0, aux;
    Jogador1 jogador1;
    Jogador2 jogador2;
    scanf("%d %d", &jogador1.idade, &jogador1.id);
    scanf(" %s", jogador1.nome);
    scanf("%d %d", &jogador2.idade, &jogador2.id);
    scanf(" %s", jogador2.nome);
    if(strcmp(jogador1.nome, jogador2.nome)>0){
        pont1+=2;
    }else if(strcmp(jogador2.nome, jogador1.nome)>0){
        pont2+=2;
    }
    for (i = 2; i<=(jogador1.idade/2); i++) {
        if (jogador1.idade % i == 0) {
            resultado=1;
            break;
        }
    }
    if(resultado==0){
        pont1+=4;
    }
    resultado=0;
    for (i = 2; i<=(jogador2.idade/2); i++) {
        if (jogador2.idade % i == 0) {
            resultado=1;
            break;
        }
    }
    if(resultado==0){
        pont2+=4;
    }
    aux=sqrt(jogador1.id);
    if(aux==sqrt(jogador1.id)){
        pont1+=3;
    }
    aux=sqrt(jogador2.id);
    if(aux==sqrt(jogador2.id)){
        pont2+=3;
    }
    if(pont1>pont2){
        printf("%s WINS", jogador1.nome);
    }else if(pont2>pont1){
        printf("%s WINS", jogador2.nome);
    }else if(pont1==pont2){
        printf("CInCABECAS EMPATADOS");
    }

    return 0;
}

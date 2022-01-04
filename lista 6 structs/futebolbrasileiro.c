#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20], foco, jogcomp[10][30];
    int dinheiro, posicao, num_jogadores;
    int priori1, priori2, priori3;
}Time;
typedef struct{
    char nome[30], nacionalidade[30], foco;
    int ataque, defesa, custo;
}Jogador;
int main(){
    int i, j, k, l, n, m, x, y, z, posicao=0, comprado=0;
    char aux[40]="";
    scanf("%d", &n);
    Time time[n];

    for(i=0; i<n; i++){
        scanf(" %s", time[i].nome);
        if(strcmp(time[i].nome, "Vasco")!=0){
            scanf("%d %c", &time[i].dinheiro, &time[i].foco);
            time[i].posicao=posicao;
            time[i].priori1=0;
            time[i].num_jogadores=0;
            posicao++;
        }else{
            time[i].dinheiro=0;
        }
    }
    
    scanf("%d", &m);
    Jogador jogador[m];
    for(i=0; i<m; i++){
        scanf(" %s %s", jogador[i].nome, jogador[i].nacionalidade);
        scanf("%d %d", &jogador[i].ataque, &jogador[i].defesa);
        scanf("%d", &jogador[i].custo);
    }
    for(i=0; i<n; i++){
        if(strcmp(time[i].nome, "Vasco")==0){
            printf("Vasco nao tem salvacao, tomou 3 pro vitoria em casa\n");
        }
    }

    for(i=0; i<m; i++){
        if(jogador[i].ataque>=jogador[i].defesa){
            jogador[i].foco='A';
        }else {jogador[i].foco='D';}
        for(j=0; j<n; j++){
            if(strcmp(time[j].nome, "Vasco")!=0){
            time[j].priori1=0;
            time[j].priori2=0;
            if(time[j].dinheiro>=jogador[i].custo){
                time[j].priori1=1;
            }
            if(time[j].foco==jogador[i].foco){
                time[j].priori2=1;
            }
            }
        }
        for(y=0; y<n; y++){
            time[y].priori3=0;
        }
        for(k=0; k<n; k++){
        if(strcmp(time[k].nome, "Vasco")!=0){
        if(time[k].priori1==1){ //CASO O TIME TENHA DINHEIRO SUFICIENTE PARA O JOGADOR
            time[k].priori3=1;
            for(l=k+1; l<n; l++){
                if(strcmp(time[l].nome, "Vasco")!=0){
                if(time[l].priori1==1){ //CASO ALGUM OUTRO TIME TENHA DINHEIRO SUFICIENTE
                    if(time[l].priori2==1 && time[k].priori2==0){//PRIORIDADE DE FOCO(ATAQUE E DEFESA)
                        time[l].priori3=1;
                        time[k].priori3=0;
                    }else if(time[l].priori2==time[k].priori2){//CASO TENHAM O MESMO FOCO
                        if(time[l].dinheiro>time[k].dinheiro){//PRIORIDADE DE QUEM TEM MAIS DINHEIRO
                            time[l].priori3=1;
                            time[k].priori3=0;
                        }
                    }
                }
            }
            }
        }
        }
    }
    for(x=0; x<n; x++){
        comprado=0;
            if(time[x].priori3==1){
                comprado=1;
                time[x].dinheiro-=jogador[i].custo;
                z=time[x].num_jogadores;
                time[x].num_jogadores++;
                strcpy(time[x].jogcomp[z], aux);
                strcpy(aux, jogador[i].nome);
                strcat(aux, " ");
                strcat(aux, jogador[i].nacionalidade);
                strcpy(time[x].jogcomp[z], aux);

                printf("%s eh do %s\n", jogador[i].nome, time[x].nome);
                break;
            }
        }
        if(comprado==0){
                printf("%s ta muito caro\n", jogador[i].nome);
        }

    }
    printf("\n");
    for(i=0; i<n; i++){
        if(strcmp(time[i].nome, "Vasco")!=0){
            printf("Situacao %s\n", time[i].nome);
            printf("Dinheiro restante = %d\n", time[i].dinheiro);
            printf("Num de Jogadores = %d\n", time[i].num_jogadores);
            for(j=0; j<time[i].num_jogadores; j++)
                printf("%s\n", time[i].jogcomp[j]);
            printf("\n");
        }
    }

    return 0;
}
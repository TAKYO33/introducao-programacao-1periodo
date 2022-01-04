#include <stdio.h>

int main(){
    int num_coordenadas, tam_linhas, tam_colunas;
    scanf("%d %d %d", &num_coordenadas, &tam_linhas, &tam_colunas);
    int cordL[num_coordenadas], cordC[num_coordenadas], matriz[tam_linhas][tam_colunas], maior[num_coordenadas];
    int i=0, j=0, k=0, l=0, x=0, aux=0, r=0, l2=0, c=0, c2=0;
    int time1=0, time2=0, time3=0, time4=0;

    for(k=0; k<num_coordenadas; k++){
        scanf("%d %d", &cordL[k], &cordC[k]);
    }

        for(i=0; i<tam_linhas; i++){
            for(j=0; j<tam_colunas; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        for(k=0; k<num_coordenadas; k++){
            time1=0;
            time2=0;
            time3=0;
            time4=0;
            if(matriz[cordL[k]][cordC[k]]==1){
                time1++;
            }else if(matriz[cordL[k]][cordC[k]]==2){
                time2++;
            }else if(matriz[cordL[k]][cordC[k]]==3){
                time3++;
            }else if(matriz[cordL[k]][cordC[k]]==4){
                time4++;
            }

        for(l=1; (l+cordL[k])<tam_linhas; l++){
            if(matriz[cordL[k]+l][cordC[k]]==1){
                time1++;
            }else if(matriz[cordL[k]+l][cordC[k]]==2){
                time2++;
            }else if(matriz[cordL[k]+l][cordC[k]]==3){
                time3++;
            }else if(matriz[cordL[k]+l][cordC[k]]==4){
                time4++;
            }
        }
        for(l2=1; (cordL[k]-l2)>=0; l2++){
            if(matriz[cordL[k]-l2][cordC[k]]==1){
                time1++;
            }else if(matriz[cordL[k]-l2][cordC[k]]==2){
                time2++;
            }else if(matriz[cordL[k]-l2][cordC[k]]==3){
                time3++;
            }else if(matriz[cordL[k]-l2][cordC[k]]==4){
                time4++;
            }
        }
        for(c=1; (c+cordC[k])<tam_colunas; c++){
            if(matriz[cordL[k]][cordC[k]+c]==1){
                time1++;
            }else if(matriz[cordL[k]][cordC[k]+c]==2){
                time2++;
            }else if(matriz[cordL[k]][cordC[k]+c]==3){
                time3++;
            }else if(matriz[cordL[k]][cordC[k]+c]==4){
                time4++;
            }
        }
        for(c2=1; (cordC[k]-c2)>=0; c2++){
            if(matriz[cordL[k]][cordC[k]-c2]==1){
                time1++;
            }else if(matriz[cordL[k]][cordC[k]-c2]==2){
                time2++;
            }else if(matriz[cordL[k]][cordC[k]-c2]==3){
                time3++;
            }else if(matriz[cordL[k]][cordC[k]-c2]==4){
                time4++;
            }
        }
            if(time1>=time2 && time1>=time3 && time1>=time4){
                maior[r]=time1;
            }else if(time2>=time1 && time2>=time3 && time2>=time4){
                maior[r]=time2;
            }else if(time3>=time1 && time3>=time2 && time3>=time4){
                maior[r]=time3;
            }else if(time4>=time1 && time4>=time2 && time4>=time3){
                maior[r]=time4;
            }
        r++;
        }
    for(i=0; i<num_coordenadas; i++){
        for(x=i; x<num_coordenadas; x++){
            if(maior[i]<maior[x]){
                aux=maior[i];
                maior[i]=maior[x];
                maior[x]=aux;
            }
        }
    }
    printf("A pontuacao da equipe vencedora sera %d ponto(s)!", maior[0]);

    return 0;
}

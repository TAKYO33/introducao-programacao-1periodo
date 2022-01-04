#include <stdio.h>

int main(){
    int matriz[4][4];
    int i, j, maior=0, encontrei=0;
    char sentido;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            matriz[i][j]=0;
        }
    }
    i=0;
    j=0;
    for(int k=0; k<20; k++){
            scanf(" %c", &sentido);
            if(sentido=='b'){
                matriz[i+1][j]++;
                i++;
            }else if(sentido=='c'){
                matriz[i-1][j]++;
                i--;
            }else if(sentido=='d'){
                matriz[i][j+1]++;
                j++;
            }else if(sentido=='e'){
                matriz[i][j-1]++;
                j--;
            }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(matriz[i][j]>maior){
                maior=matriz[i][j];
            }
        }
    }
    for(i=0; i<4 && encontrei!=1; i++){
        for(j=0; j<4 && encontrei!=1; j++){
            if(matriz[i][j]==maior){
                printf("Coordenada X:%d, Y:%d", j, i);
                encontrei=1;
            }
        }
    }

    return 0;
}

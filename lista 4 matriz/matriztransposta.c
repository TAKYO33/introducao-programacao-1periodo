#include <stdio.h>

int main(){
    int tamL, tamC, i, j;
    scanf("%d %d", &tamL, &tamC);
    int matrizA[tamL][tamC], matrizB[tamC][tamL];

    for(i=0; i<tamL; i++){
        for(j=0; j<tamC; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(i=0; i<tamC; i++){
        for(j=0; j<tamL; j++){
            matrizB[i][j]=matrizA[j][i];
        }
    }
    for(i=0; i<tamC; i++){
        for(j=0; j<tamL; j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}

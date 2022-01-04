#include <stdio.h>
#include <math.h>

int main()
{
    int tam_linhas, tam_colunas;
    scanf("%d %d", &tam_linhas, &tam_colunas);
    double matriz[tam_linhas][tam_colunas], j1,  vetor_mult[tam_linhas];
    int i, j;
    for(i=0; i<tam_linhas; i++){
        for(j=0; j<tam_colunas; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    for(i=0; i<tam_linhas; i++){
        matriz[i][0]=1;
    }
    for(i=0; i<tam_linhas; i++){
        for(j=0; j<tam_colunas; j++){
            j1=j;
            if(matriz[i][j] !=-1 && matriz[i][j]!=1 && j>0){
                vetor_mult[i]=pow(matriz[i][j] , (1/j1));
            }
        }
    }
    for(i=0; i<tam_linhas; i++){
        for(j=0; j<tam_colunas; j++){
            if(matriz[i][j]==-1){
                matriz[i][j]=(matriz[i][j-1]*vetor_mult[i]);
            }
        }
    }
    for(i=0; i<tam_linhas; i++){
        for(j=1; j<tam_colunas; j++){
            if(matriz[i][j]==1){
                for(int k=0; k<tam_colunas; k++){
                    matriz[i][k]=1;
                }
            }
        }
    }
    for(i=0; i<tam_linhas; i++){
        for(j=0; j<tam_colunas; j++){
            printf("%.0lf", matriz[i][j]);
            if(j!=tam_colunas-1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

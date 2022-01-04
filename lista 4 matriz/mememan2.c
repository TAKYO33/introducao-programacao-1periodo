#include <stdio.h>

int main(){
    int tam_linhas, tam_colunas, qtd_bombas;
    scanf("%dx%d", &tam_linhas, &tam_colunas);
    int matriz[tam_linhas+2][tam_colunas+2];
    int i, j, linha, coluna;
    char l;
    for(i=0; i<tam_linhas+2; i++){
        for(j=0; j<tam_colunas+2; j++){
            matriz[i][j]=0;
        }
    }

    scanf("%d", &qtd_bombas);
    for(i=0; i<qtd_bombas; i++){
        scanf(" %c%d", &l, &coluna);
        if(l=='a'){
            linha=1;
        }else if(l=='b'){
            linha=2;
        }else if(l=='c'){
            linha=3;
        }else if(l=='d'){
            linha=4;
        }else if(l=='e'){
            linha=5;
        }else if(l=='f'){
            linha=6;
        }else if(l=='g'){
            linha=7;
        }else if(l=='h'){
            linha=8;
        }else if(l=='i'){
            linha=9;
        }
        matriz[linha][coluna]=9;
    }
    if((tam_linhas*tam_colunas)>qtd_bombas){
    for(i=1; i<tam_linhas+1; i++){
        for(j=1; j<tam_colunas+1; j++){
            if(matriz[i][j]==9){
                if(matriz[i+1][j]!=9 && i!=0 && j!=0){   //sul
                    matriz[i+1][j]++;
                }if(matriz[i][j+1]!=9 && i!=0 && j!=0){  //leste
                    matriz[i][j+1]++;
                }if(matriz[i][j-1]!=9 && i!=0 && j!=0){  //oeste
                    matriz[i][j-1]++;
                }if(matriz[i-1][j]!=9 && i!=0 && j!=0){  //norte
                    matriz[i-1][j]++;
                }if(matriz[i-1][j-1]!=9 && i!=0 && j!=0){ //inicio diagonais //noroeste
                    matriz[i-1][j-1]++;
                }if(matriz[i-1][j+1]!=9 && i!=0 && j!=0){ //nordeste
                    matriz[i-1][j+1]++;
                }if(matriz[i+1][j-1]!=9 && i!=0 && j!=0){ //sudoeste
                    matriz[i+1][j-1]++;
                }if(matriz[i+1][j+1]!=9 && i!=0 && j!=0){ //sudeste
                    matriz[i+1][j+1]++;
                }
            }
        }
    }

    for(i=1; i<tam_linhas+1; i++){
        for(j=1; j<tam_colunas+1; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    }else{
        printf("BANDECLAY OVERLOAD!\n");
    }
    return 0;
}

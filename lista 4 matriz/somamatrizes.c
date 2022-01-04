#include <stdio.h>

int main(){
    int tam, i, j;
    scanf("%d", &tam);
    int matriz1[tam][tam], matriz2[tam][tam], matrizres[tam][tam];

    if(tam!=0){
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            matrizres[i][j]=(matriz1[i][j]+matriz2[i][j]);
        }
    }
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            printf("%d\n", matrizres[i][j]);
        }
    }
    }else{
        printf("Vazia");
    }

    return 0;
}

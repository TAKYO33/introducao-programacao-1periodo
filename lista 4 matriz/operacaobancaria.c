#include <stdio.h>

int main(){
    double matriz[100][2], um=1, zero=0, resultado, soma=0, diminui=0;
    int i, j, cont, parada=0;
    for(i=0; i<100 && parada!=1; i++){
        for(j=0; j<2 && parada!=1; j++){
            scanf("%lf", &matriz[i][j]);
            if(matriz[i][j]==-1){
            parada=1;
            }
        }
     }
    cont=i-1;
    for(i=0; i<cont; i++){
            if(matriz[i][0]==1){
                soma=(soma+matriz[i][1]);
            }else{
                diminui=(diminui+matriz[i][1]);
            }
    }
    resultado=soma-diminui;
    printf("Creditos: R$ %.2lf\n", soma);
    printf("Debitos: R$ %.2lf\n", diminui);
    printf("Saldo: R$ %.2lf\n", resultado);

    return 0;
}

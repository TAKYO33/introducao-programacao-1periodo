#include <stdio.h>

int main(){
    int tempo, tolerancia, x=0;
    scanf("%d %d", &tempo, &tolerancia);
    tolerancia=tolerancia*60;

    if (tempo==0){
        printf("%d", 0);
    }else
    while(tempo!=0 && x<tolerancia){
        if(tempo%13==0 && tempo%60==0){
            tempo=tempo+30;
        }else{
        if(tempo%13==0){
            tempo=tempo-60;
            }
        }
        tempo++;
        x++;
        if (tempo==0){
            printf("%d\n", x);
        }else if (x==tolerancia){
            printf("fui pedir comida mesmo\n");
            tempo=0;
        }
    }


    return 0;
}

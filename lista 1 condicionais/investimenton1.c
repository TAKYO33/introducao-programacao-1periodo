#include <stdio.h>

int main(){
    int pedro, agiota, d1, d2, resto2;
    scanf("%d %d", &pedro, &agiota);
    d1= pedro / 100;
    d2= agiota / 100;
    resto2= agiota % 100;

    if(pedro>=agiota){
        if((d1-d2)>0 && resto2!=0){
            printf("Pegou mais\n");
            printf("Esta pago\n");
            printf("Sobrou %d\n", pedro-(d2+1)*100);
        }else{
            if(resto2==0){
            printf("Esta pago\n");
            printf("Sobrou %d\n", pedro-agiota);
            }else{printf("Pedro vai ter que fugir\n");}
        }
    }else{printf("Pedro vai ter que fugir\n");}

    return 0;
}

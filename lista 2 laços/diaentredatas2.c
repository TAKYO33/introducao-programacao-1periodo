#include <stdio.h>

int main(){
    int dia1, dia2, mes1, mes2, ano1, ano2;
    int dias=0, acumulador2=0, acumulador1=0;
    int ano0=0, mes0=0, dia0=0;
    int ano01=0, mes01=0, dia01=0;
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    while (mes0<mes2){
                if(mes0==1 || mes0==3 || mes0==5 || mes0==7 || mes0==8 || mes0==10 || mes0==12){
                    acumulador2=acumulador2+31;
                }else if(mes0==4 || mes0==6 || mes0==9 || mes0==11){
                    acumulador2=acumulador2+30;
                }else if (mes0==2 && (ano0%4==0 && (ano0%100!=0 || ano0%400==0))){
                    acumulador2=acumulador2+29;
                }else if(mes0==2){
                    acumulador2=acumulador2+28;
                }
            mes0++;
    while (ano0<ano2){
        if(ano0%4==0 && (ano0%100!=0 || ano0%400==0)){
        acumulador2=acumulador2+366;
        }else {acumulador2=acumulador2+365;}
        ano0++;
    }
    }
    while (mes01<mes1){
                if(mes01==1 || mes01==3 || mes01==5 || mes01==7 || mes01==8 || mes01==10 || mes01==12){
                    acumulador1=acumulador1+31;
                }else if(mes01==4 || mes01==6 || mes01==9 || mes01==11){
                    acumulador1=acumulador1+30;
                }else if (mes01==2 && (ano01%4==0 && (ano01%100!=0 || ano01%400==0))){
                    acumulador1=acumulador1+29;
                }else if(mes01==2){
                    acumulador1=acumulador1+28;
                }
            mes01++;
    while (ano01<ano1){
        if(ano01%4==0 && (ano01%100!=0 || ano01%400==0)){
        acumulador1=acumulador1+366;
        }else {acumulador1=acumulador1+365;}
        ano01++;
    }
    }
    while(dia0<dia2){
        dia0++;
        acumulador2++;
    }
    while(dia01<dia1){
        dia01++;
        acumulador1++;
    }
    dias=acumulador2-acumulador1;

    printf("%d\n", dias);

    return 0;
}

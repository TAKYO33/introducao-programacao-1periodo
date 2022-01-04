#include <stdio.h>

int main(){
    int dd, mm, aa, resto;
    scanf("%d %d %d", &dd, &mm, &aa);
    resto= aa % 4;
    if(dd>=1 && dd<=31 && mm>= 1 && mm<=12 && aa>=1900 && aa<=2100){
        if(mm==1 || mm==3 || mm== 5 || mm==7 || mm==8 || mm==10 || mm==12){
            printf("valida\n");
        }else if((mm==4 || mm==6 || mm==9 || mm==11) && dd<=30){
            printf("valida\n");
        }else if((mm==4 || mm==6 || mm==9 || mm==11) && dd==31){
            printf("invalida\n");
        }else if(mm==2 && dd<=28){
            printf("valida\n");
        }else if(mm==2 && dd==29 && resto==0 && aa!=1900 && aa!=2100){
            printf("valida\n");
        }else{printf("invalida\n");}
    }else{printf("invalida\n");}

    return 0;
}

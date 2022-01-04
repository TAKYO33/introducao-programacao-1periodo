#include <stdio.h>
#include <locale.h>

int main(){
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    setlocale(LC_ALL, "Portuguese_Brazil");
    if(a>=65 && a<=90 && b>=65 && b<=90 && c>=65 && c<=90){
        if(((a==a && b==(a+1) && c==(a+2)) || (a==a && b==(a+2) && c==(a+1)) || (a==a && b==(a-1) && c==(a+1)) || (a==a && b==(a+1) && c==(a-1)) || (a==a && b==(a-2) && c==(a-1)) || (a==a && b==(a-1) && c==(a-2))) && a!=65 && a!=69 && a!=73 && a!=79 && a!=85 && b!=65 && b!=69 && b!=73 && b!=79 && b!=85 && c!=65 && c!=69 && c!=73 && c!=79 && c!=85){
            printf("Sequência perfeita.\n");
        }else if(((a==a && b==(a+2) && c==(a+4)) || (a==a && b==(a+4) && c==(a+2)) || (a==a && b==(a-2) && c==(a+2)) || (a==a && b==(a+2) && c==(a-2)) || (a==a && b==(a-4) && c==(a-2)) || (a==a && b==(a-2) && c==(a-4))) && a!=65 && a!=69 && a!=73 && a!=79 && a!=85 && b!=65 && b!=69 && b!=73 && b!=79 && b!=85 && c!=65 && c!=69 && c!=73 && c!=79 && c!=85){
            printf("Bissequência perfeita.\n");
        }else if(((a==a && b==(a+3) && c==(a+6)) || (a==a && b==(a+6) && c==(a+3)) || (a==a && b==(a-3) && c==(a+3)) || (a==a && b==(a+3) && c==(a-3)) || (a==a && b==(a-6) && c==(a-3)) || (a==a && b==(a-3) && c==(a-6))) && a!=65 && a!=69 && a!=73 && a!=79 && a!=85 && b!=65 && b!=69 && b!=73 && b!=79 && b!=85 && c!=65 && c!=69 && c!=73 && c!=79 && c!=85){
            printf("Trissequência perfeita.\n");
        }else if((a==a && b==(a+1) && c==(a+2)) || (a==a && b==(a+2) && c==(a+1)) || (a==a && b==(a-1) && c==(a+1)) || (a==a && b==(a+1) && c==(a-1)) || (a==a && b==(a-2) && c==(a-1)) || (a==a && b==(a-1) && c==(a-2))){
            printf("Sequência quase perfeita.\n");
        }else if((a==a && b==(a+2) && c==(a+4)) || (a==a && b==(a+4) && c==(a+2)) || (a==a && b==(a-2) && c==(a+2)) || (a==a && b==(a+2) && c==(a-2)) || (a==a && b==(a-4) && c==(a-2)) || (a==a && b==(a-2) && c==(a-4))){
            printf("Bissequência quase perfeita.\n");
        }else if((a==a && b==(a+3) && c==(a+6)) || (a==a && b==(a+6) && c==(a+3)) || (a==a && b==(a-3) && c==(a+3)) || (a==a && b==(a+3) && c==(a-3)) || (a==a && b==(a-6) && c==(a-3)) || (a==a && b==(a-3) && c==(a-6))){
            printf("Trissequência quase perfeita.\n");
        }else{printf("Só umas letras ai...\n");}
    }else{printf("Etiquetas erradas!\n");}

    return 0;
}

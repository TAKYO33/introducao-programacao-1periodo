#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);
    scanf("%d", &h);

    if(a== d || a==f){
        if(b!=a && b!=d){
            if(h==f){
                printf("Conseguimos times suficientes!\n");
            }else{printf("Alguem nao esta satisfeito...\n");}
        }else{printf("Alguem nao esta satisfeito...\n");}
    }else{printf("Alguem nao esta satisfeito...\n");}

    return 0;}

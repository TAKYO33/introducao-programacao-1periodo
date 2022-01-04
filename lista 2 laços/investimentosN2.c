#include <stdio.h>

int main(){
    int a, c, v=30;
    scanf("%d %d", &a, &c);
    while(v>=0 && c>0){
        v-=(a+1);
        if(v==0){
            printf("Curvou\n");
            a=a+1;
            v=30;
            c--;
        }else if(v<0){
            printf("Pedro se cagou todo e foi pego.\n");
        }
    }

    return 0;
}

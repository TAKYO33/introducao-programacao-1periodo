#include <stdio.h>

int main(){
    int x, b1, b2, b3;
    scanf("%d", &x);
    scanf("%d", &b1);
    scanf("%d", &b2);
    scanf("%d", &b3);
    if(x>=b1 || x>=b2 || x>=b3){
        if(x>=(b1+b2+b3)){
            printf("3\n");
        }else{
            if(x>=(b1+b2) || x>=(b1+b3) || x>=(b2+b3)){
                printf("2\n");
            }else{printf("1\n");}
        }
    }else{printf("0\n");}

    return 0;
}

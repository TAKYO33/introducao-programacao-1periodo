#include <stdio.h>

int main(){
    int valor, soma;
    int x0, x1, y0, y1, z0, z1, x, y, z;
    scanf("%d", &valor);
    scanf("%d %d %d %d %d %d", &x0, &x1, &y0, &y1, &z0, &z1);
    x=x0, y=y0, z=z0;
    if(x0+y0+z0<=valor && x1+y1+z1>=valor){
        for(;soma!=valor && y<=y1;y++){
            soma=y+x0+z0;
        }
        if(soma==valor){
            printf("S\n");
            printf("%d %d %d", x0, y-1, z0);
            goto fim;
        }else{
        for(;soma!=valor && z<=z1;z++){
            soma=y1+z+x0;
        }}
        if(soma==valor){
            printf("S\n");
            printf("%d %d %d", x0, y-1, z);
            goto fim;
        }else{
        for(;soma!=valor && x<=x1;x++){
            soma=y1+z1+x;
        }}
        if(soma==valor){
            printf("S\n");
            printf("%d %d %d", x, y-1, z);
            goto fim;
        }
    }else printf("N\n");
    fim:

    return 0;
}

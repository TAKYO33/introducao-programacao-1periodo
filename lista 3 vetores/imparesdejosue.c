#include <stdio.h>

int main(){
    int h[100000];
    int tam=0, i, encontrei=0;
    int aux=0;
    while(scanf("%d", &h[tam]) != EOF){
    tam++;
    }

    for(i=0; i<tam; i++){
        for(int x=i; x<tam; x++){
            if(h[i]>h[x]){
                aux=h[i];
                h[i]=h[x];
                h[x]=aux;
            }
        }
    }
    for(i=0; i<tam; i++){
        printf("%d ", h[i]);
    }
    printf("\n");
    for(i=0; i<tam; i+=2){
        if(h[i]!=h[i+1]){
            printf("%d\n", h[i]);
            encontrei=1;
            break;
        }
    }
    if(!encontrei){
        printf("%d\n", 0);
    }

    return 0;
}

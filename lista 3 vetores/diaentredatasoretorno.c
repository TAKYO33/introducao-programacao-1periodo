#include <stdio.h>

int main(){
    int tam, aux, ac=0;
    scanf("%d", &tam);
    int n[tam];
    int h[tam];
    for(int i=0; i<tam; i++){
        scanf("%d", &n[i]);
        h[i]=n[i];
    }
    for(int i=0; i<tam; i++){
        for(int x=i; x<tam; x++){
            if(h[i]>h[x]){
                aux=h[i];
                h[i]=h[x];
                h[x]=aux;
            }
        }
    }
    for(int i=0; i<tam; i++){
        if(h[i]==n[i]){
            ac++;
        }
    }
    printf("%d\n", ac);
    for(int i=0; i<tam; i++){
        if(h[i]==n[i]){
            printf("%d %d\n", h[i], i+1);
        }
    }

    return 0;
}

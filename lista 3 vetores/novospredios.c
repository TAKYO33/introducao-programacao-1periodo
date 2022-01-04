#include <stdio.h>

int main(){
    int tam, aux, i, cont=0, cont2=0, cont3=0, cont4=0;
    scanf("%d", &tam);
    int h[tam];
    for(int i=0; i<tam; i++){
        scanf("%d", &h[i]);
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
    for(i=0; i<tam; i++){
        if(h[i]!=h[i+1]){
            cont++;
        }
    }
    printf("%d\n", cont);
    for(i=0; i<tam; i++){
        if(h[i]>=100){
            cont2++;
        }
    }
    printf("%d\n", cont2);
    for(i=0; i<tam; i++){
        if(h[i]>=50 && h[i]<100){
            cont3++;
        }
    }
    printf("%d\n", cont3);
    for(i=0; i<tam; i++){
        if(h[i]<50){
            cont4++;
        }
    }
    printf("%d\n", cont4);
    printf("%d\n", h[tam-1]-h[0]);

    return 0;
}

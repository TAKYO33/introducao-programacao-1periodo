#include <stdio.h>

int main(){
    int preco, amigos;
    scanf("%d %d", &preco, &amigos);
    int valores[amigos];
    for(int i=0; i<amigos; i++){
        scanf("%d", &valores[i]);
    }
    for(int i=0; i<amigos; i++){
        for (int j=i; j<amigos; j++){
            for(int h=j; h<amigos; h++){
                if(valores[i]+valores[j]+valores[h]==preco && (i != j && i != h && h != j)){
                    printf("Zeca nao vai ter que trabalhar!");
                    goto fim;
                }
            }
        }
    }
        printf("Zeca vai ter que trabalhar.");
    fim:

    return 0;
}

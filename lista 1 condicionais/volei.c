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

    if(a==b || d || f || h){ //Alan só aceita jogar com alguém do sexo feminino.
        if(b!=a && d){ //Bianca não aceita jogar com Alan nem com Daniela.
            if(h==g||f){ //Helen só joga com Gabriel ou Fernanda.
                if(g==h){ //Se Gabriel jogar com Helen, Daniela precisa jogar com Carlos.
                    if(d==c){
                        printf("Conseguimos times suficientes!\n");
                    }else {
                        printf("Alguem nao esta satisfeito...\n");}
                if(c==e){ //Se Carlos jogar com Erasmo, Fernanda jogará com Alan. Se Carlos jogar com qualquer outra pessoa, Fernanda não jogará com Alan.
                    if(f=a){
                        printf("Conseguimos times suficientes!\n");
                    }else{
                printf("Alguem nao esta satisfeito...\n");
                }

            }else{
                printf("Alguem nao esta satisfeito...\n");
                }
            }else{
                printf("Alguem nao esta satisfeito...\n");
            }
        }else{
            printf("Alguem nao esta satisfeito...\n");
        }
    }else{
        printf("Alguem nao esta satisfeito...\n");
        }
    }

    return 0;
    }



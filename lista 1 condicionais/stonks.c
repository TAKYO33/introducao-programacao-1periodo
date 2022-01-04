#include <stdio.h>

int main(){
    int h;
    scanf("%d", &h);

    if(h>=0){
        if(h>=3720 && h<3744){
            printf("Stonks has been born!\n");
        }else if(h<62){
            printf("...Ainda no transito...\n");
        }else if(h>=62 && h<3720){
            printf("Lar doce lar");
        }else if(h>=3744){
            printf("Lar doce lar");
        }
    }else{
        printf("Meme man quebrou o tempo! De volta ao transito :(\n");
    }

    return 0;
}

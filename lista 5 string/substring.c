#include <stdio.h>
#include <string.h>

int main(){
    char string[100], substring[30];
    int i, k, cont, vezes=0, parada=0;
    gets(string);
    gets(substring);
    for(i=0; string[i]!='\0'; i++){
        if(string[i]==substring[0]){
            cont=1;
            if(strlen(substring)==1){
                vezes++;
                parada=1;
            }
            for(k=1; string[i+k]==substring[k] && parada!=1; k++){
                cont++;
                if(cont==strlen(substring)){
                    vezes++;
                }
            }
        }
    }
    printf("%d", vezes);

    return 0;
}
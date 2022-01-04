#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    int i, j, cont=0;
    gets(texto);
    for(i=0; texto[i]!='\0'; i++){
        cont++;
    }
    for(i=cont-1; i>=0; i--){
        if(texto[i]==39){
            printf("%c", texto[i-1]);
            i--;
        }else if(texto[i]=='2'){
            printf("%c%c", texto[i-1], texto[i]);
            i--;
        }else if(texto[i]!=' '){
            printf("%c'", texto[i]);
        }else printf("%c", texto[i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char texto[301];
    int i, cont=0;
    gets(texto);
    if(texto[0]==' '){
        for(i=0; texto[i]==' '; i++){
            cont++;
        }
    }
    for(i=cont; texto[i]!='\0'; i++){
        if(texto[i-1]!=' ' || texto[i]!=' '){
            printf("%c", texto[i]);
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char texto[301];
    gets(texto);
    for(int i=0; texto[i]!='\0'; i++){
        if(texto[i]==52 && texto[i-2]==46 && texto[i-1]==32){
            texto[i]=65;
        }else if(texto[i]==52){
            texto[i]=97;
        }else 
        if(texto[i]==53 && texto[i-2]==46 && texto[i-1]==32){
            texto[i]=69;
        }else if(texto[i]==53){
            texto[i]=101;
        }else 
        if(texto[i]==49 && texto[i-2]==46 && texto[i-1]==32){
            texto[i]=73;
        }else if(texto[i]==49){
            texto[i]=105;
        }else 
        if(texto[i]==48 && texto[i-2]==46 && texto[i-1]==32){
            texto[i]=79;
        }else if(texto[i]==48){
            texto[i]=111;
        }else 
        if(texto[i]==50 && texto[i-2]==46 && texto[i-1]==32){
            texto[i]=85;
        }else if(texto[i]==50){
            texto[i]=117;
        }
        if(i==0 && (texto[i]>96 && texto[i]<123)){
            texto[i]-=32;
        }
        if(texto[i-2]==46 && texto[i-1]==32 && texto[i]>96 && texto[i]<123){
            texto[i]-=32;
        }
    }
    printf("%s", texto);

    return 0;
}
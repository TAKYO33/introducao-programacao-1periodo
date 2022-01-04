#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, k, vezes=0, cont=1, parada=0;
    scanf("%d", &n);
    char substring[n][20], string[n][7], senha[100]="", sentido[n], palavra[100]="", senha2[120]="", aux[100]="", aux2[100]="";
    for(i=0; i<n; i++){
        scanf(" %c", &sentido[i]);
        scanf(" %s", substring[i]);
    }
    scanf(" %s", palavra);
    for(i=0; i<n; i++){
        string[i][6]='\0';
        if(sentido[i]=='d'){
            k=0;
            for(j=0; j<6; j++){
                string[i][k]=substring[i][j];
                k++;
            }
            strcat(senha, string[i]);
        }else if(sentido[i]=='e'){
            k=0;
            for(j=11; j>=6; j--){
                string[i][k]=substring[i][j];
                k++;
            }
            strcat(senha, string[i]);
        }
    }

    strcpy(senha2, senha);
    for(i=0; i<strlen(palavra)-1; i++){
        aux[i]=senha[i];
    }
    strcat(senha2, aux);
    for(i=0; senha2[i]!='\0'; i++){
        if(senha2[i]==palavra[0]){
            cont=1;
            for(k=1; senha2[i+k]==palavra[k]; k++){
                cont++;
                if(cont==strlen(palavra)){
                    vezes++;
                }
            }
        }
    }
    k=0;
    for(i=strlen(senha)-1; parada!=1; i--){
        aux2[k]=senha[i];
        k++;
        if(k==strlen(palavra)-1){
            parada=1;
        }
    }
    strcat(aux2, senha);
    strcpy(senha, aux2);
    for(i=strlen(senha)-1; i>=0; i--){
        if(senha[i]==palavra[0]){
            cont=1;
            for(k=1; senha[i-k]==palavra[k]; k++){
                cont++;
                if(cont==strlen(palavra)){
                    vezes++;
                }
            }
        }
    }
    printf("%s%d", palavra, vezes);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    int qtd_inst, i;
    scanf("%d", &qtd_inst);
    char char1[qtd_inst], char2[qtd_inst], instrucao[qtd_inst][4];
    for(i=0; i<qtd_inst; i++){
        scanf(" %s %c, %c", instrucao[i], &char1[i], &char2[i]);
    }
    for(i=0; i<qtd_inst; i++){
        if(instrucao[i][0]=='m' && instrucao[i][1]=='o' && instrucao[i][2]=='v'){
            printf("%c = %c\n", char1[i], char2[i]);
        }else if(instrucao[i][0]=='a' && instrucao[i][1]=='d' && instrucao[i][2]=='d'){
            printf("%c += %c\n", char1[i], char2[i]);
        }else if(instrucao[i][0]=='s' && instrucao[i][1]=='u' && instrucao[i][2]=='b'){
            printf("%c -= %c\n", char1[i], char2[i]);
        }else if(instrucao[i][0]=='a' && instrucao[i][1]=='n' && instrucao[i][2]=='d'){
            printf("%c = %c & %c\n", char1[i], char1[i], char2[i]);
        }
    }

    return 0;
}
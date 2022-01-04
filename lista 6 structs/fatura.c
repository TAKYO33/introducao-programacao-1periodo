#include <stdio.h>
typedef struct{
    char nome[32];
    long long int cartao, cvv, soma;
    float valor;
}Cliente;

int main(){
    int n, i, j, k, zerada=0, cont=0;
    scanf("%d", &n);
    Cliente cliente[n];
    for(i=0; i<n; i++){
        scanf(" %32[^\n]", cliente[i].nome);
        scanf("%lld", &cliente[i].cartao);
        scanf("%lld", &cliente[i].cvv);
        scanf("%f", &cliente[i].valor);
    }
    for(i=0; i<n; i++){
        cliente[i].soma=0;
        for(j=0; cliente[i].cartao!=0; j++){
            cliente[i].soma+=(cliente[i].cartao%10);
            cliente[i].cartao=(cliente[i].cartao/10);
        }
    }
    for(i=0; i<n; i++){
        if(cliente[i].soma>=cliente[i].cvv){
            cliente[i].valor=0;
            zerada++;
        }else{
            cliente[i].valor=cliente[i].valor*(cliente[i].cvv-cliente[i].soma);
            cont++;
        }
    }
    printf("Um total de %d clientes se beneficiaram da nova politica!\n", zerada);
    for(i=0; i<n; i++){
        if(cliente[i].valor==0){
            printf("%s %.2f\n", cliente[i].nome, cliente[i].valor);
        }
    }
    printf("No entanto, %d clientes nao se beneficiaram da nova politica.\n", cont);
    for(i=0; i<n; i++){
        if(cliente[i].valor!=0){
            printf("%s %.2f\n", cliente[i].nome, cliente[i].valor);
        }
    }

    return 0;
}
#include <stdio.h>

int main(){
    char lista[1000];
    int tam=0, i, j, x, aux, encontrei=0, encontrei2=0, repetiu=1;
    while(scanf("%c", &lista[tam]) != EOF){
    tam++;
    }
    int contador[tam];

    for(i=0; i<tam; i++){
        for(j=i; j<tam; j++){
            if(lista[i]<lista[j]){
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
    i=0;
    while(i<tam){
            repetiu=1;
        for(j=i; j<tam; j++){
            if(lista[i]==lista[j+1]){
                encontrei=1;
                repetiu++;
            }else;
        }
        if(i>0){
            for(x=i; x>0; x--){
                if(lista[i]==lista[x-1]){
                    encontrei2=1;
                    break;
                }else{
                    encontrei2=0;
                }
            }
        }
        if(encontrei2==0){
            printf("%c %d\n", lista[i], repetiu);
        }else;
        i++;
    }

    return  0;
}

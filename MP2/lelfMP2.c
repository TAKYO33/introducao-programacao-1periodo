#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[30];
    int pontuacao;
    int tentativas;
}Competidor;
Competidor *leCompetidores(Competidor *competidores, int qtdAtual, int *qtdTotal){
    int i;
    (*qtdTotal)+=qtdAtual;
    competidores=(Competidor *)realloc(competidores, (*qtdTotal) * sizeof(Competidor));
    if(competidores==NULL){
        printf("Erro na alocacao\n"); exit(1);
    }
    for(i=((*qtdTotal)-qtdAtual); i<(*qtdTotal); i++){ //laco de modo que o vetor final com todas as rodadas fique de forma linear
        printf("Nome do participante: ");
        scanf(" %s", competidores[i].nome);
        printf("Numero de tentativas: ");
        scanf("%d", &competidores[i].tentativas);
        competidores[i].pontuacao=0;
    }
    printf("\n\n");
    return competidores;
}
int **colocarTesouros(int **matriz, int n, int *numTesouros){
    int i, j, m;
    matriz = (int **)malloc(sizeof(int *)*n);  //alocacao da matriz
    for(m=0; m<n; m++){
	    matriz[m] = (int *)malloc(sizeof(int)*n); 
	}
    for(i=0; i<n; i++){    //preenchendo a matriz
        for(j=0; j<n; j++){
            if((((4*(i*i))+(3*j))%11)==0){  //formula de preenchimeto
                matriz[i][j]=1;
                (*numTesouros)++;
            }else matriz[i][j]=0;
        }
    }
    return matriz;
}
//essa funcao é responsavel por atribuir a pontucacao de cada competidor em cada rodada
void analisaRodada(Competidor *competidores, int qtdAtual, int **matriz, int n, int qtdtotal, int qtdpremio){
    int i, j, k, l, cordL, cordC;
    for(i=(qtdtotal-qtdAtual); i<qtdtotal && qtdpremio>0; i++){
        printf("Jogador %s tera %d tentativas\n", competidores[i].nome, competidores[i].tentativas);
        printf("Liste a seguir as %d coordenadas l,c (linha/coluna):\n", competidores[i].tentativas);
        for(j=0; j<competidores[i].tentativas && qtdpremio>0; j++){
            scanf("%d,%d", &cordL, &cordC); //jogador passa suas cooredenadas
            for(k=0; k<n; k++){
                for(l=0; l<n; l++){
                    if(matriz[cordL][cordC]==1){ //verifica se existe o premio na corrdenada passada pelo jogador
                        competidores[i].pontuacao++; //caso existe, a pontuacao do jogador cresce
                        matriz[cordL][cordC]=0;
                        qtdpremio--; //eh retirado 1 unidade da quantidade restante de premios
                    }
                }
            }
        }
    }
    if(qtdpremio==0) printf("Todos os premios foram encotrados\n");
    printf("\n\n");
}
//funcao que declara o vencedor ao final de todas as rodadas
void acharVencedor(Competidor* competidores, int qtdTotal){
    int i, maior;
    Competidor vencedor;
    vencedor=competidores[0];
    for(i=1; i<qtdTotal; i++){
        if(competidores[i].pontuacao>vencedor.pontuacao){
            vencedor=competidores[i];
        }
    }
    printf("O grande vencedor do evento foi\n");
    printf("Nome: %s\n", vencedor.nome);
    printf("pontuacao: %d\n", vencedor.pontuacao);
}
int main(){
    Competidor *competidores=NULL;
    int qtdrodadas, i, j, n, qtdatual, qtdtotal=0;
    printf("Qual sera a quantidade de rodadas?  ");
    scanf("%d", &qtdrodadas);
    for(i=0; i<qtdrodadas; i++){ //loop para cada rodada
        printf("Qual o numero de participantes da rodada [%d]? ", i+1);
        scanf("%d", &qtdatual);
        competidores=leCompetidores(competidores, qtdatual, &qtdtotal);
        printf("Qual sera o tamanho da matriz?  ");
        scanf("%d", &n);
        int **matriz;
        int numtesouro=0;
        matriz=colocarTesouros(matriz, n, &numtesouro);
        analisaRodada(competidores, qtdatual, matriz, n, qtdtotal, numtesouro);

        for(j=0; j<n; j++){ //desalocando a matriz
	    free(matriz[j]); 
        }
        free(matriz);
    }
    acharVencedor(competidores, qtdtotal); //declara o vencedor
    
    free(competidores); //desalocando competidores
    return 0;
}
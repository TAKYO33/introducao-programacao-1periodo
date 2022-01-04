#include <stdio.h>
#include <string.h>
typedef struct{
    char codigo[31], nome[501];
    float idade, nota;
    int sexo, aprovado;
}Aluno;
typedef struct{
    char codigo[26], nome[101];
}Disc;
typedef struct{
    char codigoA[31], codigoD[26];
}Matricula;

int main(){
    int n, m, p, i, k, l, j=0;
    int contmasc=0, contfem=0;
    float contid=0, media, mediaalta;
    scanf("%d", &n);
    Aluno aluno[n];
    for(i=0; i<n; i++){
        scanf(" %s", aluno[i].codigo);
        scanf(" %501[^\n]", aluno[i].nome);
        scanf("%f", &aluno[i].idade);
        scanf("%d", &aluno[i].sexo);
        scanf("%f", &aluno[i].nota);
    }
    scanf("%d", &m);
    int cont[m];
    Disc disc[m];
    for(i=0; i<m; i++){
        scanf(" %s", disc[i].codigo);
        scanf(" %101[^\n]", disc[i].nome);
    }
    scanf("%d", &p);
    Matricula mat[p];
    for(i=0; i<p; i++){
        scanf(" %s %s", mat[i].codigoA, mat[i].codigoD);
    }
    for(i=0; i<n; i++){
        if(aluno[i].sexo==1){
            contmasc++;
        }else{contfem++;}
    }
    for(i=0; i<n; i++){
        contid+=aluno[i].idade;
    }
    media=(contid/n);
    contid=0;
    for(i=0; i<n; i++){
        if(aluno[i].nota>7.5){
            contid+=aluno[i].idade;
            j++;
        }
    }
    mediaalta=(contid/j);
    char aux[101], aux2[21];
    for(i=0; i<m; i++){
        for(j=i+1; j<m; j++){
            if(strcmp(disc[i].nome, disc[j].nome)>0){
                strcpy(aux, disc[i].nome);
                strcpy(aux2, disc[i].codigo);

                strcpy(disc[i].nome, disc[j].nome);
                strcpy(disc[i].codigo, disc[j].codigo);

                strcpy(disc[j].nome, aux);
                strcpy(disc[j].codigo, aux2);
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(aluno[i].nome, aluno[j].nome)>0){
                strcpy(aux, aluno[i].nome);
                strcpy(aux2, aluno[i].codigo);

                strcpy(aluno[i].nome, aluno[j].nome);
                strcpy(aluno[i].codigo, aluno[j].codigo);

                strcpy(aluno[j].nome, aux);
                strcpy(aluno[j].codigo, aux2);
            }
        }
    }
    printf("%d\n", contmasc);
    printf("%d\n", contfem);
    printf("%.2f\n", media);
    printf("%.2f\n", mediaalta);
    for(i=0; i<m; i++){
        cont[i]=0;
        printf("%s\n", disc[i].nome);
        for(int s=0; s<n; s++){
            aluno[s].aprovado=0;
        }
               
        for(j=0; j<p; j++){
            if(strcmp(disc[i].codigo, mat[j].codigoD)==0){
                for(k=0; k<n; k++){
                    if(strcmp(mat[j].codigoA, aluno[k].codigo)==0){
                        aluno[k].aprovado=1;
                        cont[i]++;
                    }
                }
            }
        }
        printf("%d\n", cont[i]);        
        for(l=0; l<n; l++){
            if(aluno[l].aprovado==1){
                printf("%s\n", aluno[l].nome);
            }
        }
    }

    return 0;
}

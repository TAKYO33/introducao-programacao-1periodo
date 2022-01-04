#include <stdio.h>
#include <stdlib.h>
//estrutura para 3 questao
typedef struct{
    int matricula;
    float nota;
    char curso[20];
}Aluno;


int main(){
    //1 questao
    char c='a';
    char *pc=&c;
    //a)
    printf("%p %c\n", &c, c);
    //b)
    printf("%p %c\n", pc, *pc);
    //c)
    printf("%p\n", &pc);
    //d)
    printf("%p %p\n", &*pc, *&pc);
    //e)
    printf("sao iguais porque ambos contem o endereco da variavel c. (eh como se o '&' e o '*' se anulassem...)\n\n");

    //2 questao
    int vet[5]={1,2,3,4,5};
    int *p=vet;
    //a)
    printf("%p %p\n", vet, p);
    //b)
    printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4]);
    //c)
    printf("%d %d %d %d %d\n", *p, *(p+1), *(p+2), *(p+3), *(p+4));
    //d)
    printf("%d %d %d %d %d\n", vet[0], vet[1], vet[2], vet[3], vet[4]);
    printf("%d %d %d %d %d\n\n", *vet, *(vet+1), *(vet+2), *(vet+3), *(vet+4));

    //3 questao
    Aluno aluno={114, 10, "EC"};
    Aluno *pAluno=&aluno;
    printf("%d %f %s\n\n", pAluno->matricula, pAluno->nota, pAluno->curso);

    //4questao
    int n, soma=0;
    int *vet2;
    vet2 = (int *)malloc(sizeof(int));
    if(vet2==NULL){
        printf("erro na alocacao\n");
        exit(1);
    }
    do{
        scanf("%d", &n);
        soma+=n;
        if(n>0){
            vet2=(int *)realloc(vet2, sizeof(int)*soma);
        }
    }while(n>0);
    free(vet2);

    return 0;
}
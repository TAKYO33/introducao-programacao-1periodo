#include <stdio.h>


int main(){
    int id1,peso1,id2,peso2,id3,peso3,id4,peso4,id5,peso5;
    int res1, res2, res3, res4, res5, total;
    scanf("%d %d", &id1, &peso1);
    scanf("%d %d", &id2, &peso2);
    scanf("%d %d", &id3, &peso3);
    scanf("%d %d", &id4, &peso4);
    scanf("%d %d", &id5, &peso5);
    scanf("%d", &total);
    if((id1 % 2)==0 && ((id1 % 3)==0 || (id1 % 5)==0 || (id1 % 7)==0)){
        res1=id1*(peso1+peso1);
       }else if(((id1*peso1) % 2)==1 && (((id1*peso1) % 11)==0 || ((id1*peso1) % 13)==0 || ((id1*peso1) % 15)==0 || ((id1*peso1) % 17)==0 || ((id1*peso1) % 19)==0)){
        res1=(id1*peso1)/2;
       }else if((id1 % 2)==0 && (id1 % 17)==0){
        res1=0;
       }else{res1=id1*peso1;}

    if((id2 % 2)==0 && ((id2 % 3)==0 || (id2 % 5)==0 || (id2 % 7)==0)){
        res2=id2*(peso2+peso2);
       }else if(((id2*peso2) % 2)==1 && (((id2*peso2) % 11)==0 || ((id2*peso2) % 13)==0 || ((id2*peso2) % 15)==0 || ((id2*peso2) % 17)==0 || ((id2*peso2) % 19)==0)){
        res2=(id2*peso2)/2;;
       }else if((id2 % 2)==0 && (id2 % 17)==0){
        res2=0;
       }else{res2=id2*peso2;}

    if((id3 % 2)==0 && ((id3 % 3)==0 || (id3 % 5)==0 || (id3 % 7)==0)){
        res3=id3*(peso3+peso3);
       }else if(((id3*peso3) % 2)==1 && (((id3*peso3) % 11)==0 || ((id3*peso3) % 13)==0 || ((id3*peso3) % 15)==0 || ((id3*peso3) % 17)==0 || ((id3*peso3) % 19)==0)){
        res3=(id3*peso3)/2;;
       }else if((id3 % 2)==0 && (id3 % 17)==0){
        res3=0;
       }else{res3=id3*peso3;}

    if((id4 % 2)==0 && ((id4 % 3)==0 || (id4 % 5)==0 || (id4 % 7)==0)){
        res4=id4*(peso4+peso4);
       }else if(((id4*peso4) % 2)==1 && (((id4*peso4) % 11)==0 || ((id4*peso4) % 13)==0 || ((id4*peso4) % 15)==0 || ((id4*peso4) % 17)==0 || ((id4*peso4) % 19)==0)){
        res4=(id4*peso4)/2;;
       }else if((id4 % 2)==0 && (id4 % 17)==0){
        res4=0;
       }else{res4=id4*peso4;}

    if((id5 % 2)==0 && ((id5 % 3)==0 || (id5 % 5)==0 || (id5 % 7)==0)){
        res5=id5*(peso5+peso5);
       }else if(((id5*peso5) % 2)==1 && (((id5*peso5) % 11)==0 || ((id5*peso5) % 13)==0 || ((id5*peso5) % 15)==0 || ((id5*peso5) % 17)==0 || ((id5*peso5) % 19)==0)){
        res5=(id5*peso5)/2;;
       }else if((id5 % 2)==0 && (id5 % 17)==0){
        res5=0;
       }else{res5=id5*peso5;}

    if(total==(res1+res2+res3+res4+res5) && id1!=id2 && id1!=id3 && id1!=id4 && id1!=id5 && id2!=id3 && id2!=id4 && id2!=id5 && id3!=id4 && id3!=id5 && id4!=id5){
        printf("barra limpa, khan\n");
    }else{
        printf("UEPAAA TEMOS UM RATINHO\n");
    }


    return 0;
}

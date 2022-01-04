#include <stdio.h>

int main() {
    int x, i0, ac1=0, ac2=0, ac3=0, ac4=0, ac5=0, ac6=0, ac7=0, ac8=0, nd=0;
    int c1, c2, c3, c4, c5, c6, c7, c8;
    scanf("%d", &x);
    int i;
    for(i=2; x!=1; i++){
        if(x%i==0){
            x=(x/i);
            nd++;
            i0=i;
            i=1;
            //printf("%d", x);
            if(i0==c1 || nd==1){
                c1=i0;
                ac1++;
            }else if(i0==c2 || nd==2){
                c2=i0;
                ac2++;
            }else if(i0==c3 || nd==3){
                c3=i0;
                ac3++;
            }else if(i0==c4 || nd==4){
                c4=i0;
                ac4++;
            }else if(i0==c5 || nd==5){
                c5=i0;
                ac5++;
            }else if(i0==c6 || nd==6){
                c6=i0;
                ac6++;
            }else if(i0==c7 || nd==7){
                c7=i0;
                ac7++;
            }else if(i0==c8 || nd==8){
                c8=i0;
                ac8++;
            }
        }
    }
    if(ac1>=ac2 && ac1>=ac3 && ac1>=ac4 && ac1>=ac5 && ac1>=ac6 && ac1>=ac7 && ac1>=ac8){
        printf("mostFrequent: %d, frequency: %d", c1,ac1);
    }if(ac2>ac1 && ac2>=ac3 && ac2>=ac4 && ac2>=ac5 && ac2>=ac6 && ac2>=ac7 && ac2>=ac8){
        printf("mostFrequent: %d, frequency: %d", c2,ac2);
    }if(ac3>ac1 && ac3>ac2 && ac3>=ac4 && ac3>=ac5 && ac3>=ac6 && ac3>=ac7 && ac3>=ac8){
        printf("mostFrequent: %d, frequency: %d", c3,ac3);
    }if(ac4>ac1 && ac4>ac2 && ac4>ac3 && ac4>=ac5 && ac4>=ac6 && ac4>=ac7 && ac4>=ac8){
        printf("mostFrequent: %d, frequency: %d", c4,ac4);
    }if(ac5>ac1 && ac5>ac2 && ac5>ac3 && ac5>ac4 && ac5>=ac6 && ac5>=ac7 && ac5>=ac8){
        printf("mostFrequent: %d, frequency: %d", c5,ac5);
    }if(ac6>ac1 && ac6>ac2 && ac6>ac3 && ac6>ac4 && ac6>ac5 && ac6>=ac7 && ac6>=ac8){
        printf("mostFrequent: %d, frequency: %d", c6,ac6);
    }if(ac7>ac1 && ac7>ac2 && ac7>ac3 && ac7>ac4 && ac7>ac5 && ac7>ac6 && ac7>ac8){
        printf("mostFrequent: %d, frequency: %d", c7,ac7);
    }if(ac8>ac2 && ac8>ac3 && ac8>ac4 && ac8>ac5 && ac8>ac6 && ac8>ac7 && ac8>ac1){
        printf("mostFrequent: %d, frequency: %d", c8,ac8);
    }

    return 0;
}

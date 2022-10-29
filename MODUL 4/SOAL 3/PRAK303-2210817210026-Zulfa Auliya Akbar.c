#include <stdio.h>

int main(){

    int N;

    scanf("%d",&N);

    if(N>0){
        printf("positif");
    }
    else if(N<0){
        printf("negatif");
    }
    else if(N==0){
        printf("nol");
    }

return 0;
}

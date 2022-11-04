#include <stdio.h>

int main(){

    int a,i;
    char tanda;

    scanf("%d %c",&a,&tanda);

    for(i=1;i<=50;i++){
        if(i%a==0){
            printf("%c ",tanda);
            continue;
        }
        printf("%d ",i);
    }
}

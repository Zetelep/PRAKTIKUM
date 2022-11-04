#include <stdio.h>

int main(){

    int a,i;
    scanf("%d",&a);

    for(i=1;i<=a;i+=2){
        printf("%d ",i);
    }
    printf("\n");

    if (a%2!=0){
        a = a-1;
    }
    while (a >= 2) {
        printf("%d ", a);
        a-=2;
    }
}

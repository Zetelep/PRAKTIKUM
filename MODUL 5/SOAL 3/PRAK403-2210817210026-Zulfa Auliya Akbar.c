#include <stdio.h>

int main(){

    int a,b,i;

    scanf("%d %d",&a,&b);

    if(a<b){
        for(i=a;i<=b;a++,b--){
            printf("%d ",a);
            printf("%d ",b);
            if (i<b){
                printf(" - ");
            }
        }
    }
    else if (a>b){
        for(i=b;i<=a;a--,b++){
            printf("%d ",a);
            printf("%d ",b);
            if(i<a){
                printf(" - ");
            }
        }
    }
}

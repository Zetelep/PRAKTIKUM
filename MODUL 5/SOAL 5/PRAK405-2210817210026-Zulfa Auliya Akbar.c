#include <stdio.h>

int main(){

    int n,k,i,j,nilai1,nilai2,total;
    nilai1 = nilai2 = total = 0;
    scanf("%d %d", &n, &k);
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("\(%d * %d\) ",j,k);
            if (j>1){
                printf(" + ");
            }
        }
        nilai1 = (i*k);
        nilai2 += nilai1;
        printf (" = %d",nilai2);
        total+= nilai2;
        printf("\n");
    }
    printf("%d",total);
}
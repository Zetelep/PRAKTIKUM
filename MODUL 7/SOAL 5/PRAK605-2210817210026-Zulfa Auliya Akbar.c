#include <stdio.h>
int main(){
    int ordo;
    scanf("%d",&ordo);

    int MatriksA[ordo][ordo],MatriksB[ordo][ordo],MatriksH[ordo][ordo],i,j,k;
    printf("Matriks A \n");
    for(i=0;i<ordo;i++){
        for (j=0;j<ordo;j++){
            scanf("%d",&MatriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for(i=0;i<ordo;i++){
        for (j=0;j<ordo;j++){
            scanf("%d",&MatriksB[i][j]);
        }
    }

    for(i=0;i<ordo;i++){
        for(j=0;j<ordo;j++){
            MatriksH[i][j]=0;
            for (k=0;k<ordo;k++){
                MatriksH[i][j]+=MatriksA[i][k]*MatriksB[k][j];

            }
        }
    }
    printf("matriks AXB \n");
    for(i=0;i<ordo;i++){
        for(j=0;j<ordo;j++){
            printf("%d ",MatriksH[i][j]);
        }
        printf("\n");
    }
}
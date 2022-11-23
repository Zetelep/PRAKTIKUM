#include <stdio.h>

int main(){
    int jumlah_ruangan;
    scanf("%d",&jumlah_ruangan);
    
    int ruangan[jumlah_ruangan],i,j;

    for(i=0;i<jumlah_ruangan;i++){
        scanf("%d",&ruangan[i]);

    }

    for(i=0;i<jumlah_ruangan;i++){
        printf("%d ",ruangan[i]*(i+1));
    }

}
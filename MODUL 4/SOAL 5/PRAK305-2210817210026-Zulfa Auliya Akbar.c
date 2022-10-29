#include <stdio.h>

int main(){

    int TD;
    int H,J,M,D;

    scanf("%d",&TD);

    if (TD>=84600){
        H = TD/(24*3600);
        TD = TD % (24 * 3600);
        J = TD/3600;
        TD %= 3600;
        M = TD / 60;
        TD %= 60;
        D = TD;

        printf("%d hari %02d:%02d:%02d", H, J, M, D);
    }

    else if(TD<84600 && TD>=0){
        J = TD/3600;
        TD %= 3600;
        M = TD / 60;
        TD %= 60;
        D = TD;

        printf("%02d:%02d:%02d", J,M,D);
    }

return 0;
}

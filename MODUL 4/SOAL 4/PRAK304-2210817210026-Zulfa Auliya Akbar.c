#include <stdio.h>

int main(){

    int a;

    scanf("%d",&a);

    if(a == 0){
        printf("nol");
    }
    else if(a>0 && a<=9){
        printf("Satuan");
    }
    else if(a>=10 && a<=19){
        printf("Belasan");
    }
    else if(a>=20 && a<100){
        printf("Puluhan");
    }
    else{
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

return 0;
}

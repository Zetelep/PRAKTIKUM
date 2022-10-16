#include <stdio.h>

int main(){

    float A = 400000, B = 350000, discA = 0.13, discB = 0.21;

    printf("Harga sepatu A adalah %.f \n", A );
    printf("Harga sepatu b adalah %.f \n", B );
    printf("Sepatu A mendapat diskon %.f%% sehingga harganya menjadi %.f \n",discA*100 , (1-discA)*A);
    printf("Sepatu B mendapat diskon %.f%% sehingga harganya menjadi %.f",discB*100 ,(1-discB)*B);

    return 0;
}
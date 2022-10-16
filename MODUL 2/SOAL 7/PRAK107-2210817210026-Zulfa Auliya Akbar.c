#include <stdio.h>

int main(){
    
    int a = 4, b = 5, c = 7, HP = 85000, k; //HP =Harga Pemasangan/meter dan k adalah keliling
    k=a+b+c;
    
    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d \n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d \n",k);
    printf("Harga Tanah Per Meter adalah %d \n",HP);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", HP*k);

    return 0;
}
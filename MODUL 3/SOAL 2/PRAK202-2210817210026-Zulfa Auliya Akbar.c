#include <stdio.h>

int main(){

    float n1, n2;

    printf("Masukan nilai pertama :");
    scanf("%f",&n1);
    printf("Masukan nilai kedua :");
    scanf("%f",&n2);

    printf("\nHasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"", n1, n2, n1+n2);

    return 0;
}

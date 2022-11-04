#include <stdio.h>

int main(){

    float n1,n2,pil;

    while(pil!=5){
        printf("Pilih program \n1.Penjumlahan \n2.Pengurangan \n3.perkalian \n4.Pembagian\n5.Exit \nMasukan Pilihan :");
        scanf("%f",&pil);

        if(pil!=1 && pil!=2 && pil!=3 && pil!=4 && pil!=5){
            printf("Input anda salah, silahkan coba lagi \n \n");
        }
        else if (pil == 5){
            printf("Terimakasih, telah menggunakan kalkulator Zulfa Auliya Akbar \n \n");
        }
        else {
            printf("Masukan nilai pertama :");
            scanf("%f",&n1);
            printf("Masukan Nilai Kedua :");
            scanf("%f",&n2);

            if(pil==1){
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n \n",n1,n2,n1+n2);
            }
            else if(pil==2){
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n \n",n1,n2,n1-n2);
            }
            else if(pil==3){
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n \n",n1,n2,n1*n2);
            }
            else if(pil==4){
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f \n \n",n1,n2,n1/n2);
            }
        }
    }
}
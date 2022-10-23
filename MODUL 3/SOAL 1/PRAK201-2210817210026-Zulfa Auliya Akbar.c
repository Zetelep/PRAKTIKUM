#include <stdio.h>

int main(){

    char nama[50], TTL[50], Alamat[50], Hobby[50], KP[1], NO[15], NIM[50];


    printf("Nama                   : ");
    gets(&nama);
    printf("NIM                    : ");
    gets(&NIM);
    printf("Kelas Paralel          : ");
    gets(&KP);
    printf("Tempat/Tanggal Lahir   : ");
    gets(&TTL);
    printf("Alamat                 : ");
    gets(&Alamat);
    printf("Hobby                  : ");
    gets(&Hobby);
    printf("No. HP                 : ");
    gets(&NO);

    printf("\n");
    printf("Nama                   : %s\n",nama);
    printf("NIM                    : %s\n",NIM);
    printf("Kelas Paralel          : %s\n", KP);
    printf("Tempat/Tanggal Lahir   : %s\n",TTL);
    printf("Alamat                 : %s\n",Alamat);
    printf("Hobby                  : %s\n", Hobby);
    printf("No. Hp                 : %s\n",NO);

    return 0;
}

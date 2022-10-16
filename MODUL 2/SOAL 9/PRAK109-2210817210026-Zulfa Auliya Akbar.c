#include <stdio.h>

int main(){

    int CR, P;
    CR = 958730; //CR = Cardia Riverlands aka pasukan yu zhong
    P  = 5;      //P = Pahlawan

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d \n", CR);
    printf("Jumlah pahlawan = %d \n", P);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", CR/P);

    return 0;
}
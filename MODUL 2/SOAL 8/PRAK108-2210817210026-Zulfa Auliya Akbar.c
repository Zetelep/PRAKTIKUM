#include <stdio.h>
#define phi 3.14
int main(){

    float P, JT, r;
    P= 5; // P = putaran
    JT = 14; // JT = jarak tempuh
    r = (JT/P)/(2*phi);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran \n",P);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer \n \n", JT);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer",r);

    return 0;
}

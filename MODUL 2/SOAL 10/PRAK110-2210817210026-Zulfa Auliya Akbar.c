#include <stdio.h>
#include <math.h>

int main(){

    float a,t,sm;
    a = 5; //a = alas
    t = 12; //t = tinggi
    sm = sqrt((a*a)+(t*t)); //sm = sisi miring, menggunakan pyythagoras

    printf("Diketahui: \n");
    printf("Alas = %.f cm \n", a);
    printf("Tinggi = %.f cm \n \n", t);
    printf("Jawab : \n");
    printf("Sisi A = %.f cm \n", t);
    printf("Sisi B = %.f cm \n", sm);
    printf("Sisi C = %.f cm \n", a);
    printf("Keliling = %.f cm \n",a+t+sm);
    printf("Luas = %.f cm", 0.5*a*t);

    return 0;
}

#include <stdio.h>
#include <math.h>
int main(){

    float A, B;
    scanf("%f \n %f",&A, &B);
    printf("Alas = %.f cm \n", sqrt((B*B)-(A*A)) );
    printf("tinggi = %.f cm \n", A);
    printf("Keliling = %.f cm \n", A+B+sqrt((B*B)-(A*A)));
    printf("Luas = %.f cm^2", 0.5*A*(sqrt((B*B)-(A*A))));

    return 0;
}

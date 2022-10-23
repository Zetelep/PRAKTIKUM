#include <stdio.h>
#define PHI 3.142857

int main(){

    float r,t;

    scanf("%f \n %f",&r,&t);
    printf("Volume = %.2f \n",PHI*(r*r)*t);
    printf("Luas = %.2f \n", 2*PHI*r*(r+t));
    printf("Keliling = %.2f",2*PHI*r);

    return 0;

}

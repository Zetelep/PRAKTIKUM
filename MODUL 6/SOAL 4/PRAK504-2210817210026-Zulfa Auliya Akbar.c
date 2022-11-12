#include <stdio.h>
int reverse(int n){

    int rvrs=0; 
    while(n!=0){ 
        rvrs=rvrs*10; 
        rvrs=rvrs+n%10; 
        n=n/10; 
    } 
    return rvrs;
}
int main() {
int A, B;
scanf("%d %d",&A,&B);
A=reverse(A);
B=reverse(B);
int C = A+B;
printf("%d",reverse(C));
}

#include <stdio.h>
#define MAX(x,y) (((x) > (y)) ? x : y)

int MaxBilangan(int a, int b, int c, int d){
    
return MAX(MAX(a,b), MAX(c,d));
}

int main() {
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d); 
int hasil = MaxBilangan(a, b, c, d); 
printf("%d", hasil);
return 0;
}

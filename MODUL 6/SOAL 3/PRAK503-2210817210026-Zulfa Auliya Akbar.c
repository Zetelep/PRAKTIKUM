#include <stdio.h>
#define MAX(x,y) (((x) > (y)) ? x : y)
#define MIN(x,y) (((x) < (y)) ? x : y)
int maksimal(int a, int b){

return MAX(a,b);
}
int minimal(int a, int b){

return MIN(a,b);
}
int main(){
int batas = 0;
int maks = -100000;
int minim = 100000;
int bilangan;
scanf("%d", &bilangan);

while(batas < bilangan){
int nilai;
scanf("%d", &nilai);
maks = maksimal(maks, nilai);
minim = minimal(minim, nilai);
batas++;
}

printf("%d %d",maks,minim);
}
#include <stdio.h>
#include <math.h>

int main()

{ 
int i,j;
// 40*40'lık bir ekranın ortasına oval bir şekilde "w" yazdırmak.
// Şekli ortada elde etmek istediğimiz için x^2 + y^2 = r^2 formulünü, 40/2'den biraz az olarak başlatıyoruz.


for(i=0;i<40;i++) {
    for(j=0;j<40;j++) {
 
    if((i-19.5)*(i-19.5)+(j-19.5)*(j-19.5)<300) {
        printf("w");
    }
    else {
        printf("*");
       } 
} 
printf("\n");
} 



} 
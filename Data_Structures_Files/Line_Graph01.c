//
// Created by Kocatas on 5/30/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Verilen Şekilde, Line'ın üzerindeki bölgeyi yıldızla doldur. altında kalan bölgeyi 0 ile doldur.

int main(){
    int i,j,k;
    double m,n;
    double j1 = 8.0;
    double j2 = 72.0;

    for(i = 0; i < 80; i++){
        for(j = 0; j < 80; j++) {

            if(i < 0.344*j + 27.248){
                printf("*");
            }else{
                printf("0");
            }
            }

        printf("\n");
    }
}
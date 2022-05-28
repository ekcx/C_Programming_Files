//
// Created by Kocatas on 5/27/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Graphic olayı tamam.
// Matrix hesaplamalarını bir daha kontrol edelim.
// Sorting algoritmaları çıkmış sorulara bakalım. Özellikle tekrar tekrar yazdırma işine bakalım.
// Struct - Linked List - push() - pull() kavramları

void swapping_func(double a, double b);

// Bubble Sorting

int main(){

    int myArray[15] = {5, 19, 9, 3, 0 ,12, 99, 122, 93, 198, 177,
                       26, 21, 44, 991};
    int i,j,k;
    int temp = 0;


    for(i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            if (myArray[j] > myArray[j+1]){
                temp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = temp;
            }
        }
    }

    printf("\n");

    for(i = 0; i < 16; i++){
        printf("%d ", myArray[i]);
    }

}

void swapping_func(double a, double b){

    double temp = 0.0;
    temp = a;
    a = b;
    b = temp;

}
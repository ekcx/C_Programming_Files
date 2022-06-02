//
// Created by Kocatas on 5/27/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Insertion Sort
// ilk indexten itibaren kıyaslamaya başla. ilk 2 index'i kıyasla, küçük olanı ilk index'e ata.
// yavaş yavaş sağa doğru ilerle ve bu kıyaslamayı her sayı için yap.
// daha küçük sayıları bulduğunda, arrayda doğru yere yerleştir.


int main(){

    int myArray[10] = {22,21,4,62,9,6,35,88,2,5};
    int i,j,temp = 0;

    for(i = 1; i < 10; i++){
        j = i;
        //printf(" %d -",myArray[i]);

        while(j > 0 && myArray[j-1] > myArray[j]){
            temp = myArray[j];
            myArray[j] = myArray[j-1];
            myArray[j-1] = temp;
            j--;
            //printf(" %d -",myArray[i]);
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", myArray[i]);
    }
}
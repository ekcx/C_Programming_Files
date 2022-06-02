//
// Created by Kocatas on 5/28/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Insertion Sort

int main(){

    int myArray[8] = {65, 70, 50, 85, 55, 80, 45, 90};

    int i,j;
    int temp = 0;

    for(i = 0 ; i < 8; i++){
        for( j = 1; j < 8; j++){
            if(myArray[j-1] > myArray[j]){

                temp = myArray[j];
                myArray[j] = myArray[j-1];
                myArray[j-1] = temp;
            }
        }
    }

    for(i = 0; i < 8; i++){
        printf("%d ", myArray[i]);
    }
}


































































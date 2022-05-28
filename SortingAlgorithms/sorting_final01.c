//
// Created by Kocatas on 5/25/2022.
//

#include <stdio.h>
#include <stdlib.h>

//Insertion Sort Algorithm
// ilk elementten başlayarak

int main(){
    int myArray[8] = {65, 23, 50, 85, 55, 80, 45, 90};
    int temp;
    int indexMin;
    int min;

    indexMin = myArray[0];
    for(int i = 0; i < 8; i++){
        if(myArray[i] < indexMin){
            indexMin = myArray[i];
        }
    }


    printf("%d \n", indexMin);

    for(int i = 0; i < 8; i++){
        min = i;
        for(int j = i+1 ; j < 8; j++){
            if(myArray[j] < myArray[min]){
                min = j;
            }
        }
        printf("%d ", indexMin);
        if(indexMin != i){
            temp = myArray[min];
            myArray[min] = myArray[i];
            myArray[i] = temp;

        }
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("%d ", myArray[i]);
    }

 }


















































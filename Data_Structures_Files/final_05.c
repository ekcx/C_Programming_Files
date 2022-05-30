//
// Created by Kocatas on 5/29/2022.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int array[], int first, int second);

int main(){

    int array[10] = {72,34,88,14,32,12,34,77,56,83,};
    int smallest, i,j;
    int temp = 0;

    for(i = 0; i < 10; i++) {
        smallest = i;
        for (j = i + 1; j < 10; j++) {
            if (array[j] < array[smallest]) {

                temp = array[j];
                array[j] = array[smallest];
                array[smallest] = temp;
            }
        }
        printf("%d'th = %d \n", i, array[i]);
        /*
                temp = array[i];
                array[i] = array[smallest];
                array[smallest] = temp;
                printf("%d'th  = %d \n",i , array[i]);
          */
            }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

}

void swap(int array[], int first, int second){


}
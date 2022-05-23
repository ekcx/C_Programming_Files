//
// Created by Kocatas on 5/18/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Linear Search, item-by-item comparing to find the identified key.
    //Linear Search, it is inefficient algorithm if the data is large scale.

    int sorting_array[7] = {78, 44, 22, 83, 99, 12, 85};
    int sorted_array[7] = {0};

    for(int i = 0; i < 7; i++){
        printf(" %d ",sorting_array[i]);
    }

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < i; j++){
            if (sorting_array[j] >= sorting_array[i]){
                sorted_array[j] = sorting_array[i];
            }
            //else if(sorting_array[j] == sorting_array[i]){
              //  sorted_array[j] = sorting_array[i];
            //}
            else{
                sorted_array[j-i] = sorting_array[i];

            }

        }
    }

    printf("\n");

    for(int i = 0; i < 7; i++){
        printf("%d ", sorted_array[i]);
    }


}

//
// Created by Kocatas on 5/28/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Calculating the square of the main diagonal of any matrix.

void matrix_squared(double *, int , int );

int main(){

    double *matrix1;
    int row, col;
    printf("Enter row and col: \n");
    scanf("%d%d", &row, &col);


    matrix_squared(matrix1, row, col);


}

void matrix_squared(double *Result, int rowSize, int colSize){

    Result = (double * ) malloc(rowSize * colSize * sizeof(double));

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            if( i == j) {
                scanf("%lf", (Result+i*colSize+j));
                *(Result + i * colSize + j) = pow(*(Result + i * colSize + j), 2);
            }
            else{
                scanf("%lf", (Result+i*colSize+j));
            }
        }
    }

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            printf("%lf ", *(Result+i*colSize+j));
        }
        printf("\n");
    }

    free(Result);

}
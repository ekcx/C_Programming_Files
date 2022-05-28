//
// Created by Kocatas on 5/28/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Matrix Operations by using dynamic memory allocations

void matrix_display(double *, double *, int, int);

int main(){

    double *matrix1;
    double *matrix2;
    int m,n;
    printf("Enter row size: \n");
    scanf("%d", &m);
    printf("Enter col size: \n");
    scanf("%d", &n);

    matrix_display(matrix1, matrix2, m,n);

}

void matrix_display(double *A, double *B, int rowSize, int colSize){

    A = (double *) malloc(rowSize * colSize * sizeof(double ));
    B = (double *) malloc(rowSize * colSize * sizeof(double ));

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            scanf("%lf", (A + i*colSize + j));
        }
    }

    for(int i = 0; i < rowSize; i++){
        printf("|");
        for(int j = 0; j < colSize; j++) {
            printf("%lf", *(A + i * colSize + j));
            if (j != (colSize - 1)) {
                printf("\t");
            }
        }
        printf("|\n");
    }

    printf("\nThe size of matrix: %dx%d\n", rowSize,colSize);
    free(B);
    free(A);

}
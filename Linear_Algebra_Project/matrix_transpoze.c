//
// Created by Kocatas on 5/1/2022.
//

#include <stdio.h>
#include <stdlib.h>

void matrix_transpoze(double *, double *, int, int, int, int);

int main(){

    int row1, col1, row2, col2;
    double *matrix1, *matrix2;

    printf("Row1, col1, row2, col2: \n");
    scanf("%d%d%d%d", &row1, &col1, &row2, &col2);



    matrix_transpoze(matrix1, matrix2, row1, col1, row2, col2);

}

void matrix_transpoze(double *matrix1, double *matrix2, int row1, int col1, int row2, int col2){

    matrix1 = (double *) malloc(row1 * col1 * sizeof(double));
    matrix2 = (double *) malloc(row1 * col2 * sizeof(double));

    int i,j;

    for(i = 0; i < row1; i++){
        for(j = 0; j < col1; j++){
            scanf("%lf", (matrix1+i*col1+j));
        }
    }

    for(i = 0; i < row1; i++){
        for(j = 0; j < col1; j++){
            *(matrix2+j*col1+i) = *(matrix1+i*col1+j);
        }
    }

    for(i = 0; i < col1; i++){
        for(j = 0; j < row1; j++ ){
            printf("%lf ", *(matrix2+i*row1+j));
        }
        printf("\n");
    }

    free(matrix1);
    free(matrix2);

}

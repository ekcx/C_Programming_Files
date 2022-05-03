//
// Created by Kocatas on 4/30/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void matrix_multiplication(double *matrix1, double *matrix2, double *result, int nRow, int nCol, int mRow, int mCol);


int main(){
    double *matrix1, *matrix2, *result;
    int row1, col1, row2, col2;

    printf("Please enter row1, col1, row2, col2 respectively: \n");
    scanf("%d%d%d%d",&row1,&col1,&row2,&col2);

    if(col1 == row2){
        matrix_multiplication(matrix1, matrix2, result, row1, col1, row2, col2);
    }else{
        printf("The dimensions are not valid!");
    }

}

void matrix_multiplication(double *matrix1, double *matrix2, double *result, int nRow, int nCol, int mRow, int mCol){

        int i,j,k;
        matrix1 = (double *)malloc(nRow * nCol * sizeof(double));
        matrix2 = (double *)malloc(mRow * mCol * sizeof(double));
        result =  (double *)malloc(nRow * mCol * sizeof(double));

        for(i = 0; i < nRow; i++){
            //*(matrix1+i*nCol+j) = 0;
            for(j = 0; j < nCol; j++){
                scanf("%lf", (matrix1+i*nCol+j));
            }
        }


        for(i = 0; i < mRow; i++){
            //*(matrix2 + i*mCol + j) = 0;
            for(j = 0; j < mCol; j++){
                scanf("%lf", (matrix2+i*mCol+j));
            }
        }


        for(i = 0; i < nRow; i++){
            for(j = 0; j < mCol; j++){
                *(result+i*mCol+j) = 0;
                for(k = 0; k < nCol; k++){
                    *(result+i*mCol+j) += *(matrix1+i*nCol+k) * *(matrix2+k*mCol+j);
                }
                printf("\n");
            }
        }

        for(i = 0; i < nRow; i++){
            for(j = 0; j < mCol; j++){
                printf("%lf ", *(result+i*mCol+j));
            }
            printf("\n");
        }

        free(result);
        free(matrix2);
        free(matrix1);
}
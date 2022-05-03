//
// Created by Kocatas on 5/1/2022.
//

#include <stdio.h>
#include <stdlib.h>

// row ve column sayılarını belirle, boyutlarından emin ol.
// dynamic memory allocation ile matrixlerin boyutlarını ayarla.
// ilk matrisi al.
// ikinci matrisi al.
// Toplama işlemini yap.
// Result matrixi yazdır.
// Memory DEallocation yap.

int main(){
    int row1,col1,i,j,k;
    int row2,col2;
    double *matrix1;
    double *matrix2;
    double *result;
    double sum = 0.0;


    printf("Please enter row1, col1, row2, col2 respectively.\n");
    scanf("%d%d%d%d",&row1, &col1, &row2, &col2);

    if((row1 == row2) && (col1 == col2)){
        matrix1 = (double *)malloc(row1 * col1 * sizeof(double));
        matrix2 = (double *)malloc(row2 * col2 * sizeof(double));
        result = (double *)malloc(row1 * col1 * sizeof(double));

        for(i = 0; i < row1; i++){
            for(j = 0; j < col1; j++) {
                printf("\nFirst Matrix %dth %dth elements: ", i,j);
                //printf("\nEnter %dth %dth elements: ",i,j);
                scanf("%lf", (matrix1 + i * col1 + j));
            }
        }

        printf("\n");
        for(i = 0; i < row2; i++){
            for(j = 0; j < col2; j++){
                printf("\nSecond Matrix %dth %dth elements: ",i,j);
                //printf("\nEnter %dth %dth elements: ",i,j);
                scanf("%lf", (matrix2+i*col2+j));
            }
        }
        printf("\n");
        for(i = 0; i < row1; i++){
            for(j = 0; j < col1; j++){
                *(result+i*col1+j) = *(matrix1+i*col1+j) + *(matrix2+i*col2+j);
            }
        }

        printf("\n");
        printf("\bResultant Matrix: \n");
        for(i = 0; i < row1; i++){
            for(j = 0; j < col1; j++){
                printf("%lf ", *(result+i*col1+j));
            }
            printf("\n");
        }
        free(result);
        free(matrix2);
        free(matrix1);

    }else{

        printf("The dimensions of the matrices are not valid to sum!");

    }

}
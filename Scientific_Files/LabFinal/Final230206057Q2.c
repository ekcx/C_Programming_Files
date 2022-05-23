//
// Created by Kocatas on 5/23/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mat_mlt(int m, int n, int p, double *A, double *B, double *C);
void mat_trnsps(int m, int n, double *A, double *B);


int main(){
    double *matrix1, *matrix2, *result;
    int row1, col1, row2, col2;
    int choose;

    printf("Please enter the matrix operation: \n");
    printf("1) Matrix Multiplication\n");
    printf("2) Matrix Transpoze");
    scanf("%d", &choose);

    if (choose == 1) {

        printf("Please enter row1, col1, row2, col2 respectively: \n");
        scanf("%d%d%d%d",&row1,&col1,&row2,&col2);

        if (col1 == row2) {

            printf("Please enter the elements of matrices element by element: ");
            mat_mlt(row1, col1, col2, matrix1, matrix2, result);

        } else {
            printf("The dimensions are not valid!");
        }
    }
    else if (choose == 2){

        printf("Please enter row1, col1 respectively: \n");
        scanf("%d%d",&row1,&col1);
        printf("Transpoze: ");
        printf("\n");
        mat_trnsps(row1, col1, matrix1, matrix2);

    }
    else{
        printf("You choose wrong option! Try again.");
    }
}

void mat_mlt(int m, int n, int p, double *A, double *B, double *C){

    int i,j,k;
    A = (double *)malloc(m * n * sizeof(double));
    B = (double *)malloc(n * p * sizeof(double));
    C =  (double *)malloc(m * p * sizeof(double));

    // İlk matrisi alıp, atıyoruz.
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", (A+i*n+j));
        }
    }


    //ikinci matrisi alıp, atıyoruz.
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            scanf("%lf", (B+i*p+j));
        }
    }


    //Çarpma işlemini yapıyoruz.
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            *(C+i*p+j) = 0; // Initialization
            for(k = 0; k < n; k++){
                *(C+i*p+j) += *(A+i*n+k) * *(B+k*p+j);
            }
            printf("\n");
        }
    }

    // Yaptığımız çarpma işlemini yazdırıyoruz.
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            printf("%lf ", *(C+i*p+j));
        }
        printf("\n");
    }

    free(C);
    free(B);
    free(A);
}

void mat_trnsps(int m, int n, double *A, double *B){

    A = (double *) malloc(m * n * sizeof(double));
    B = (double *) malloc(n * m * sizeof(double));

    int i,j;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", (A+i*n+j));
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            *(B+j*n+i) = *(A+i*n+j);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++ ){
            printf("%lf ", *(B+i*m+j));
        }
        printf("\n");
    }

    free(A);
    free(B);

}
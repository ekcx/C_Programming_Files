#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Önce kaçıncı dereceden olduğunu al.
// Sonra değişken değerini al.
// Sonra teker teker katsayıları al.
// math.h kütüphanesi kullanarak denklemi hesapla.
// Sonucu tek double değişkene ata ve bu değişkeni döndür.

double polysum(double *equation, double xvalue, int degree);

int main(){

    double result = 0.0; // return and equal to result of the polysum.
    double *polynomial_equation; // Polynomial equation's pointer variable's
    double x; // x variable on the equation
    int polynomial_degree; // polynomial degree of the equation

    printf("x value on f(x) : \n");
    scanf("%lf", &x);

    printf("polynomial degree: \n");
    scanf("%d", &polynomial_degree);

    result = polysum(polynomial_equation, x, polynomial_degree);
    printf("The result is : %lf \n", result);
}

double polysum(double *equation, double xvalue, int degree){

    double sum = 0.0;
    equation = (double *) malloc( degree*sizeof(double)*sizeof(double)); // Dynamic Memory Allocation.
    // degree * sizeof(double) * sizeof(double) this expression allocate the memory.
    // Because, we need degree * 4 addresses on the memory by expanding equations with double variable type.

    for(int i = degree; i >= 0; i--){

        printf("Enter %d th element x^%d: \n", i,i);
        scanf("%lf", (equation+i)); // assigning to the memory.
        //printf("%lf \n", *(equation+i)); // it can be printed of the coeff. if possible.
        sum += *(equation+i) * pow(xvalue, i); //This is the calculation step of the equation.

    }

    return sum;

}


//
// Created by Kocatas on 5/23/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float);
float Derivative(float);
float Forward_Diff(float);
float Backward_Diff(float);
float Centered_Diff(float);

int main(){
    double x;
    printf("Enter Function Variable 'x'\n");
    scanf("%lf", &x);

    printf("Numerical Derivative Method");
    printf("\tNumerical Solution");
    printf("\tAnalytic Solution");
    printf("\tError(%)");

    printf("\n");
    printf("Forward Difference\t\t%2f\t\t%2f\t\t%2f\n", Forward_Diff(x), f(x), fabs(((Forward_Diff(x)- f(x))/ f(x))*100));
    printf("Backward Difference\t\t%2f\t\t%2f\t\t%2f\n", Backward_Diff(x), f(x), fabs(((Backward_Diff(x) - f(x))/ f(x))*100));
    printf("Centered Difference\t\t%2f\t\t%2f\t\t%2f\n", Centered_Diff(x), f(x), fabs(((Centered_Diff(x) - f(x))/ f(x))*100));

/*
 * Struct yapısına ekleyemedim. Bu yüzden bu şekilde bıraktım.
 *
 * The comment about when h is equal to h = 10^-1:
 *
 * If we increase the step size of the calculations, we will have the bigger error rate in the Numerical Solution. For instance;
 * in our conditions, h = 0.001 if we take h = 0.1, we get nearly 100 times bigger error rate from our results.
 * Thanks for your Term Labour/efforts.
 * Efe.
 */

}

float f(float x){

    return (pow((x-3),2) + 1);
}


float Derivative(float x){

    return (2*(x-3) + 1);
}

float Forward_Diff(float x){

    double h = 0.1;
    return ((f(x + h) - f(x)) / h);
}

float Backward_Diff(float x){

    double h = 0.1;
    return ((f(x) - f(x-h)) / h);
}

float Centered_Diff(float x){

    double h = 0.1;
    return  ( f((x + h)) - f((x - h)) ) / (2 * h);

}
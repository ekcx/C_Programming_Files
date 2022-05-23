//
// Created by Kocatas on 5/23/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

// f(x) = sin(pi/2 * x^2 ) + 0.2

double function(double);

int main(){

    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("f(%2f) = %2f", x, function(x));

}

double function(double x){

    return (sin(x * x * PI/2) + 0.2);
}
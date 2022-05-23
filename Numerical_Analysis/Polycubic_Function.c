//
// Created by Kocatas on 5/23/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double polycubic(double);

int main(){

    printf("%2f \n", polycubic(5));

}

// This is the specified function is (x^3 - 4x^2 - 4x + 15)

double polycubic(double x){


    return (x*x*x - 4*x*x - 4*x + 15);

}
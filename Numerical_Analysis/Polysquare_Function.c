//
// Created by Kocatas on 5/23/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double polysquare(double);

int main(){

    printf("%2f\n", polysquare(6.0));

}

// This is the specified function is (5x^2 - 2*x - 29)

double polysquare(double x){

    return (5*x*x - 2*x - 29);
}
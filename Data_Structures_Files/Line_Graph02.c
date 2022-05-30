//
// Created by Kocatas on 5/30/2022.
//

#include <stdio.h>
#include <stdio.h>
#include <math.h>

#define max(x,y) (x >= y) ? x : y
#define min(x,y) (x < y) ? x : y

int main() {

    int i, j;
    double j1 = 3;
    double j2 = 38;
    double m = 35.0 / 65.0;

    for (i = 0; i < 80; i++) {
        for (j = 0; j < 80; j++) {

            if (fabs(i - (m * (j - 3)) - 21) < 0.5) {
                if (max(j1, j2) && min(j1, j2))
                    printf("&");
                }
            else {
                    printf("o");
                }
            }
        printf("\n");

    }
}


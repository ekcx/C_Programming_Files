//
// Created by Kocatas on 5/27/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max(x,y)  (x>=y) ? x : y
#define min(x,y)  (x<y)  ? x : y

int main(){

    int i,j;
    double m,n;
    // önceden verilmiş olan koordinatlarla işlem yapıyoruz.
    // (i1,j1) ve  (i2,j2)
    // Doğru denklemi => y = m*x + c

    double j1 = 5.0;
    double j2 = 70.0;

    for(i = 0; i < 80; i++){

        for(j = 0; j < 80; j++) {
            m = 50.0 / 65.0;
            n = fabs(i - (m * (j - 5)) + 10); // koordinatlara göre olan eğim denklemi.

            if (n < 0.8) {
                if (min(j1, j2) && max(j1, j2)) {
                    printf("*"); // // Eğim denklemi üzerinde yer alan noktada * bastırılması.
                }
            } else {
                printf("o");
            }
        }
        printf("\n");
}
}


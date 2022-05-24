//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct {
    char *engine;
} car1, car2;

int main(){

    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa DUAL VTVT";
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);

}
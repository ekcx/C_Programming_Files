//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>

// Initializing & Accessing the Structure Members

/*
 * struct abc{
 *      int p = 23;
 *      int q = 34;
 *      //This is the wrong way of initialization.
 *
 *
 * };
 *
 *
 */

typedef struct abc{
    int p;
    int q;
} abc;

typedef struct car{

    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;

} car;


int main(){

    abc x = {23, 34};
    abc y = {15, 35};
    abc z = {5, 10};
    car c1 = {"soch 1.6", "gassoline", 100, 4, 10.5};
    printf("%s\n%s\n%d\n%d\n%.2f\n", c1.engine, c1.fuel_type, c1.fuel_tank_cap, c1.seating_cap, c1.city_mileage);
    printf("%d\n%d\n", x.p, x.q);
    printf("%d\n%d\n", y.p, y.q);
    printf("%d\n%d\n", z.p, z.q);
}
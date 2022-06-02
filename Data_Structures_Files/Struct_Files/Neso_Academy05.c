//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>
//Typedef Mevzusu

// typedef existing_data_type new_Data_type

// typedef gives freedom to the user by allowing them yo create their own types.
// mesela typedef int INTEGER yazdık, int yerine INTEGER yazmış oluyoruz.

typedef struct car{ // This is the old type.

    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;

} car; // This is the new type.

// car becomes new data type.

int main(){

    car c1;
    c1.fuel_tank_cap = 500;

    printf("%d\n", c1.fuel_tank_cap);

}

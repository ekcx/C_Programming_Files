//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    // For Car 1
    char *car1Engine = "DDis 190 Engine";
    char *car1fuelType = "Petrol";
    int car1fuelCap = 37;
    int car1seatingCap = 5;
    float car1CityMileage = 19.74;

    // For Car 2
    char *car2Engine = "1.2 L Kappa Dual VTVT";
    char *car2fuelType = "Diesel";
    int car2fuelCap = 35;
    int car2seatingCap = 5;
    float car2CityMileage = 22.54;

    //Defining everytime different variables does not make sense!
    //We can use array data types but we can not store different type. So, it is also awful!
    //The solution is to use STRUCTURE.

    //A structure is a user defined data type that can be used to group
    // - elements of different types into a single type.

    //Declaring Structure

    struct {
        char *engine;
        char *fuel_type;
        int fuel_tank_cap;
        int seating_cap;
        float city_mileage;
    } car1, car2;
}




































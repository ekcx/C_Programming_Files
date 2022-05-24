//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Defining Structure Tag
struct employee {

    char *name;
    int age;
    int salary;

};

int manager(){

    struct employee manager; // The another form of creating local struct variable
    manager.age = 25;
    manager.name = "Nick";
    manager.salary = 2900;
    printf("%d \n", manager.salary);

}


int main(){

    struct employee emp1;
    struct employee emp2;
    emp1.salary = 5000;
    emp2.salary = 1000;

    emp1.age = 29;
    emp2.age = 39;

    emp1.name = "Jack";
    emp2.name = "Jacob";

    printf("\n");
    printf("employee 1's salary: %d\n", emp1.salary);
    printf("employee 1's age: %d\n", emp1.age);
    printf("employee 1's name: %s\n", emp1.name);
    printf("\n");
    printf("employee 2's salary: %d\n", emp2.salary);
    printf("employee 2's age: %d\n", emp2.age);
    printf("emplyee 2's name: %s\n", emp2.name);
    printf("\n");
    manager();



}
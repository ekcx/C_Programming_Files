//
// Created by Kocatas on 5/28/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_VALUE 5000;
#define  max(x,y) ((x >= y) ? x : y);
#define  min(x,y) ((x < y) ? x : y);



typedef struct name_surname{

    char *name;
    char *surname;
    int age;
    int salary;

} name_surname;


int main(){
    name_surname person1;
    name_surname person2;
    name_surname person3;
    int a,b;
    int value;

    person1.name = "Efe";
    person1.surname = "Kocatas";
    person1.age = 30;
    person1.salary = MAX_VALUE;

    person2.name = "John";
    person2.surname = "Doe";
    person2.age = 45;
    person2.salary = MAX_VALUE;

    person3.name = "Nick";
    person3.surname = "Albie";
    person3.age = 50;
    person3.salary = MAX_VALUE;

    printf("Please enter the numbers that will be compared: ");
    scanf("%d%d",&a, &b);

    value = max(a,b);
    printf("Maximum value: %d \n", value);

    value = min(a,b);
    printf("Minimum value: %d ", value);




}
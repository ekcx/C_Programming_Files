//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>

struct {
    char *engine;
} car1, car2;

int manager()
{
    struct {
        char *name;
        int age;
        int salary;
    } manager ;

    manager.age = 27;

    if(manager.age > 30){
        manager.salary = 65000;
    }else{
        manager.salary = 55000;
    }
    return manager.salary;
}

int main(){

    car1.engine = "DDis 190 Engine";
    car2.engine = "1.2 L Kappa DUAL VTVT";
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);

}
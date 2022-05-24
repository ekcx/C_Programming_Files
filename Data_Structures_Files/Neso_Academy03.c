//
// Created by Kocatas on 5/24/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct{
    char *name;
    int age;
    int salary;
} emp1, emp2;

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

    printf("Enter the salary of employee1: \n");
    scanf("%d", &emp1.salary);

    printf("Enter the salary of employee2: \n");
    scanf("%d", &emp2.salary);

    printf("Employee 1 salary is: %d \n", emp1.salary);
    printf("Employee 2 salary is: %d \n", emp2.salary);
    printf("Manager's salary is %d\n", manager());

    //printf("Please enter manager's age: \n");
    //scanf("%d", manager());

    printf("Manager's salary is %d", manager());

    // Burada manager() fonksiyonunun içerisinde yer alan manager struct'ı, local scope'da yer alır. Yani int main() içerisinde ona ulaşamayız.
    // Ama main()'in dışında tanımlanmış struct yapısı olan emp1 ve emp2 global scope'da tanımlanmıştır ona ulaşabiliriz.


    return 0;


}




















//
// Created by Kocatas on 5/24/2022.
//

#include <stdio.h>
#include <stdlib.h>

// Pointer to structure variable

typedef struct abc {

    int x;
    int y;

} abc ;

typedef struct name_surname {

    char *name;
    char *surname;
    char *address;
    int age;
    int salary;

} name_surname;

int main(){

    abc a = {0, 1};
    abc *ptr = &a;

    //a'nın adresinin, ptr pointerına eşitliyoruz.
    // Dolayısıyla, a'nın adresinde bulunan x ve y değişkenleri 0 ve 1 oluyor sırasıyla.

    printf("%d\t%d\n", ptr->x, ptr->y); //ptr->x ve ptr->y gösterimleri, *ptr.x ve *ptr.y gösterimlerinin
    //Başka bir türüdür.

    name_surname john_doe = {"John", "Doe", .age = 30, .address = "5th Avenue 10001 Manhattan NYC", .salary = 10000};
    name_surname *person_detail = &john_doe;
    printf("%s %s %s %d %d\n", person_detail->name, person_detail->surname, person_detail->address, person_detail->age, person_detail->salary);

    int age2 = person_detail->age; //Assigning pointer struct's variable to the normal integer variable.
    char *name = person_detail->name; //Assigning pointer struct's variable to the normal pointer char variable.


    printf("%d \t %s", age2, name);

}
//
// Created by Kocatas on 5/31/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    struct household {
        int total;
        float income;
        int adults;
    }a,b,c;

    struct student {
        struct household family;
        long int idnum;
        int age;
        float gpa;

    };

    struct student s1;
    s1.family.total = 1000;
    printf("%d \n", s1.family.total);

    printf("Please enter household a: \n");
    scanf("%d%f%d",&a.total, &a.income, &a.adults);

    printf("Please enter household b: \n");
    scanf("%d%f%d", &b.total, &b.income, &b.adults);

    printf("Please enter household c: \n");
    scanf("%d%f%d", &c.total, &c.income, &c.adults);

    printf("%d\t%.2f\t%d\n",a.total, a.income, a.adults);
    printf("%d\t%.2f\t%d\n",b.total, b.income, b.adults);
    printf("%d\t%.2f\t%d\n",c.total, c.income, c.adults);


}

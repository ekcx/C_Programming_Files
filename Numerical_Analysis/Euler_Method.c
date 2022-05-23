//
// Created by Kocatas on 18.04.2022.
//

// Ordinary Differential Equations

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Function prototype of g_function()
double g_function(double Vc0, double R, double C, double Vs);

//Function prototype of y_exact()
double y_exact(double t, double R, double C, double Vs);

//Function prototype of euler()
double euler(double t0, double Vc0, double (*g)(double,double,double,double), double h, double tlast, double R, double C, double Vs);

//Function prototype of Error()
double Error(double yex, double yeu);

int main(){

    double t0, Vc0, R, C, Vs, t_last;
    double h1,h2,h3;
    printf("input respectively\n");
    printf(" t0\tVco\n");
    scanf("%lf%lf", &t0,&Vc0);

    printf("input respectively\n");
    printf(" R\tC\tV\n");
    scanf("%lf%lf%lf",&R, &C, &Vs);

    printf("input step size h1 = 0.1: \n");
    scanf("%lf", &h1);

    printf("input step size h1 = 0.01: \n");
    scanf("%lf", &h2);

    printf("input step size h1 = 0.001: \n");
    scanf("%lf", &h3);

    printf("input t_last\n");
    scanf("%lf", &t_last);

    euler(t0, Vc0, g_function, h1, t_last, R, C, Vs);
    euler(t0, Vc0, g_function, h2, t_last, R, C, Vs);
    euler(t0, Vc0, g_function, h3, t_last, R, C, Vs);

}


//Function prototype of g_function()
double g_function (double Vc0, double R, double C, double Vs){

    return (Vs - Vc0) * (1 / (R * C));

}

//Function prototype of y_exact()
double y_exact(double t, double R, double C, double Vs){

    return ((Vs*(1 - exp((-t) / (R*C)))));

}

//Function prototype of euler()
double euler(double t0, double Vc0, double (*g)(double Vc0,double R,double C,double Vs), double h, double tlast, double R, double C, double Vs){


    double exact_value = y_exact(tlast, R, C, Vs);
    printf("Exact Voltage : %lf \n", exact_value);

    for(; t0 < tlast; t0 = t0 + h ){

        Vc0 = Vc0 + h*g(Vc0, R, C, Vs);
    }
    printf("Percentage error for %lf %lf\n", h, fabs(Error(exact_value, Vc0)));

    return Vc0;
}

//Function prototype of Error()
double Error(double yex, double yeu){

    double value = yex - yeu;
    value = value / yex;
    return value * 100;
}


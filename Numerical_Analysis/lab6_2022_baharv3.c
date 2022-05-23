#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 double fpower(double x) {
 	
 	return 60*0.001*exp(-50*x);
 }
 
 
 
double l_rectangle(double (*f)(double), double a, double b, int n){
	double answer, h;
	int i;
	
	answer = f(a);
	h = (b-a)/n;
				 
	for(i=1; i<n; i++)
		answer = answer + f(a+i*h);	
	
	return(h*answer);		 
}



double r_rectangle(double (*f)(double), double a, double b, int n){
	double answer, h;
	int i;
	
	answer = 0;
	h = (b-a)/n;
				 
	for(i=1; i<=n; i++)
		answer = answer + f(a+i*h);	
	
	return(h*answer);		 
}
 
 double simpson(double(*f)(double), double a, double b, int n )
 
 {
 	
 double answer,h;
 double x;
 int i;
  answer=0;
  h=(b-a)/n;
  
  for (i=1;i<=n;i++)	{
  	
  	
  	x=a+i*h;
  	answer=answer+f(x-h)+4*f(x-h/2)+2*f(x);
  }
 	
 	answer=answer-f(b);
 	return(h*answer/6);
 	
 }
 
 
 int main (void)
 {
    double a,b;
    int p;
  	double sim_res,lrect_res,rrect_res;
	    
    printf("Enter a : ");
    scanf("%lf",&a);
    printf("Enter b : ");
    scanf("%lf",&b);
	
		printf("Performance comparison of Left Rectangular, Trapezoidal, Simpson's methods on power \n\n");
	printf("\t\t\tLeft Rectangular Method\t\t Trapezoidal Method\t\t Simpson's' Method\n");
	for(p=10;p<=100;p=p+10){
		printf("Number of panels: %d\t\t%.10lf\t\t\t%.10lf\t\t\t%.10lf\n", p, l_rectangle(fpower,  a, b, p), 0.5*(r_rectangle(fpower,  a, b, p)+l_rectangle(fpower,  a, b, p)),simpson( fpower,  a, b,p));
	}
	
	
 }

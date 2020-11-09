#include <stdio.h>
#include "myMath.h"
int main(){

double x=0;
printf(" Please inset a real number:" );
scanf("%lf.4",&x);
int temp1=0;
double temp2=0;
double temp3=0;
temp1=(int)x;
temp2=Exponent(temp1);
temp3=Power(x,3);	
temp3=add(temp3,temp2);
temp3=add(temp3,-2);
printf("The value of f(x) = e^x+ x^3 − 2 at the point: %.4lf is: %.4lf\n" ,x, temp3);
temp2=temp3=0;
temp2=mul(x,3);
double x1=Power(x,2);
temp3=mul(x1,2);
temp3=add(temp2,temp3);
printf("The value of f(x) = 3x+2X^2 at the point: %.4lf is: %.4lf\n" ,x, temp3);
temp2=temp3=x1=0;	
x1=Power(x,3);
temp2=mul(x1,4);
temp2=div(temp2,5);
temp3=mul(x,2);
temp3=sub(temp2,temp3);
printf("The value of f(x) = (4X^3)/5-2X  at the point: %.4lf is: %.4lf\n" ,x, temp3);
return 0;
}

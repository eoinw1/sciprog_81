#include <stdio.h>
#include <math.h>
double f(double x){
        return tan(x);
}
int main(void) {
/* Declare variables */
   int i;
   float a=0,b=(M_PI/3),h,x,sum=0,integral,p;
h=(b-a)/11;
for(i=0;i<11;i++){
        x=a+i*h;
        sum=sum+2*f(x);
}
p=(b-a)/24;
integral=(p*sum);
printf("\nThe integral is: %lf\n",integral);
}

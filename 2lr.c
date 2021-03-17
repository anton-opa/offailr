#include <stdio.h>
#include <math.h>
int main ()
{
    float x;
    printf ("Enter x->") ;
    scanf ("%f", &x);
    if (sin(x)>=-1./2 && sin(x)<=1./2 && acos(2*sin(x))>=0 && acos(2*sin(x))<=sqrt(acos(-1)/2.)
  && sqrt(cos(pow(acos(2*sin(x)),2)))>=0 && sqrt(cos(pow(acos(2*sin(x)),2)))<=1)  
    {
        double y=acos(2*sin(x));
        double z=sqrt(cos(y*y));
        printf ("y(x)=%lf\t", y);
		    printf ("z(y)=%lf\n", z);
    }
    else
    {
        printf("sorry");
    }
}

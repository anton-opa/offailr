#include <stdio.h>
#include <math.h>
int main ()
{
    float x;
    printf ("Enter x->") ;
    scanf ("%f", &x);
    if (x>=asin(cos(sqrt(acos(-1)/2.))/2.) && x<=acos(-1)/6.)
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

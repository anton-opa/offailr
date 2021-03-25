#include <stdio.h>
#include <math.h>
int main()
{
    const float ng = 0.156729;
    const float vg = 0.523599;
    float x;
<<<<<<< HEAD
    printf("Enter x->");
    scanf("%f", &x);
    if ( x >= ng && x <= vg )
=======
    printf ("Enter x->") ;
    scanf ("%f", &x);
    if (x>=asin(cos(sqrt(acos(-1)/2.))/2.) && x<=acos(-1)/6.)
>>>>>>> 26988518582d2258b44a89f9c6bce53b6c9d1196
    {
        double y = acos(2*sin(x));
        double z = sqrt(cos(y*y));
        printf("y(x)= %lf\t", y);
		    printf("z(y)= %lf\n", z);
    }
    else
    {
        printf("sorry");
    }
}

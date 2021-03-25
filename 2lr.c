#include <stdio.h>
#include <math.h>
int main()
{
    const float ng = 0.156729;
    const float vg = 0.523599;
    float x;
    printf("Enter x->");
    scanf("%f", &x);
    if ( x >= ng && x <= vg )
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

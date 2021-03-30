#include <stdio.h>
#include <math.h>
main()
{
float h, x, f, ep,sum=0;
scanf("%f", &h);
scanf("%f", &ep);
printf("%-s\t", "x");
printf("%s\n", "f(x)");
printf("%s\n","-------------------------");
if (h<0.0f)
	return 0;
for (x=0;(x-0.5)<=h;x+=h)
{
	if ((x-0.25)<=h){
		printf("%-8.5f\t",x);
		f=exp(sin(x));
		printf("%8.5f\n",f);
		sum+=exp(sin(x+h/2.));
	}
	else
	{
		printf("%-8.5f\t",x);
		f=(exp(x))-(1/(sqrt(x)));
		printf("%8.5f\n",f);
		sum+=(exp(x+h/2.))-(1/(sqrt(x+h/2.)));
	}
}
printf("%f",h*sum);
}

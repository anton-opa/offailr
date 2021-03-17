#include <stdio.h>
#include <math.h>
main()
{
const  float ep=0.0000001;

float h,x,f,sum=0;
scanf("%f",&h);
printf("%-s\t", "x");
printf("%s\n", "f(x)");
printf("%s\n","-------------------------");
if (h<0.0f)
	return 0;
for (x=0;x<=1./2+ep;x+=h)
{
	if (x<=1./4+ep){
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

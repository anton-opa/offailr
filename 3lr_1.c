#include <stdio.h>
#include <math.h>
int main()
{
const  float ep=0.0000001;

float h,f,x=0;
scanf("%f",&h);
printf("%-s\t", "x");
printf("%s\n", "f(x)");
printf("%s\n","------------------------");
if (h<0.0f)
	return 0;
do
{
	if(x<=0.25+ep)
	{
		printf("%-8.4f\t",x);
		f=exp(sin(x));
		printf("%8.4f\n",f);
		x+=h;
	}
	else
	{
	printf("%-8.4f\t",x);
	f=(exp(x))-(1/(sqrt(x)));
	printf("%8.4f\n",f);
	x+=h;
	}
}while(x>=0 && x<=1./2+ep);
}

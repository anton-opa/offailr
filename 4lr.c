#include <stdio.h>
#include <math.h>

float intgrl( int n)
{
		float f = 0, x, a = 0, b = 0.5, h ;
		h = (b - a) / n;
		for (int i = 0; i < n; i++)
		{
				x = i * h + h / 2.0;
				if ( x <= 0.25)
				{
						f += exp(sin(x));
				}
				else
				{
						f += exp(x) - 1 / sqrt(x);
				}
		}
				return f*h;
}

int main()
{
		float n1, n2, e ;
		int n = 2;
		scanf("%f", &e);
		n1 = intgrl(n);
		do
		{
				n1 = n2;
				n = n * 2.0;
				n2 = intgrl(n);
		} while(fabs(n2 - n1) / 3.0 >= e);
		printf("Integral Runge = %.5f\n", n2);
}

#include <stdio.h>
#include <math.h>

double intgrl( int n)
{
		double f = 0, x, a = 0, b = 0.5, h ;
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
		double n1, n2, e ;
		int n = 2;
		scanf("%lf", &e);
		n1 = intgrl(n);
		do
		{
				n1 = n2;
				n = n * 2;
				n2 = intgrl(n);
				printf("n = %d\t 2n = %.5lf\t DELTA = %lf\n",n , n2, fabs(n2 - n1) / 3.0);
		} while(fabs(n2 - n1) / 3.0 >= e);
		printf("Integral Runge = %.5lf\n", n2);
}

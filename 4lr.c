#include <stdio.h>
#include <math.h>
int main()
{
		float h, f, e, i = 0, x = 0, s1, s2, r;
		scanf("%f", &h);
		scanf("%f", &e);
		printf("%-s\t", "x");
		printf("%s\n", "f(x)");
		printf("%s\n", "------------------------");
		do
		{
			n=2n;
			do
			{
					if (x <= 0.25)
					{
							f = exp(sin(x));
					}
					else
					{
							f = exp(x) - (1 / (sqrt(x)));
					}
					printf("%-8.4f\t%8.4f\n", x, f);
					i += 1;
					x = 0 + i * h;
			} while (x >= 0 && x <= 0.5);
		}while(r<e)

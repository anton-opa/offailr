#include <stdio.h>
#include <math.h>
void w10 (int n)
{   
        int n1, x, r = 0;
        n1 = n;
        while( n )
        {
                n /= 10;
                r++;
        }
        while(r > 0)
        {
                x = n1 / pow(10, r-1);
                n1 -= x * pow(10, r-1);
                printf("%u\t", x);
                r--;
        }
}
void r10 (int n)
{   
        if(n%10==n) 
        {
                printf("%u\t",n);
                return;
        }
        r10( n / 10 );
        printf("%u\t",n % 10);
}
int main ()
{
    int n;
    scanf("%u", &n);
    w10(n);
    printf("\n");
    r10(n);
}


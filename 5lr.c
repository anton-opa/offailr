#include <stdio.h>
int w10 ( int n )
{
    int x;
    while (n > 0)
    {
        x = n % 10;
        n /= 10;
        printf("%u\t", x);
    }
}
int r10( int n)
{
    int x;
    for ( int i = 0; )
}
int main ()
{
    int n;
    scanf("%u", &n);
    w10(n);
}

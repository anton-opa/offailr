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
int r10(int n)
{
    int x;
    if (n>0)
    {
        x = n % 10;
        printf("%u\t",x);
        return r10(n/10);
    }
}
int main ()
{
    int n;
    scanf("%u", &n);
    w10(n);
    printf("\n");
    r10(n);
}

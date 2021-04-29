#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int z = 0, x = 0;
void fill(int l, int a[], int n[], int p[])
{
    for (int i = 0; i < l; i++)
    {
        a[i] = rand() % 101 - 50;
    }
    for (int i = 0; i < l; i++)
    {
        if (a[i] > 0)
        {
            z++;
        }
        if (a[i] < 0)
        {
            x++;
        }
    }
}

int main()
{
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int A[n];
    int P[z];
    int N[x];
    fill(n, A, P, N);
    printf("%d\n", z);
    printf("%d\n", x);
    for (int i = 0; i < n; i++)
    {
        printf("%4d", A[i]);
    }
    printf("\n");
  /*  for (int i = 0; i < z; i++)
    {
        printf("%4d", P[i]);
    }
    printf("\n");
    for (int i = 0; i < x; i++)
    {
        printf("%4d", N[i]);
    }
    printf("\n");*/
}

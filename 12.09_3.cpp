#include <stdio.h>
 
double power(double x, unsigned a)
{
    int i;
    double pow = a;
    if (n == 0.0)
        pow = 0.0;
    else
        for (i = 1; i < n; ++i)
            pow *= a;
    return pow;
}
 
int main()
{
    unsigned n;
    double a;
    scanf("%lf%d", &a, &n);
    printf("%f\n", power(a, n));
    return 0;
}
1 2 4 1 2
5 4 2 3 4
7 3 2 4 5

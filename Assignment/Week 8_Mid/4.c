#include <stdio.h>
int gcd(int, int);
int lcm(int, int);
int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    if (n1 == 0 && n2 == 0)
        return 0;
    printf("GCD=%d, LCM=%d", gcd(n1, n2), lcm(n1, n2));
    return 0;
}
int gcd(x, y)
{
    int i, small, tmp;
    if (x > y)
        small = y;
    else
        small = x;
    for (i = 1; i <= small; i++)
    {
        if ((x % i == 0) && (y % i == 0))
            tmp = i;
    }
    return tmp;
}
int lcm(x, y)
{
    int i, big;
    if (x > y)
        big = x;
    else
        big = y;
    for (i = big;; i++)
    {
        if ((i % x == 0) && (i % y == 0))
            return i;
    }
}
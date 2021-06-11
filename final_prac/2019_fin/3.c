#include <stdio.h>
int Gcd(int, int);
int Lcm(int, int);
int main()
{
    int a, b, big, small, gcd, lcm;

    while (1)
    {
        printf("Enter two integers>> ");
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0)
            return 0;
        big = a >= b ? a : b;
        small = a <= b ? a : b;
        gcd = Gcd(big, small);
        lcm = Lcm(big, small);
        printf(" GCD=%d, LCM=%d\n", gcd, lcm);
    }
}
int Gcd(A, B)
{
    int i, gcd;
    for (i = 1; i <= B; i++)
        if ((A % i == 0) && (B % i == 0))
            gcd = i;
    return gcd;
}
int Lcm(A, B)
{
    int i;
    for (i = A;; i++)
        if ((i % A == 0) && (i % B == 0))
            return i;
}
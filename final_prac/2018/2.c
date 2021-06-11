#include <stdio.h>
int main()
{
    int n, fac, digit, i;

    while (1)
    {
        printf("Enter an integer>> ");
        scanf("%d", &n);
        if (n == 0)
            return 0;
        fac = 1;
        for (i = n; i > 0; i--)
            fac *= i;
        printf(" The value of %d! is %d\n", n, fac);
        digit = 0;
        while (fac != 0)
        {
            fac /= 10;
            digit++;
        }
        printf(" The number of digits is %d\n", digit);
    }
}
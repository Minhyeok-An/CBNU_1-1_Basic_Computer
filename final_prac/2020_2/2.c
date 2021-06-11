#include <stdio.h>
int main()
{
    int n, facn, tmp, digit, i;
    while (1)
    {
        printf("Enter an integer>> ");
        scanf("%d", &n);
        if (n == 0)
            return 0;
        facn = 1;
        for (i = 1; i <= n; i++)
            facn *= i;
        tmp = facn;
        digit = 0;
        while (tmp != 0)
        {
            digit++;
            tmp /= 10;
        }
        printf(" The value of %d! is %d\n The number of digits is %d\n\n", n, facn, digit);
    }
}
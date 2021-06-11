#include <stdio.h>
int main()
{
    int n, i;
    while (1)
    {
        printf("Enter an integer>> ");
        scanf("%d", &n);
        if (n == 0)
            break;
        printf(" Divisors of %d:", n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                printf(" %d", i);
        }
        printf("\n\n");
    }
}
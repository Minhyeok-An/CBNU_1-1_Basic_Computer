#include <stdio.h>

int main()
{
    int n, i, j, cnt;
    float n_flt;
    while (1)
    {
        scanf("%f", &n_flt);
        if (n_flt == 0)
            return 0;
        n = n_flt;

        if (n != n_flt)
        {
            if (n_flt < 0)
                printf("%fis Decimal Number and Negative Number", n_flt);
            else
                printf("%fis Decimal Number", n_flt);
        }
        else if (n < 0)
            printf("%dis Negative Number", n);
        else if (n == 1)
            printf("1is not Prime Number");
        else
            for (i = 2; i <= n; i++)
            {
                cnt = 0;
                for (j = 2; j < i; j++)
                {
                    if (i % j == 0)
                        break;
                }
                if (j == i)
                    printf(" %d", i);
            }
        printf("\n");
    }
}
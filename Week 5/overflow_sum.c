#include <stdio.h>
int main()
{
    int n, i, tmp, sum_1 = 0, sum_2 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp > 999999999 || tmp < -999999999)
        {
            printf("Input Error");
            return 0;
        }
        sum_1 += tmp;
        if (sum_1 > 999999999)
        {
            sum_1 -= 1000000000;
            sum_2 += 1;
        }
        else if (sum_1 < -999999999)
        {
            sum_1 += 1000000000;
            sum_2 -= 1;
        }
        if (sum_2 > 999999999 || sum_2 < -999999999)
        {
            printf("Range Error");
            return 0;
        }
    }
    if (sum_1 < 0 && sum_2 < 0)
    {
        sum_1 *= (-1);
    }
    if (sum_2 == 0)
    {
        printf("%d", sum_1);
    }
    else
    {
        printf("sum = %d%d", sum_2, sum_1);
    }
}
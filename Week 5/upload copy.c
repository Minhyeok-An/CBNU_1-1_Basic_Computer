#include <stdio.h>
int main()
{
    int n, i, tmp, min = 2147483647, max = -2147483648, sum = 0;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            return 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &tmp);
            sum += tmp;
            if (tmp > max)
                max = tmp;
            if (tmp < min)
                min = tmp;
        }
        printf(" sum : %d\n average : %f\n maximum : %d\n minimum : %d", sum, (double)sum / n, max, min);
    }
}
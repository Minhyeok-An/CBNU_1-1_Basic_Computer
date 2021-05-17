#include <stdio.h>

int main()
{
    int tmp, sum, tmp_sum;
    sum = 0;
    tmp_sum = -2147483647;
    scanf("%d", &tmp);
    tmp_sum += tmp;
    if (tmp > 0)
    {
        if (tmp_sum < sum)
        {
            printf("Overflow Detected");
            return 0;
        }
    }
    else if (tmp < 0)
    {
        if (tmp_sum > sum)
        {
            printf("Underflow Detected");
            return 0;
        }
    }
    sum = tmp_sum;
    printf("%d", sum);
}
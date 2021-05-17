#include <stdio.h>

int main()
{
    while (1)
    {
        unsigned int n, i,flowcnt=0; //4294967295
        int tmp, min = 2147483647, max = -2147483648, sum = 0;
        float avg;
        scanf("%u", &n);
        if (n == 0)
            return 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &tmp);
            if(tmp>2147483647||tmp<-2147483648)
            {
                printf("overflow");
                return 0;
            }
            sum += tmp;
            if (tmp <= min)
            {
                min = tmp;
            }
            if (tmp >= max)
            {
                max = tmp;
            }
        }
        avg = (float)sum / n;
    printf(" sum : %d\n average : %f\n minimum : %d\n maximum : %d\n\n", sum, avg, min, max);
    }
}
#include <stdio.h>

int main()
{
    int n, i, j, cnt;

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            return 0;
        for (i = 2; i <= n; i++)
        {
            cnt = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    cnt++;
            }
            if (cnt == 2)
                printf(" %d", i);
        }
        printf("\n");
    }
}
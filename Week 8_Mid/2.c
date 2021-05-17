#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, i, j, cnt;
    printf("Enter two integers>> ");
    scanf("%d%d", &n1, &n2);
    for (i = n1; i <= n2; i++)
    {
        cnt = 0;
        for (j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                cnt++;
        }
        if (cnt == 1)
            printf(" %d", i);
    }
    return 0;
}
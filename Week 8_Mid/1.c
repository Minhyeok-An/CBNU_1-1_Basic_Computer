#include <stdio.h>
int main()
{
    int n, sum = 0, cnt = 0, first = 0, second = 0, tmp;
    printf("Enter integers>> ");
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
            break;
        sum += n;
        cnt++;
        if (n > second)
        {
            second = n;
            if (n > first)
            {
                tmp = first;
                first = n;
                second = tmp;
            }
        }
    }
    if (cnt > 0)
        printf("first = %d, second = %d, average = %.2f", first, second, (double)sum / cnt);
    return 0;
}
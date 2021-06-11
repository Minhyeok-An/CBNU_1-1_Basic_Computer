#include <stdio.h>
int main()
{
    int n1, n2, a, b, c, cnt, i;
    while (1)
    {
        a = 1;
        b = 0;
        cnt = 0;
        printf("Enter two integers>> ");
        scanf("%d%d", &n1, &n2);
        if (n1 == 0 && n2 == 0)
            return 0;
        while (1)
        {
            c = a + b;
            a = b;
            b = c;
            if (b >= n1 && b <= n2)
                cnt++;
            if (b > n2)
                break;
        }
        printf("The number of Fibonacci number is %d\n\n", cnt);
    }
}
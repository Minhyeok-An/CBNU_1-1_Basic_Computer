#include <stdio.h>
int main()
{
    int a = 1, b = 0, c, n, i;

    scanf("%d", &n);
    if (n == 0)
        printf(" %d", b);
    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", b);
    }
    return 0;
}

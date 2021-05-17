#include <stdio.h>
int main()
{
    unsigned long long int a = 1, b = 0, c;
    int n, i;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("%d is not Natural Number", n);
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %llu", b);
    }
    return 0;
}

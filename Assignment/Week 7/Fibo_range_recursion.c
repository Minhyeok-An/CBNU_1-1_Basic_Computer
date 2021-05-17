#include <stdio.h>
int Fibo(int);
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf(" %d", Fibo(i));
    return 0;
}
int Fibo(n)
{
    if (n == 0) return 0;
    if (n == 1)
        return 1;
    else
        return Fibo(n - 2) + Fibo(n - 1);
}
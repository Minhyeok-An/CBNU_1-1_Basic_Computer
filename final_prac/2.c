#include <stdio.h>
int Digit(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d digit", Digit(n));
    return 0;
}
int Digit(int N)
{
    int tmp = N, cnt = 0;
    while ((tmp /10)!=0||(tmp%10)!=0)
    {
        tmp/=10;
        cnt ++;
    }
    return cnt;
}
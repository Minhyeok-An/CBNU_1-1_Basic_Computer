#include <stdio.h>
int main()
{
    unsigned long long int a = 1, b = 0, c;
    int n, i,cnt=0;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("%d is not Natural Number", n);
        return 0;
    }
    while(1)
    {
cnt++;
        c = a + b;
        if(c<b) break;
        a = b;
        b = c;
    }
    printf("%d", cnt);
    return 0;
}

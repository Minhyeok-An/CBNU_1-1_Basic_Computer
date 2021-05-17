#include <stdio.h>
int main()
{
    int a = 1, b = 0, c,fnum, snum;
    scanf("%d%d", &fnum, &snum);
    while(1)
    {
        c = a + b;
        a = b;
        b = c;
        if(b>snum)return 0;
        if(b>=fnum)
        printf(" %d", b);
    }
}

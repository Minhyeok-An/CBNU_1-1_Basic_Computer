#include <stdio.h>
int main()
{
    int n1, n2, bign,smalln, i, gcd, lcm;
    while (1)
    {
        printf("Enter two integers>> ");
        scanf("%d%d", &n1, &n2);
        if (n1 == 0 && n2 == 0)
            return 0;
        bign = n1 >= n2 ? n1 : n2;
        smalln = n1<= n2 ? n1: n2;
        for(i=1;i<=smalln;i++)
        
            if(n1%i==0&&n2%i==0)
            gcd = i;
        for(i=bign;;i++)
        if(i%n1==0&&i%n2==0){
            lcm = i;
            break;
        }
        printf(" GCD=%d, LCM=%d\n\n", gcd, lcm);
    }
}
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int powed, sum;
    while (1)
    {
        printf("Enter three integers>> ");
        scanf("%d%d%d", &a, &b, &c);
        if (a == 0 || b == 0 || c == 0)
            break;

        if ((a > b) && (a > c))
        {
            powed = a * a;
            sum = b*b + c*c;
        }
        else if ((b > a) && (b > c))
        {
            powed = b * b;
            sum = a*a + c*c;
        }
        else if ((c > a) && (c > b))
        {
            powed = c * c;
            sum = a*a + b*b;
        }
        else
        {
            printf("Result >> Wrong\n");
            continue;
        }

        if (powed == sum)
            printf("Result >> Right\n");
        else
            printf("Result >> Wrong\n");
    }
}
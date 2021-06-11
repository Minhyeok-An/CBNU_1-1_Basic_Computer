#include <stdio.h>
int main()
{
    int n1, n2, i;
    while (1)
    {
        printf("Enter two integers>> ");
        scanf("%d%d", &n1, &n2);
        if (n1 == 0 && n2 == 0)
            return 0;
        printf(" Common divisiors: 1");
        for (i = 2; i <= n1; i++)
            if (n1 % i == 0 && n2 % i == 0)
                printf(", %d", i);
                printf("\n");
    }
}
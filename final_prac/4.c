#include <stdio.h>
#include <string.h>
int main()
{
    int in, total = 0;
    char op;
    scanf("%d", &in);
    total += in;
    while (1)
    {
        scanf("%c %d", &op, &in);
        if (op == '\n')
            break;
        if (op == '+')
            total += in;
        else if (op == '-')
            total -= in;
        else if (op == '*')
            total *= in;
        else if (op == '/')
            total /= in;
        else if (op == '%')
            total %= in;
        else
        {
            printf("operator error");
            break;
        }
    }
    printf("\n%d", total);
    return 0;
}
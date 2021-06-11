#include <stdio.h>
int main()
{
    int total = 0, in;
    char op;

    scanf("%d", &in);
    total += in;

    while (1)
    {
        scanf("%c", &op);
        if (op == '\n')
            break;
        while (op == ' ')
            scanf("%c", &op);
        scanf("%d", &in);

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
            printf("\noperator error");
            break;
        }
    }
    printf("\nTotal: %d", total);
    return 0;
}
#include <stdio.h>
int main()
{
    int total, first, tmp, i, digit;
    char op;

    while (1)
    {
        printf("Enter an expression>> ");
        scanf("%c", &op);
        if (op == '\n')
            return 0;
        scanf("%d", &tmp);
        total = tmp;
        first = (int)op - (int)'0';
        first *= 10;
        while ((tmp / 10) != 0)
        {
            first *= 10;
        }
        total += first;
        while (1)
        {
            scanf("%c", &op);
            if (op == '\n')
                break;
            while (op == ' ')
                scanf("%c", &op);
            scanf("%d", &tmp);
            if (op == '+')
                total += tmp;
            else if (op == '-')
                total -= tmp;
        }
        printf(" Value: %d\n", total);
    }
}
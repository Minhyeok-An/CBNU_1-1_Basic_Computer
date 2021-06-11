#include <stdio.h>
int main()
{
    int tmp, tmp2, total, digit;
    char op;
    while (1)
    {
        printf("Enter an expression>> ");
        scanf("%c", &op);
        if (op == '\n')
            return 0;
        else
            total = op - '0';
        printf("%d\n", total);
        scanf("%c", &op);
        while (op == ' ')
        {
            scanf("%c", &op);
        }
        scanf("%d", &tmp);
        if (op == '\n')
        {
            printf(" Value: %d\n", total);
            break;
        }
        if (op == '+')
            total += tmp;
        if (op == '-')
            total -= tmp;
    }
}
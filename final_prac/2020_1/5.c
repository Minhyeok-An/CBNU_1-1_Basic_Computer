#include <stdio.h>
int main()
{
    int total, tmp;
    char op;
    while (1)
    {
        printf("Enter an expression>> ");
        scanf("%d", &total);
        if (total == 0)
            return 0;
        while (1)
        {
            do
                scanf("%c", &op);
            while (op == ' ');
            if (op == '\n')
                break;
            scanf("%d", &tmp);
            if (op == '+')
                total += tmp;
            else if (op == '-')
                total -= tmp;
        }
        printf(" Value: %d\n\n", total);
    }
}
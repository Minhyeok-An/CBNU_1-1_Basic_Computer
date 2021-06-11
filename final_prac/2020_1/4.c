#include <stdio.h>
int main()
{
    int base, tmp, dec, i, j, flag;
    char n[99999], ref[] = "0123456789abcdef";
    while (1)
    {
        dec = 0;
        flag = 1;
        printf("Enter a base and a number>> ");
        scanf("%d%s", &base, n);
        if(base==0)
        return 0;
        for (i = 0; n[i] != '\0'; i++)
        {
            dec *= base;
            for (j = 0; j < 16; j++)
            {
                flag = 0;
                if (n[i] == ref[j])
                {
                    tmp = j;
                    flag = 1;
                    break;
                }
            }
            if (tmp >= base)
                flag = 0;
            if (flag == 0)
            {
                printf("error detected\n");
                break;
            }
            dec += tmp;
        }
        if (flag == 1)
            printf("%d\n\n", dec);
    }
}
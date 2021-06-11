#include <stdio.h>
#include <string.h>
int main()
{
    int bf, bt, dec, i, j, tmp, flag, share, remain;
    char in[99999], out[99999], ref[] = "0123456789abcdef";
    while (1)
    {
        flag = 0;
        printf("Enter base-from, number, base_to>> ");
        scanf("%d%s%d", &bf, in, &bt);
        if (bf == 0 || bt == 0)
            return 0;
        dec = 0;
        for (i = 0; in[i] != '\0'; i++)
        {
            for (j = 0; j < 16; j++)
            {
                if (in[i] == ref[j])
                {
                    tmp = j;
                    break;
                }
            }
            if (tmp >= bf)
            {
                flag = 1;
                break;
            }
            dec *= bf;
            dec += tmp;
        }
        share = dec;
        while (share != 0)
        {
            remain = share % bt;
            out[i] = ref[remain];
            share /= bt;
            i++;
        }
        out[i] = '\0';
        if (flag == 0)
        {
            for (int j = 0; j < i; j++)
                printf("%c", out[i - j - 1]);
                printf("\n");
        }
        else printf("Error detected\n");
    }
}
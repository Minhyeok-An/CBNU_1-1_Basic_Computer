#include <stdio.h>
int main()
{
    int bf, bt, dec, tmp, digit, i, j;
    char in[20], out[20], ref[] = "0123456789abcdef";
    while (1)
    {
        printf("Enter base-from, number, base-to>> ");
        scanf("%d", &bf);
        if (bf == 0)
            return 0;
        scanf("%s", in);
        scanf("%d", &bt);
        if (bt == 0)
            return 0;
        dec = 0;
        for (i = 0; in[i] != '\0'; i++)
        {
            dec *= bf;
            for (j = 0; j < 16; j++)
            {
                if (in[i] == ref[j])
                    dec += j;
            }
        }
        digit = 0;
        for (i = 0; dec != 0; i++)
        {
            tmp = dec % bt;
            out[i] = ref[tmp];
            dec /= bt;
            digit++;
        }
        printf(" ");
        for (i = 1; i <= digit; i++)
        {
            printf("%c", out[digit - i]);
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int bf, bt, dec, i, j, tmp, digit;
    char number[20], out[20], ref[] = "0123456789abcdef";
    while (1)
    {
        printf("\nEnter base-from, number, base_to>> ");
        scanf("%d", &bf);
        if (bf == 0)
            return 0;
        scanf("%s", number);
        scanf("%d", &bt);
        if (bt == 0)
            return 0;
        dec = 0;
        for (i = 0; number[i] != '\0'; i++)
        {
            dec *= bf;
            for (j = 0; number[i] != ref[j]; j++)
                ;
            dec += j;
        }
        digit = 0;
        for(i=0;dec!=0;i++)
        {
            tmp = dec%bt;
            dec/=bt;
            out[i]=ref[tmp];
            digit ++;
        }
        printf(" ");
        for(i=1;i<=digit;i++){
            printf("%c", out[digit-i]);}
    }
}
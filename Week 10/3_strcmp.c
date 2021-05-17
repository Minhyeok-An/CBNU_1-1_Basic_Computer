#include <stdio.h>
int strcmp(char *d, char *s)
{
    int i = 0;
    while (*(d + i) || *(s + i))
    {
        if (*(d + i) == *(s + i))
        {
            i++;
            continue;
        }
        else if (*(d + i) < *(s + i))
            return -1;
        else if (*(d + i) > *(s + i))
            return 1;
        i++;
    }
    if (*(d + i) == *(s + i))
        return 0;
    else if (*(d + i) != '\0')
        return 1;
    else
        return -1;
}

int main()
{
    char aa[99999] = "abcdef", bb[99999] = "abcdef";

    printf("%d", strcmp(aa, bb));
}
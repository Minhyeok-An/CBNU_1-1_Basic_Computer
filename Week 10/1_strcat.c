#include <stdio.h>
void strcat(char *d, char *s)
{
    int i = 0, j = 0;
    while (d[i])
        i++;
    while (d[i] = s[j])
    {
        i++;
        j++;
    }
}

int main()
{
    int k = 0;
    char aa[99999] = "AnMinhyeok", bb[99999] = "_2021040017";
    strcat(aa, bb);
    while (aa[k])
    {
        printf("%c", aa[k]);
        k++;
    }
}
#include <stdio.h>
int strlen(char *d)
{
    int i = 0;
    while (d[i])
        i++;
    return i;
}

int main()
{
    char aa[99999] = "How long this sentence?";
    printf("%d", strlen(aa));
}
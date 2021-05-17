#include <stdio.h>
void strcpy(char *d, char *s)
{
    int i = 0;
    while (*(d + i) = *(s + i))
        i++;
}

int main()
{
    int i = 0;
    char aa[99999] = "uncopied", bb[99999] = "now it's copied";
    while (*(aa + i))
    {
        printf("%c", *(aa + i));
        i++;
    }
    strcpy(aa, bb);
    printf("\n");
    i = 0;
    while (*(aa + i))
    {
        printf("%c", *(aa + i));
        i++;
    }
}
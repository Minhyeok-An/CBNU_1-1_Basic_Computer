#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void InsertSort(int, int[]);

int main(int argc, const char *argv[])
{
    printf("%d", argc);
    for(int i=0;i<argc;i++)
    {
        printf("\n%s", argv[i]);
    }
}
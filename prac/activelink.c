#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct NameRec
{
    char name[20];
    struct NameRec *next;
} * first, *newrec, *pre, *cur;
int main(int argc, char *argv[])
{
    FILE *in = NULL, *out = NULL;
    in = fopen("input.txt", "r");
    out = fopen(argv[2], "w");
    if ((in == NULL) || (out == NULL))
    {
        printf("\nFailed to open the file.\n");
        return 0;
    }
    char tmp[20];
    while (fscanf(in, "%s", tmp) != EOF)
    {
        newrec = malloc(sizeof(struct NameRec));
        strcpy(newrec->name, tmp);
        if (first == NULL)
        {
            newrec->next = NULL;
            first = newrec;
        }
        else
        {
            cur = first;
            while ((cur != NULL) && strcmp(newrec->name, cur->name) > 0)
            {
                pre = cur;
                cur = cur->next;
            }
            if (cur == first)
                first = newrec;
            else
                pre->next = newrec;
            newrec->next = cur;
        }
    }
    printf("\n");
    cur = first;
    while (cur != NULL)
    {
        printf("%s\n", cur->name);
        cur = cur->next;
    }
}
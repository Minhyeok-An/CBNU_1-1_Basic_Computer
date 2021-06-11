#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Words
{
    int n;
    char word[20];
    struct Words *next;
} * first, *pre, *cur, *newrec;
int main()
{
    int i;
    char indata[300], tmp[20];
    FILE *in;
    in = fopen("data.txt", "r");
    i = 0;

    first = NULL;
    while (fscanf(in, "%s", tmp) != EOF)
    {
        newrec = malloc(sizeof(struct Words));
        strcpy(newrec->word, tmp);
        newrec->n = 1;

        if (first == NULL)
        {
            newrec->next = NULL;
            first = newrec;
        }
        else
        {
            cur = first;
            while ((cur != NULL) && (strcmp(newrec->word, cur->word) > 0))
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
    pre = first;
    cur = pre->next;
    while (cur != NULL)
    {
        if (strcmp(pre->word, cur->word) == 0)
        {
            pre->n += 1;
            pre->next = cur->next;
        }
        else
            pre = cur;
        cur = cur->next;
    }
    cur = first;
    while (cur != NULL)
    {
        printf("%s(%d) ", cur->word, cur->n);
        pre = cur;
        cur = cur->next;
        free(pre);
    }

    fclose(in);
    return 0;
}
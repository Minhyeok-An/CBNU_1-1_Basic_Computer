#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NameRec
{
    char name[20];
    struct NameRec *next;
} * first, *newrec, *pre, *cur, *next;

int main()
{
    int i, n;
    char indata[20];
    printf("How many people?\n");
    scanf("%d", &n);
    printf("Please enter name of %d people\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", indata);
        newrec = malloc(sizeof(struct NameRec));
        strcpy(newrec->name, indata);
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
    printf("\nWho do you want to find?\n");
    scanf("%s", indata);

    pre = NULL;
    cur = first;
    next = cur->next;
    printf("\n");
    while (1)
    {
        if (next == NULL)
        {
            if (strcmp(cur->name, indata) == 0)
            {
                printf("%s, %s, (NULL)", pre->name, cur->name);
                return 0;
            }
            else
            {
                printf("Not exist.");
                return 0;
            }
        }
        else if (strcmp(cur->name, indata) == 0)
        {
            if (pre == NULL)
            {
                printf("(NULL), %s, %s", cur->name, next->name);
                return 0;
            }
            else
            {
                printf("%s, %s, %s", pre->name, cur->name, next->name);
                return 0;
            }
        }
        else
        {
            pre = cur;
            cur = next;
            next = next->next;
        }
    }
}
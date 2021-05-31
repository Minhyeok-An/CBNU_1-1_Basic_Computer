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
    char indata[20];
    printf("enter names\n");
    do
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
    }while(getchar() !='\n');
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
}
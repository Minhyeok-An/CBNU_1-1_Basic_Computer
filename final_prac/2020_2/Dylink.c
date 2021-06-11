#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Word
{
    int n;
    char word[20];
    struct Word *next;
} * first, *newrec, *pre, *cur;
int main()
{
    int flag;
    char tmp[20]="0";
    while (1)
    {
        flag = 1;
        first = NULL;
        printf("Enter the words>> ");
        while (1)
        {
            scanf("%s", tmp);
            if (strcmp(tmp, "11") == 0)
            {
                if (flag == 1)
                    return 0;
                else
                    break;
            }
            flag = 0;
            newrec = malloc(sizeof(struct Word));
            newrec->n = 1;
            strcpy(newrec->word, tmp);
            if (first == NULL)
            {
                newrec->next = NULL;
                first = newrec;
            }
            else
            {
                cur = first;
                while(cur != NULL && strcmp(newrec->word, cur->word) > 0)
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
        cur =first;
        while(cur!=NULL)
        {
            printf("%s\n", cur->word);
            pre = cur;
            cur = cur->next;
            free(pre);
        }
    }
}
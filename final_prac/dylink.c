#include <stdio.h>
#include <stdlib.h>
struct Dylink
{
    int n;
    struct Dylink *next;
} * first, *newrec, *pre, *cur;

int main()
{
    int tmp, flag;
    while (1)
    {
        first = NULL;
        flag = 1;
        printf("Enter numbers>> ");
        while (1)
        {
            scanf("%d", &tmp);
            if (tmp < 0)
            {
                if (flag == 1)
                    return 0;
                else
                    break;
            }
            flag = 0;
            newrec = malloc(sizeof(struct Dylink));
            newrec->n = tmp;

            if (first == NULL)
            {
                newrec->next = NULL;
                first = newrec;
            }
            else
            {
                cur = first;
                while (cur != NULL && cur->n < newrec->n)
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
            cur = first;
            while (cur != NULL)
            {
                printf("%d(%p) ", cur->n, &cur->n);
                cur = cur->next;
            }
            printf("\n");
        }
        free(newrec);
    }
}